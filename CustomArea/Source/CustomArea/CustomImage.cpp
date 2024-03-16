// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomImage.h"

#pragma region SCustomImage

FReply SCustomImage::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (AdvancedHitTexture)
	{
		if (!CachedOverlap)
		{
			for (auto img : OverlapImages)
			{
				if (img.IsValid() && img->CachedOverlap)
				{
					return img->SImage::OnMouseButtonDown(img->GetCachedGeometry(), MouseEvent);
				}
			}
			return FReply::Unhandled();
		}
		return SImage::OnMouseButtonDown(MyGeometry, MouseEvent);
	}
	return SImage::OnMouseButtonDown(MyGeometry, MouseEvent);
}

FReply SCustomImage::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	if (AdvancedHitTexture)
	{
		if (!CachedOverlap)
		{
			for (auto img : OverlapImages)
			{
				if (img.IsValid() && img->CachedOverlap)
				{
					return img->SImage::OnMouseButtonDoubleClick(img->GetCachedGeometry(), InMouseEvent);
				}
			}
			return FReply::Unhandled();
		}
		return SImage::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
	}
	return SImage::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
}

FReply SCustomImage::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (AdvancedHitTexture)
	{
		if (!CachedOverlap)
		{
			for (auto img : OverlapImages)
			{
				if (img.IsValid() && img->CachedOverlap)
				{
					return img->SImage::OnMouseButtonUp(img->GetCachedGeometry(), MouseEvent);
				}
			}
			return FReply::Unhandled();
		}
		return SImage::OnMouseButtonUp(MyGeometry, MouseEvent);
	}
	return SImage::OnMouseButtonUp(MyGeometry, MouseEvent);
}

void SCustomImage::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (AdvancedHitTexture)
	{
		if (CachedOverlap)
		{
			return SImage::OnMouseEnter(MyGeometry, MouseEvent);
		}
		return;
	}
	return SImage::OnMouseEnter(MyGeometry, MouseEvent);
}

void SCustomImage::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	if (AdvancedHitTexture)
	{
		if (!CachedOverlap)
		{
			return SImage::OnMouseLeave(MouseEvent);
		}
		return;
	}
	return SImage::OnMouseLeave(MouseEvent);
}
int x=0;
bool SCustomImage::IsMouseOverOpaquePixel(const FPointerEvent& MouseEvent)
{
	bool OverOpaque = true;
	FGeometry MyGeometry = GetCachedGeometry();
	FVector2D LocalPosition = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());
	// 
	LocalPosition.X = floor(LocalPosition.X);
	LocalPosition.Y = floor(LocalPosition.Y);
	LocalPosition /= MyGeometry.GetLocalSize();
	if (LocalPosition.X > 1.0f || LocalPosition.Y > 1.0f || LocalPosition.X < 0.0f || LocalPosition.Y < 0.0f)
	{
		return false;
	}
	int ImageWidth = AdvancedHitTexture->PlatformData->SizeX;
	int ImageHeight = AdvancedHitTexture->PlatformData->SizeY;
	LocalPosition.X *= ImageWidth;
	LocalPosition.Y *= ImageHeight;
	// UE_LOG(LogTemp,Warning,TEXT("LocalPosition cvt2 Index:%d,x: %f y: %f"),cnt,LocalPosition.X,LocalPosition.Y);
	int BufferPosition = floor(LocalPosition.Y) * ImageWidth + floor(LocalPosition.X);

	TextureCompressionSettings OldCompressionSettings = AdvancedHitTexture->CompressionSettings; 
	//TextureMipGenSettings OldMipGenSettings = m_Texture->MipGenSettings; 
	bool OldSRGB = AdvancedHitTexture->SRGB;
 
	AdvancedHitTexture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
	//m_Texture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
	AdvancedHitTexture->SRGB = false;
	AdvancedHitTexture->UpdateResource();
	
	const FColor* ImageData = static_cast<const FColor*>(AdvancedHitTexture->PlatformData->Mips[0].BulkData.LockReadOnly());

	if (!ImageData)
	{
		return false;
	}
	
	if (ImageData[BufferPosition].A < AdvancedHitAlpha)
	{
		OverOpaque = false;
	}
	x++;
	if (OverOpaque)
	{
		UE_LOG(LogTemp,Log,TEXT("OverOpaque %d , %d"),x,ImageData[BufferPosition].A);
	}else
	{
		UE_LOG(LogTemp,Error,TEXT("OverOpaque not %d , %d"),x,ImageData[BufferPosition].A);
	}
	
	AdvancedHitTexture->PlatformData->Mips[0].BulkData.Unlock();
	AdvancedHitTexture->CompressionSettings = OldCompressionSettings;
	//m_Texture->MipGenSettings = OldMipGenSettings;
	AdvancedHitTexture->SRGB = OldSRGB;
	AdvancedHitTexture->UpdateResource();
	
	return OverOpaque;
}
FReply SCustomImage::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (!AdvancedHitTexture)
	{
		return SImage::OnMouseMove(MyGeometry, MouseEvent);
	}

	TArray<SCustomImage*> allButtons;
	allButtons.Add(this);
	for (auto Img : OverlapImages)
	{
		if (Img.IsValid())
		{
			allButtons.Add(Img.Get());
		}
	}
	SCustomImage* PreviousOverlap = nullptr;
	SCustomImage* CurrentOverlap = nullptr;
	for (auto Img : allButtons)
	{
		if (!PreviousOverlap && Img->CachedOverlap)
		{
			PreviousOverlap = Img;
		}
		bool bOverlap = Img->IsMouseOverOpaquePixel(MouseEvent);
		if ((!CurrentOverlap && bOverlap) || (CurrentOverlap && bOverlap && Img->siblingIndex > CurrentOverlap->siblingIndex))
		{
			CurrentOverlap = Img;
		}
	}
	
	// if (CurrentOverlap)
	// {
	// 	UE_LOG(LogTemp,Warning,TEXT("Img->Name %d :%s %d"),x,*CurrentOverlap->Name,CurrentOverlap->siblingIndex);
	// }else
	// {
	// 	UE_LOG(LogTemp,Log,TEXT("Img Null %d"),x);
	// }
	if (PreviousOverlap == CurrentOverlap && CurrentOverlap == this)
	{
		return SImage::OnMouseMove(MyGeometry, MouseEvent);
	}
	if (PreviousOverlap != CurrentOverlap)
	{
		if (PreviousOverlap)
		{
			PreviousOverlap->CachedOverlap = false;
			if (PreviousOverlap->GetHover())
			{
				PreviousOverlap->SetHover(false);
				
				PreviousOverlap->OnMouseLeave(MouseEvent);
			}
		}
		if (CurrentOverlap)
		{
			CurrentOverlap->CachedOverlap = true;
			if (!CurrentOverlap->GetHover())
			{
				CurrentOverlap->SetHover(true);
				CurrentOverlap->OnMouseEnter(CurrentOverlap->GetCachedGeometry(), MouseEvent);
			}
		}
	}
	else
	{
		if (CurrentOverlap == nullptr)
		{
			if (GetHover())
			{
				SetHover(false);
				OnMouseLeave(MouseEvent);
			}
		}
		else
		{
			CurrentOverlap->SImage::OnMouseMove(CurrentOverlap->GetCachedGeometry(), MouseEvent);
		}
	}
	return FReply::Handled();
}

