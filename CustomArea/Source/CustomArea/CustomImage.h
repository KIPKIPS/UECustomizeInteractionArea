// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/UMGStyle.h"
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "CustomImage.generated.h"

class CUSTOMAREA_API SCustomImage : public SImage
{
public:
	UTexture2D* AdvancedHitTexture;
	int AdvancedHitAlpha;

	TArray<TSharedPtr<SCustomImage>> OverlapImages;

	int siblingIndex;

	bool CachedOverlap;
	FString Name;

	SCustomImage() : AdvancedHitTexture(nullptr), AdvancedHitAlpha(0), siblingIndex(0), CachedOverlap(false)
	{
	}

	void SetAdvancedHitTexture(UTexture2D* InTexture)
	{
		AdvancedHitTexture = InTexture;
	}

	void SetAdvancedHitAlpha(int InAlpha)
	{
		AdvancedHitAlpha = InAlpha;
	}

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

	bool IsMouseOverOpaquePixel(const FPointerEvent& MouseEvent);

	void SetHover(bool hover)
	{
		bIsHovered = hover;
	}

	bool GetHover()
	{
		return bIsHovered;
	}
	void SetName(FString _name)
	{
		Name = _name;
	}
};


UCLASS()
class CUSTOMAREA_API UCustomImage : public UImage
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AdvancedHitTest")
	UTexture2D* AdvancedHitTexture;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AdvancedHitTest",
		meta = (ClampMin = "0.0", ClampMax = "255.0", UIMin = "0.0", UIMax = "255.0"))
	int AdvancedHitAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AdvancedHitTest")
	TArray<UCustomImage*> OverlapImages;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AdvancedHitTest")
	FString Name;

	UFUNCTION(BlueprintCallable, Category = "AdvancedHitTest")
	void SetAdvancedHitTexture(UTexture2D* InTexture)
	{
		AdvancedHitTexture = InTexture;
		if (MyImage.IsValid())
		{
			static_cast<SCustomImage*>(MyImage.Get())->SetAdvancedHitTexture(AdvancedHitTexture);
		}
	}

	UFUNCTION(BlueprintCallable, Category = "AdvancedHitTest")
	void SetAdvancedHitAlpha(int InAlpha)
	{
		AdvancedHitAlpha = InAlpha;
		if (MyImage.IsValid())
		{
			static_cast<SCustomImage*>(MyImage.Get())->SetAdvancedHitAlpha(AdvancedHitAlpha);
		}
	}

	UFUNCTION(BlueprintCallable, Category = "AdvancedHitTest")
	int getSibIndex()
	{
		return siblingIndex;
	}
	UFUNCTION(BlueprintCallable, Category = "AdvancedHitTest")
	void SetName()
	{
		static_cast<SCustomImage*>(MyImage.Get())->SetName(Name);
	}

	TSharedPtr<SImage> GetCacheSiImage()
	{
		return MyImage;
	}

	virtual void SynchronizeProperties() override;
	virtual TSharedRef<SWidget> RebuildWidget() override;
	int siblingIndex;
};
