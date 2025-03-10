// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "Pa_OSubscriber.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API APlayerShip : public ANave
{
	GENERATED_BODY()

public:
	APlayerShip();

	UPROPERTY(EditAnywhere, Category = "Component")
		UParticleSystem* ShipExplosionPlayer; // para la explosion

	// propiedades propias de la nave jugador
	UPROPERTY(BlueprintReadOnly)
		float Max_Health;  // salud maxima
	UPROPERTY(BlueprintReadOnly)
		float Current_Health; // salud actual
	UPROPERTY(BlueprintReadOnly)
		float Max_Armor; // armadura maxima
	UPROPERTY(BlueprintReadOnly)
		float Current_Armor; // armadura actual

	// propiedad para saber la puntuacion del jugador
	UPROPERTY(BlueprintReadOnly)
		float PlayerScore;


	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset1;

	// variable para saber que tan rapido dispara el arma
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float FireRate;
	// sonido del disparo
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
		class USoundBase* FireSound;

	// Nombres est�ticos para enlaces de ejes y disparo
	static const FName MoveHorizontalBinding;
	static const FName MoveVerticalBinding;
	static const FName FireBinding1;
	static const FName FireBinding2;

	// metodos para el disparo de las municiones diferentes
	void FireShoot1();
	void FireShoot2();
	void ExplodeAndDestroy();
	int32 BulletNumbers;
	// metodos para el movimiento de la nave jugador
	void MoveHorizontal(float AxisValue);
	void MoveVertical(float AxisValue);


	/*
	//Inventario
	UPROPERTY()
		UInventoryComponent* ShipInventory;

	UFUNCTION()
		void TakeItem(AMyCapsule* InventoryItem);

	UFUNCTION()
		void DropItem();*/

	UFUNCTION()
		virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved,
			FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;


protected:
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:

	// bandera para controlar los disparos
	//int32 bCanFire : 1;

	// Variable para una gesti�n eficiente del temporizador ShotTimerExpired
	//FTimerHandle TimerHandle_ShotTimerExpired; 
	bool ValueMovement;
	float ValueShoot;
private:
	//La hora actual de esta Torre del Reloj
	FString Time;

public:
	//Llamado cuando la hora de esta Torre del Reloj ha cambiado
	void CambiarAccion();

	//Establecer la hora de esta Torre del Reloj
	void setCambiarAccion(FString miAccion);

	//Devuelve la hora de esta Torre del Reloj
	FORCEINLINE FString GetTime() { return Time; };
private:
	//Los suscriptores de este Publisher
	UPROPERTY()
		TArray<APawn*> Subscribers = TArray<APawn*>();
public:
	//Agregar el suscriptor aprobado a la lista
	virtual void Subscribe(APawn* Subscriber);

	//Eliminar el suscriptor aprobado de la lista
	virtual void UnSubscribe(APawn* SubscriberToRemove);

	//Notificar a todos los Suscriptores que algo ha cambiado
	virtual void NotifySubscribers();
};
