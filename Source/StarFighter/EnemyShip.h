// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "EnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AEnemyShip : public ANave
{
	GENERATED_BODY()
	
public:
	AEnemyShip();

	// propiedad para la nave aerea enemigo
	
	UPROPERTY(EditAnywhere, Category = "Component")
		float life; // vida de la nave
	UPROPERTY(EditAnywhere, Category = "Component")
		UParticleSystem* ShipExplosionEnemy; // para la explosion

	// metodo para destruir o explosion
	void ExplodeAndDestroy();

protected:
	virtual void BeginPlay() override;

public:
	void Tick(float DeltaTime) override;
	float MovementY;
	bool aux = true;
	FVector MoveDirection;
	FVector Movement;
	FRotator NewRotation;
protected:
	float TimeToSpawnShoot;
	float ShootTime;
	FVector DistanceShoot;
	int ContadorBalas;
	float Tiempo;
	bool ValueIf;

};
