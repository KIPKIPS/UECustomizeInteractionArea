// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
// #include "Runtime/UMG/Public/UMG.h"
#include "Components/Button.h"
#include "AlphaButton.generated.h"

class CUSTOMAREA_API SAlphaButton : public SButton {
public:
	UTexture2D* AdvancedHitTexture;
	int AdvancedHitAlpha;

	SAlphaButton() :AdvancedHitTexture(NULL), AdvancedHitAlpha(0) {}

	void SetAdvancedHitTexture(UTexture2D* InTexture) { AdvancedHitTexture = InTexture; }
	void SetAdvancedHitAlpha(int InAlpha) { AdvancedHitAlpha = InAlpha; }

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override {
		if (!bIsHovered) return FReply::Unhandled();
		return SButton::OnMouseButtonDown(MyGeometry, MouseEvent);
	}
	virtual FReply OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent) override {
		if (!bIsHovered) return FReply::Unhandled();
		return SButton::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
	}
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override {
		if (!bIsHovered) return FReply::Unhandled();
		return SButton::OnMouseButtonUp(MyGeometry, MouseEvent);
	}
	virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override {
		if (AdvancedHitTexture) return;
		return SButton::OnMouseEnter(MyGeometry, MouseEvent);
	}
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override {
		return SButton::OnMouseLeave(MouseEvent);
	}

	virtual FCursorReply OnCursorQuery(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent) const override;
	virtual TSharedPtr<IToolTip> GetToolTip() override { return (bIsHovered ? SWidget::GetToolTip() : NULL); }

};

UCLASS()
class CUSTOMAREA_API UAlphaButton : public UButton
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AdvancedHitTest") UTexture2D* AdvancedHitTexture;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AdvancedHitTest", meta = (ClampMin = "0.0", ClampMax = "255.0", UIMin = "0.0", UIMax = "255.0")) int AdvancedHitAlpha;
	UFUNCTION(BlueprintCallable, Category = "AdvancedHitTest") void SetAdvancedHitTexture(UTexture2D* InTexture) {
		AdvancedHitTexture = InTexture;
		if (MyButton.IsValid()) (static_cast<SAlphaButton*>(MyButton.Get()))->SetAdvancedHitTexture(AdvancedHitTexture);
	}
	UFUNCTION(BlueprintCallable, Category = "AdvancedHitTest") void SetAdvancedHitAlpha(int InAlpha) {
		AdvancedHitAlpha = InAlpha;
		if (MyButton.IsValid()) (static_cast<SAlphaButton*>(MyButton.Get()))->SetAdvancedHitAlpha(AdvancedHitAlpha);
	}

	UAlphaButton(const FObjectInitializer& ObjectInitializer) : AdvancedHitTexture(NULL), AdvancedHitAlpha(NULL), Super(ObjectInitializer) {}

	virtual void SynchronizeProperties() override;
	virtual TSharedRef<SWidget> RebuildWidget() override;
	
	
};