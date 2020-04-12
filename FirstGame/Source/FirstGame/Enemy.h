// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class FIRSTGAME_API AEnemy : public ACharacter
{
	GENERATED_BODY()
public:
	AEnemy();

	UPROPERTY(EditAnywhere, Category = "Pawn")
	class UBehaviorTree* BehaviorTree;

	UPROPERTY(EditAnywhere, Category = "BehaviorTree", Meta = (MakeEditWidget = true))
	FVector PatrolPoint1;

	UPROPERTY(EditAnywhere, Category = "BehaviorTree", Meta = (MakeEditWidget = true))
	FVector PatrolPoint2;

	UPROPERTY(EditAnywhere, Category = "BehaviorTree", Meta = (MakeEditWidget = true))
	FVector PatrolPoint3;

	UPROPERTY(EditAnywhere, Category = "BehaviorTree", Meta = (MakeEditWidget = true))
	FVector PatrolPoint4;

	class AEnemyController* EnemyController;

	UPROPERTY(BlueprintReadOnly)
	bool bIsAccelerating;

	UFUNCTION(BlueprintCallable)
	void SetIsAccelerating(bool bAccelerating);

	UPROPERTY(VisibleAnywhere, Category = "BehaviorTree")
	class USphereComponent* AgroSphere;

	UPROPERTY(VisibleAnywhere, Category = "BehaviorTree")
	USphereComponent* AttackSphere;

	UFUNCTION()
	void AgroSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void AgroSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void AttackSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void AttackSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(BlueprintReadOnly)
	bool bIsAttacking;

	bool bAttackTimerStarted;
	bool bInAttackRange;

	UFUNCTION(BlueprintCallable)
	void SetIsAttacking(bool Attacking);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Anims")
	class UAnimMontage* CountessAttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackMinTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackMaxTime;

	FTimerHandle AttackTimer;

	/**
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float MaxHealth;
	*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void StartAttack();
	void Attack();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
