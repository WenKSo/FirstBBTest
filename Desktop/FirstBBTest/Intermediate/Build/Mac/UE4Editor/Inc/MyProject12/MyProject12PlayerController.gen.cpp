// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyProject12PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject12PlayerController() {}
// Cross Module References
	MYPROJECT12_API UClass* Z_Construct_UClass_AMyProject12PlayerController_NoRegister();
	MYPROJECT12_API UClass* Z_Construct_UClass_AMyProject12PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MyProject12();
// End Cross Module References
	void AMyProject12PlayerController::StaticRegisterNativesAMyProject12PlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMyProject12PlayerController_NoRegister()
	{
		return AMyProject12PlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProject12PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject12,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "MyProject12PlayerController.h" },
				{ "ModuleRelativePath", "MyProject12PlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyProject12PlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyProject12PlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject12PlayerController, 3353145412);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject12PlayerController(Z_Construct_UClass_AMyProject12PlayerController, &AMyProject12PlayerController::StaticClass, TEXT("/Script/MyProject12"), TEXT("AMyProject12PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject12PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
