// Fill out your copyright notice in the Description page of Project Settings.

#include "AlphaButton.h"
// #include "WidgetLayoutLibrary.h"

#pragma region >>> SAlphaButton <<<

FReply SAlphaButton::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	 if (AdvancedHitTexture)
	 {
		 if (!CachedOverlap) 
		 {
			 for (auto btn : OverlapButtons)
			 {
				 if (btn.IsValid() && btn->CachedOverlap)
				 {
					 return btn->SButton::OnMouseButtonDown(btn->GetCachedGeometry(), MouseEvent);
				 }
			 }
		    return FReply::Unhandled();
	      }
		 else 
		 {
			return SButton::OnMouseButtonDown(MyGeometry, MouseEvent);
		 }

	 }
	return SButton::OnMouseButtonDown(MyGeometry, MouseEvent);
}
 FReply SAlphaButton::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent) 
{
	 if (AdvancedHitTexture)
	 {
		 if (!CachedOverlap)
		 {
			 for (auto btn : OverlapButtons)
			 {
				 if (btn.IsValid() && btn->CachedOverlap)
				 {
					 return btn->SButton::OnMouseButtonDoubleClick(btn->GetCachedGeometry(), InMouseEvent);
				 }
			 }
			 return FReply::Unhandled();
		 }
		 else
			 return SButton::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
	 }
	return SButton::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
}
 FReply SAlphaButton::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) 
{
	 if (AdvancedHitTexture)
	 {
		 if (!CachedOverlap)
		 { 
			 
			 for (auto btn : OverlapButtons)
			 {
				 if (btn.IsValid()&&btn->CachedOverlap)
				 {
					return btn-> SButton::OnMouseButtonUp(btn->GetCachedGeometry(), MouseEvent);
				 }
			 }
			 return FReply::Unhandled();
		 }
		 else 
		 {
			 return SButton::OnMouseButtonUp(MyGeometry, MouseEvent);
		 }
	 }
	return SButton::OnMouseButtonUp(MyGeometry, MouseEvent);
}

 void SAlphaButton::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) 
{
	if (AdvancedHitTexture)
	{
		if (CachedOverlap)
			return SButton::OnMouseEnter(MyGeometry, MouseEvent);
		else
			return;
	}
	return SButton::OnMouseEnter(MyGeometry, MouseEvent);
}
 void SAlphaButton::OnMouseLeave(const FPointerEvent& MouseEvent) 
{
	if (AdvancedHitTexture)
	{
		if (!CachedOverlap)
			return SButton::OnMouseLeave(MouseEvent);
		else
			return;
	}
	return SButton::OnMouseLeave(MouseEvent);
}

