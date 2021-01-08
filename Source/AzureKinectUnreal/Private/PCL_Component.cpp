// Fill out your copyright notice in the Description page of Project Settings.


#include "PCL_Component.h"
#include "Runtime/Engine/Public/DrawDebugHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

// Sets default values for this component's properties
UPCL_Component::UPCL_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PCL_Actor= ConstructorHelpers::FClassFinder<AStaticMeshActor>(TEXT("Blueprint'/Game/BP/StaticMesh.StaticMesh_C'")).Class;
	// ...
}


// Called when the game starts
void UPCL_Component::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPCL_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPCL_Component::LoadPCL()
{
	pcl::io::loadPLYFile("C:/Users/pengchong/Desktop/Laurana50k.ply", cloud);
	//pcl::io::loadPCDFile("C:/Users/pengchong/Desktop/Laurana50k.ply", cloud);
	FTransform trans;
	trans.SetRotation(FQuat(0.0, 0.0, 0.0,0.0));
	trans.SetScale3D(FVector(1.0, 1.0, 1.0));
	for (pcl::PointXYZ i : cloud.points)
	{
		trans.SetLocation(FVector(i.x, i.y, i.z));
		UE_LOG(LogTemp, Warning, TEXT("--%d,--%d,--%d"), i.x, i.y, i.z);
		//::DrawDebugPoint(GetWorld(), FVector(i.x, i.y, i.z)*scale, size, FColor::White);
		GetWorld()->SpawnActor<AStaticMeshActor>(PCL_Actor, trans);
	}
}

