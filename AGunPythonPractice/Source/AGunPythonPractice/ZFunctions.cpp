// Fill out your copyright notice in the Description page of Project Settings.


#include "ZFunctions.h"

void UZFunctions::CalledFromPython(FString InputString)
{
	UE_LOG(LogTemp, Error, TEXT("%S"), *InputString);
}