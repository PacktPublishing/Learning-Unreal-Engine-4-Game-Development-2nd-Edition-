// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwitchTarget.generated.h"

UCLASS()
class FIRSTGAME_API ASwitchTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwitchTarget();

	UPROPERTY(VisibleAnywhere)
	class UStaticMesh* TargetMesh;

	FVector InitialLocation;
	FRotator InitialRotation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
