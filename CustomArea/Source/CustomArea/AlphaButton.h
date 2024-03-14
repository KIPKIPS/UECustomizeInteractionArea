// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Runtime/UMG/Public/UMG.h"
#include "Components/Button.h"
#include "AlphaButton.generated.h"

class CUSTOMAREA_API SAlphaButton : public SButton {
public:
	UTexture2D* AdvancedHitTexture;
    int AdvancedHitAlpha;

    TArray<TSharedPtr<SAlphaButton>> OverlapButtons;

    int  siblingIndex;

    bool CachedOverlap;

    SAlphaButton() :AdvancedHitTexture(NULL), AdvancedHitAlpha(0), CachedOverlap(false)
    {
        
    }

    void SetAdvancedHitTexture(UTexture2D* InTexture) 
    { AdvancedHitTexture = InTexture; }
    void SetAdvancedHitAlpha(int InAlpha) 
    { AdvancedHitAlpha = InAlpha; }

    virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
    virtual FReply OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent) override;
    virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
    virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
    virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
    virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;
    virtual FCursorReply OnCursorQuery(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent) const override;
    virtual TSharedPtr<IToolTip> GetToolTip() override
    { 
        return (bIsHovered ? SWidget::GetToolTip() : NULL);
    }

    bool IsMouseOverOpaquePixel( const FPointerEvent & MouseEvent);

    void SetHover(bool hover) 
    {
        bIsHovered = hover;
    }
    bool GetHover() 
    {
        return bIsHovered;
    }
};

UCLASS()
class CUSTOMAREA_API UAlphaButton : public UButton
{
	GENERATED_UCLASS_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AdvancedHitTest") 
    UTexture2D* AdvancedHitTexture;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AdvancedHitTest", meta = (ClampMin = "0.0", ClampMax = "255.0", UIMin = "0.0", UIMax = "255.0")) 
    int AdvancedHitAlpha;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AdvancedHitTest")
    TArray<UAlphaButton *> OverlapButtons;

    UFUNCTION(BlueprintCallable, Category = "AdvancedHitTest") void SetAdvancedHitTexture(UTexture2D* InTexture) 
    {
    	AdvancedHitTexture = InTexture;
    	if (MyButton.IsValid()) 
    	(static_cast<SAlphaButton*>(MyButton.Get()))->SetAdvancedHitTexture(AdvancedHitTexture);
    }
    UFUNCTION(BlueprintCallable, Category = "AdvancedHitTest") void SetAdvancedHitAlpha(int InAlpha)
    {
    	AdvancedHitAlpha = InAlpha;
    	if (MyButton.IsValid()) 
    		(static_cast<SAlphaButton*>(MyButton.Get()))->SetAdvancedHitAlpha(AdvancedHitAlpha);
    }

    UFUNCTION(BlueprintCallable, Category = "AdvancedHitTest") 
    int getSibIndex() 
    {
    	return siblingIndex;
    }

    TSharedPtr<SButton> GetCacheSButton()
    {
    	return MyButton;
    }
    virtual void SynchronizeProperties() override;
    virtual TSharedRef<SWidget> RebuildWidget() override;
    int  siblingIndex;
};