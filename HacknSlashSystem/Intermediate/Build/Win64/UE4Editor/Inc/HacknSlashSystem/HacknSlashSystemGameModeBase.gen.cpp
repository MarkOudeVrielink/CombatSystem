// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HacknSlashSystemGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHacknSlashSystemGameModeBase() {}
// Cross Module References
	HACKNSLASHSYSTEM_API UClass* Z_Construct_UClass_AHacknSlashSystemGameModeBase_NoRegister();
	HACKNSLASHSYSTEM_API UClass* Z_Construct_UClass_AHacknSlashSystemGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HacknSlashSystem();
// End Cross Module References
	void AHacknSlashSystemGameModeBase::StaticRegisterNativesAHacknSlashSystemGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHacknSlashSystemGameModeBase_NoRegister()
	{
		return AHacknSlashSystemGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AHacknSlashSystemGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_HacknSlashSystem();
			OuterClass = AHacknSlashSystemGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AHacknSlashSystemGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HacknSlashSystemGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("HacknSlashSystemGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHacknSlashSystemGameModeBase, 3526130682);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHacknSlashSystemGameModeBase(Z_Construct_UClass_AHacknSlashSystemGameModeBase, &AHacknSlashSystemGameModeBase::StaticClass, TEXT("/Script/HacknSlashSystem"), TEXT("AHacknSlashSystemGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHacknSlashSystemGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
