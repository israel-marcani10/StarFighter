// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyShipWithPatternBuilder.h"
#include "PatternEnemyShipDirector.generated.h"

UCLASS()
class STARFIGHTER_API APatternEnemyShipDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APatternEnemyShipDirector();

private:
	IEnemyShipWithPatternBuilder* EnemyShipBuilder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void construirNaveEnemiga();
	void setNaveEnemigabuilder(AActor* Builder);
	class AEnemyShipWithPattern* getNaveEnemiga();
};
