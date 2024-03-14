// Fill out your copyright notice in the Description page of Project Settings.

#include "Runtime/UMG/Public/UMG.h"
#include "AlphaButton.h"

#pragma region >>> SAlphaButton <<<
FReply SAlphaButton::OnMouseMove(const FGeometry & MyGeometry, const FPointerEvent & MouseEvent)
{
	if (!AdvancedHitTexture) return SButton::OnMouseMove(MyGeometry, MouseEvent);
	bool WhatToReturn = true;
	FVector2D LocalPosition = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());
	LocalPosition.X = floor(LocalPosition.X);
	LocalPosition.Y = floor(LocalPosition.Y);
	LocalPosition /= MyGeometry.GetLocalSize();
	int ImageWidth = AdvancedHitTexture->PlatformData->SizeX;
	LocalPosition.X *= ImageWidth;
	LocalPosition.Y *= AdvancedHitTexture->PlatformData->SizeY;
	int BufferPosition = (LocalPosition.Y * ImageWidth) + LocalPosition.X;
	FColor* ImageData = static_cast<FColor*>((AdvancedHitTexture->PlatformData->Mips[0]).BulkData.Lock(LOCK_READ_ONLY));
	if (!ImageData) { WhatToReturn = false; }
	else { if (ImageData[BufferPosition].A <= AdvancedHitAlpha) WhatToReturn = false; }
	AdvancedHitTexture->PlatformData->Mips[0].BulkData.Unlock();
	if (WhatToReturn != bIsHovered) {
		bIsHovered = WhatToReturn;
		if (bIsHovered) SButton::OnMouseEnter(MyGeometry, MouseEvent);
		else SButton::OnMouseLeave(MouseEvent);
	}
	return SButton::OnMouseMove(MyGeometry, MouseEvent);
}

FCursorReply SAlphaButton::OnCursorQuery(const FGeometry & MyGeometry, const FPointerEvent & CursorEvent) const
{
	if (!bIsHovered) return FCursorReply::Unhandled();
	TOptional<EMouseCursor::Type> TheCursor = GetCursor();
	return (TheCursor.IsSet()) ? FCursorReply::Cursor(TheCursor.GetValue()) : FCursorReply::Unhandled();
}

#pragma endregion

#pragma region >>> UAlphaButton <<<
void UAlphaButton::SynchronizeProperties() {
	Super::SynchronizeProperties();
	(static_cast<SAlphaButton*>(MyButton.Get()))->SetAdvancedHitTexture(AdvancedHitTexture);
	(static_cast<SAlphaButton*>(MyButton.Get()))->SetAdvancedHitAlpha(AdvancedHitAlpha);
}
TSharedRef<SWidget> UAlphaButton::RebuildWidget() {
	TSharedPtr<SAlphaButton> AlphaButton = SNew(SAlphaButton)
		.OnClicked(BIND_UOBJECT_DELEGATE(FOnClicked, SlateHandleClicked))
		.OnPressed(BIND_UOBJECT_DELEGATE(FSimpleDelegate, SlateHandlePressed))
		.OnReleased(BIND_UOBJECT_DELEGATE(FSimpleDelegate, SlateHandleReleased))
		.OnHovered_UObject(this, &ThisClass::SlateHandleHovered)
		.OnUnhovered_UObject(this, &ThisClass::SlateHandleUnhovered)
		.ButtonStyle(&WidgetStyle)
		.ClickMethod(ClickMethod)
		.TouchMethod(TouchMethod)
		.IsFocusable(IsFocusable)
		;

	AlphaButton->SetAdvancedHitTexture(AdvancedHitTexture);
	AlphaButton->SetAdvancedHitAlpha(AdvancedHitAlpha);

	MyButton = AlphaButton;

	if (GetChildrenCount() > 0) Cast<UButtonSlot>(GetContentSlot())->BuildSlot(MyButton.ToSharedRef());

	return MyButton.ToSharedRef();
}
#pragma endregion