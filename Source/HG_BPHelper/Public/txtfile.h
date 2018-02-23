// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "txtfile.generated.h"

/**
 * 
 */
UCLASS()
class HG_BPHELPER_API Utxtfile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()public:

		UFUNCTION(BlueprintCallable, Category = "save")
			static bool FileSaveString(FString SaveTextB, FString FileNameB);

		UFUNCTION(BlueprintPure, Category = "save")
			static bool FileLoadString(FString FileNameA, FString& SaveTextA);
	
	
	
	
};