bool SAlphaButton::IsMouseOverOpaquePixel( const FPointerEvent & MouseEvent)
{
	
	bool OverOpaque = true;
	FGeometry MyGeometry = GetCachedGeometry();
	FVector2D LocalPosition = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());
	LocalPosition.X = floor(LocalPosition.X);
	LocalPosition.Y = floor(LocalPosition.Y);
	LocalPosition /= MyGeometry.GetLocalSize();

	if (LocalPosition.X > 1.0f || LocalPosition.Y > 1.0f || LocalPosition.X<0.0f || LocalPosition.Y<0.0f)
		return false;
	int ImageWidth = AdvancedHitTexture->PlatformData->SizeX;
	LocalPosition.X *= ImageWidth;
	LocalPosition.Y *= AdvancedHitTexture->PlatformData->SizeY;
	int BufferPosition = (LocalPosition.Y * ImageWidth) + LocalPosition.X;
	FColor* ImageData = static_cast<FColor*>((AdvancedHitTexture->PlatformData->Mips[0]).BulkData.Lock(LOCK_READ_ONLY));
	if (!ImageData) 
	{
		OverOpaque = false; 
	}
	else 
	{ 
		if (ImageData[BufferPosition].A <= AdvancedHitAlpha) 
		OverOpaque = false; 
	}
	AdvancedHitTexture->PlatformData->Mips[0].BulkData.Unlock();

	return OverOpaque;
}
FReply SAlphaButton::OnMouseMove(const FGeometry & MyGeometry, const FPointerEvent & MouseEvent)
{
	if (!AdvancedHitTexture) 
		return SButton::OnMouseMove(MyGeometry, MouseEvent);

	TArray<SAlphaButton *> allButtons;
	allButtons.Add(this);
	for (auto btn : OverlapButtons)
	{
		if (btn.IsValid())
		{
			allButtons.Add(btn.Get());
		}
	}
	SAlphaButton *previousOverlap = nullptr;
	SAlphaButton *currentOverlap = nullptr;
	for (auto btn : allButtons)
	{
		if (!previousOverlap&&btn->CachedOverlap)
		{
			previousOverlap = btn;
		}
		bool overlap= btn->IsMouseOverOpaquePixel( MouseEvent);
		if ((!currentOverlap&&overlap) || (currentOverlap&&overlap&&btn->siblingIndex>currentOverlap->siblingIndex))
		{
			currentOverlap = btn;
		}
	}
	
	if (previousOverlap != currentOverlap)
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green,
			FString::Printf(TEXT("previouse index %i current index %i"),
				previousOverlap ? previousOverlap->siblingIndex : -1,
				currentOverlap ? currentOverlap->siblingIndex : -1
			));


	if(previousOverlap == currentOverlap&&currentOverlap==this)
	{
		return SButton::OnMouseMove(MyGeometry, MouseEvent);
	}
	else if(previousOverlap!= currentOverlap)
	 {
		
		 if (previousOverlap) 
		 {
			 previousOverlap->CachedOverlap = false;
			 if (previousOverlap->GetHover()) 
			 {
				 previousOverlap->SetHover(false);
				 previousOverlap->OnMouseLeave(MouseEvent);
			 }
			
		 }

		 if (currentOverlap)
		 {
			 currentOverlap->CachedOverlap = true;
			 if (!currentOverlap->GetHover())
			 {
				 currentOverlap->SetHover(true);
				 currentOverlap->OnMouseEnter(currentOverlap->GetCachedGeometry(), MouseEvent);
			 }
			 
		 }
	 }
	 else
	 {
		 if (currentOverlap == nullptr)
		 {
			 if (GetHover())
			 {
				 SetHover(false);
				 OnMouseLeave(MouseEvent);
			 }
			
		 }
		 else
		 {

			 currentOverlap->SButton::OnMouseMove(currentOverlap->GetCachedGeometry(), MouseEvent);
		 }
		 
	 }
	 return FReply::Handled();
	
	
}

FCursorReply SAlphaButton::OnCursorQuery(const FGeometry & MyGeometry, const FPointerEvent & CursorEvent) const
{
	if (!bIsHovered) return FCursorReply::Unhandled();
	TOptional<EMouseCursor::Type> TheCursor = GetCursor();
	return (TheCursor.IsSet()) ? FCursorReply::Cursor(TheCursor.GetValue()) : FCursorReply::Unhandled();
}

#pragma endregion

#pragma region >>> UAlphaButton <<<

UAlphaButton::UAlphaButton(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer),AdvancedHitTexture(NULL), AdvancedHitAlpha(NULL),siblingIndex(0)
{
}

void UAlphaButton::SynchronizeProperties() 
{
	Super::SynchronizeProperties();
	
	if(MyButton.IsValid())
	{ 

	 (static_cast<SAlphaButton*>(MyButton.Get()))->SetAdvancedHitTexture(AdvancedHitTexture);
	 (static_cast<SAlphaButton*>(MyButton.Get()))->SetAdvancedHitAlpha(AdvancedHitAlpha);
	 TArray<TSharedPtr<SAlphaButton>> OverlapButtonsTemp;
	
	 for (auto btn : OverlapButtons)
	 {
		 if (  IsValid(btn)&&btn->GetCacheSButton().IsValid()) 
		 {
			 OverlapButtonsTemp.Add(StaticCastSharedPtr<SAlphaButton>(btn->GetCacheSButton()));
		 }
	 }
	 
	 (static_cast<SAlphaButton*>(MyButton.Get()))->OverlapButtons= OverlapButtonsTemp;

	
	 UCanvasPanel* Parent = CastChecked<UCanvasPanel>(GetParent());
	 if (IsValid(Parent)) 
	 {
		 siblingIndex= Parent->GetChildIndex(this);
		 (static_cast<SAlphaButton*>(MyButton.Get()))->siblingIndex = siblingIndex;
	 }
	 
	}
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