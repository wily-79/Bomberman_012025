// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Bomberman_012025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberman_012025GameMode() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberman_012025GameMode();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberman_012025GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References

// Begin Class ABomberman_012025GameMode
void ABomberman_012025GameMode::StaticRegisterNativesABomberman_012025GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberman_012025GameMode);
UClass* Z_Construct_UClass_ABomberman_012025GameMode_NoRegister()
{
	return ABomberman_012025GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberman_012025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Bomberman_012025GameMode.h" },
		{ "ModuleRelativePath", "Bomberman_012025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberman_012025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABomberman_012025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberman_012025GameMode_Statics::ClassParams = {
	&ABomberman_012025GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberman_012025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberman_012025GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberman_012025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberman_012025GameMode.OuterSingleton, Z_Construct_UClass_ABomberman_012025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberman_012025GameMode.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABomberman_012025GameMode>()
{
	return ABomberman_012025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberman_012025GameMode);
ABomberman_012025GameMode::~ABomberman_012025GameMode() {}
// End Class ABomberman_012025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Bomberman_012025_Source_Bomberman_012025_Bomberman_012025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberman_012025GameMode, ABomberman_012025GameMode::StaticClass, TEXT("ABomberman_012025GameMode"), &Z_Registration_Info_UClass_ABomberman_012025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberman_012025GameMode), 3514258060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Bomberman_012025_Source_Bomberman_012025_Bomberman_012025GameMode_h_1733765927(TEXT("/Script/Bomberman_012025"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Bomberman_012025_Source_Bomberman_012025_Bomberman_012025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Bomberman_012025_Source_Bomberman_012025_Bomberman_012025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
