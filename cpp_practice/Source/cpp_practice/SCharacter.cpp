// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"



// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//��ʼ���ĵط�
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringSrmComp");  //������ һ���ֱ�
	SpringArmComp->SetupAttachment(RootComponent);   //���������������root�ڵ��ϵ�

	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");	//������ һ�����
	CameraComp->SetupAttachment(SpringArmComp);      //�����ֱ�������������ϵ�



}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASCharacter::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector(), value);
}

// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//���Կ���player��ʱ�������ǰ��
	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::MoveForward);

	//yaw ��������ת Pitch ��������ת
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);

}

