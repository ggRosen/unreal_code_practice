// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ZFunctions.generated.h"

/**
 * 
 */
UCLASS()
class AGUNPYTHONPRACTICE_API UZFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void CalledFromPython(FString InputString);
	
};
