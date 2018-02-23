// Fill out your copyright notice in the Description page of Project Settings.

#include "txtfile.h"
#include "HG_BPHelper.h"
#include "FileHelper.h"
#include "Paths.h"



bool Utxtfile::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool Utxtfile::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}