FCursorReply SCustomImage::OnCursorQuery(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent) const
{
	if (!bIsHovered) return FCursorReply::Unhandled();
	TOptional<EMouseCursor::Type> TheCursor = GetCursor();
	return TheCursor.IsSet() ? FCursorReply::Cursor(TheCursor.GetValue()) : FCursorReply::Unhandled();
}

#pragma endregion

#pragma region UCustomImage

UCustomImage::UCustomImage(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer),
	AdvancedHitTexture(nullptr), AdvancedHitAlpha(NULL), siblingIndex(0)
{
}

void UCustomImage::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	if(MyImage.IsValid())
	{ 

		(static_cast<SCustomImage*>(MyImage.Get()))->SetAdvancedHitTexture(AdvancedHitTexture);
		(static_cast<SCustomImage*>(MyImage.Get()))->SetAdvancedHitAlpha(AdvancedHitAlpha);
		(static_cast<SCustomImage*>(MyImage.Get()))->SetName(Name);
		TArray<TSharedPtr<SCustomImage>> OverlapButtonsTemp;
	
		for (auto btn : OverlapImages)
		{
			if (IsValid(btn)&&btn->GetCacheSiImage().IsValid()) 
			{
				OverlapButtonsTemp.Add(StaticCastSharedPtr<SCustomImage>(btn->GetCacheSiImage()));
			}
		}
	 
		(static_cast<SCustomImage*>(MyImage.Get()))->OverlapImages= OverlapButtonsTemp;

	
		UCanvasPanel* Parent = CastChecked<UCanvasPanel>(GetParent());
		if (IsValid(Parent)) 
		{
			siblingIndex= Parent->GetChildIndex(this);
			(static_cast<SCustomImage*>(MyImage.Get()))->siblingIndex = siblingIndex;
		}
	 
	}
}


TSharedRef<SWidget> UCustomImage::RebuildWidget()
{
	TSharedPtr<SCustomImage> Image = SNew(SCustomImage).FlipForRightToLeftFlowDirection(bFlipForRightToLeftFlowDirection);
	Image->SetAdvancedHitTexture(AdvancedHitTexture);
	Image->SetAdvancedHitAlpha(AdvancedHitAlpha);
	Image->SetName(Name);

	MyImage = Image;
	return MyImage.ToSharedRef();
}
#pragma endregion