// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "PCL_Library.h"
#include "PCL_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AZUREKINECTUNREAL_API UPCL_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPCL_Component();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable)
		void LoadPCL();
	UPROPERTY(EditAnywhere)
		float size = 50;
	UPROPERTY(EditAnywhere)
		float scale = 1;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
private:
	pcl::PointCloud <pcl::PointXYZ> cloud;
	TSubclassOf<AStaticMeshActor> PCL_Actor;
		
};
