// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"
 
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class CPP_PRACTICE_API ASCharacter : public ACharacter  //添加的c++类出来的时候会默认在前面添加一个A，目的是标识这是一个类，派生自Actor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();

protected:

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComp; //上面需要声明一下这是一个类

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
