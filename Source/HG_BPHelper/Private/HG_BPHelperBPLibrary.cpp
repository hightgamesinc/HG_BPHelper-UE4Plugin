// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HG_BPHelperBPLibrary.h"
#include "HG_BPHelper.h"
#include "FileHelper.h"
#include "Paths.h"


UHG_BPHelperBPLibrary::UHG_BPHelperBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UHG_BPHelperBPLibrary::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool UHG_BPHelperBPLibrary::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

