// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"



// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//初始化的地方
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringSrmComp");  //创建了 一个手臂
	SpringArmComp->SetupAttachment(RootComponent);   //设置相机是连接在root节点上的

	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");	//创建了 一个相机
	CameraComp->SetupAttachment(SpringArmComp);      //设置手臂是连接在相机上的



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

	//可以控制player的时候代码往前走
	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::MoveForward);

	//yaw 是左右旋转 Pitch 是上下旋转
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);

}

