// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	UE_LOG(LogTemp,Warning,TEXT("WorldPosition constructor"));
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{	
	Super::BeginPlay();
	FString name = GetOwner()->GetName();
	UE_LOG(LogTemp,Error, TEXT("The name actor is %s"),*name);
	FString position = GetOwner()->GetTransform().ToString();
	UE_LOG(LogTemp,Error, TEXT("The position actor is %s"),*position);
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

