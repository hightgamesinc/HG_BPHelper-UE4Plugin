// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HG_BPHelperBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHG_BPHelperBPLibrary() {}
// Cross Module References
	HG_BPHELPER_API UClass* Z_Construct_UClass_UHG_BPHelperBPLibrary_NoRegister();
	HG_BPHELPER_API UClass* Z_Construct_UClass_UHG_BPHelperBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HG_BPHelper();
	HG_BPHELPER_API UFunction* Z_Construct_UFunction_UHG_BPHelperBPLibrary_FileLoadString();
	HG_BPHELPER_API UFunction* Z_Construct_UFunction_UHG_BPHelperBPLibrary_FileSaveString();
// End Cross Module References
	void UHG_BPHelperBPLibrary::StaticRegisterNativesUHG_BPHelperBPLibrary()
	{
		UClass* Class = UHG_BPHelperBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileLoadString", (Native)&UHG_BPHelperBPLibrary::execFileLoadString },
			{ "FileSaveString", (Native)&UHG_BPHelperBPLibrary::execFileSaveString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UHG_BPHelperBPLibrary_FileLoadString()
	{
		struct HG_BPHelperBPLibrary_eventFileLoadString_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((HG_BPHelperBPLibrary_eventFileLoadString_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HG_BPHelperBPLibrary_eventFileLoadString_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextA = { UE4CodeGen_Private::EPropertyClass::Str, "SaveTextA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HG_BPHelperBPLibrary_eventFileLoadString_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA = { UE4CodeGen_Private::EPropertyClass::Str, "FileNameA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HG_BPHelperBPLibrary_eventFileLoadString_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveTextA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileNameA,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HG_BPHelper" },
				{ "DisplayName", "TXT Load" },
				{ "ModuleRelativePath", "Public/HG_BPHelperBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHG_BPHelperBPLibrary, "FileLoadString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(HG_BPHelperBPLibrary_eventFileLoadString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHG_BPHelperBPLibrary_FileSaveString()
	{
		struct HG_BPHelperBPLibrary_eventFileSaveString_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((HG_BPHelperBPLibrary_eventFileSaveString_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HG_BPHelperBPLibrary_eventFileSaveString_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameB = { UE4CodeGen_Private::EPropertyClass::Str, "FileNameB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HG_BPHelperBPLibrary_eventFileSaveString_Parms, FileNameB), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextB = { UE4CodeGen_Private::EPropertyClass::Str, "SaveTextB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HG_BPHelperBPLibrary_eventFileSaveString_Parms, SaveTextB), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileNameB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveTextB,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HG_BPHelper" },
				{ "DisplayName", "TXT Save" },
				{ "ModuleRelativePath", "Public/HG_BPHelperBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHG_BPHelperBPLibrary, "FileSaveString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HG_BPHelperBPLibrary_eventFileSaveString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHG_BPHelperBPLibrary_NoRegister()
	{
		return UHG_BPHelperBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UHG_BPHelperBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_HG_BPHelper,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHG_BPHelperBPLibrary_FileLoadString, "FileLoadString" }, // 3091002590
				{ &Z_Construct_UFunction_UHG_BPHelperBPLibrary_FileSaveString, "FileSaveString" }, // 2128602957
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "HG_BPHelperBPLibrary.h" },
				{ "ModuleRelativePath", "Public/HG_BPHelperBPLibrary.h" },
				{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHG_BPHelperBPLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHG_BPHelperBPLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHG_BPHelperBPLibrary, 990392346);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHG_BPHelperBPLibrary(Z_Construct_UClass_UHG_BPHelperBPLibrary, &UHG_BPHelperBPLibrary::StaticClass, TEXT("/Script/HG_BPHelper"), TEXT("UHG_BPHelperBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHG_BPHelperBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
