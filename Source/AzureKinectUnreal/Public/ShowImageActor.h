// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShowImageActor.generated.h"

UCLASS()
class AZUREKINECTUNREAL_API AShowImageActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShowImageActor();
	UFUNCTION(BlueprintImplementableEvent)
	void GetColor_Image(UTexture2D* outImage);
	UFUNCTION(BlueprintImplementableEvent)
	void GetDepth_Image(UTexture2D* outImage);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
