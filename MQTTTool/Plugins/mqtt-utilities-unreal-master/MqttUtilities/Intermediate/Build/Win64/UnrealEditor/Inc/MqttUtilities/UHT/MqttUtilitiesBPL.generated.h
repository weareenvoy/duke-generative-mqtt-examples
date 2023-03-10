// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MqttUtilitiesBPL.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMqttClientInterface;
struct FMqttClientConfig;
#ifdef MQTTUTILITIES_MqttUtilitiesBPL_generated_h
#error "MqttUtilitiesBPL.generated.h already included, missing '#pragma once' in MqttUtilitiesBPL.h"
#endif
#define MQTTUTILITIES_MqttUtilitiesBPL_generated_h

#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_SPARSE_DATA
#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateMqttClient);


#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateMqttClient);


#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_ACCESSORS
#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMqttUtilitiesBPL(); \
	friend struct Z_Construct_UClass_UMqttUtilitiesBPL_Statics; \
public: \
	DECLARE_CLASS(UMqttUtilitiesBPL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MqttUtilities"), NO_API) \
	DECLARE_SERIALIZER(UMqttUtilitiesBPL)


#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMqttUtilitiesBPL(); \
	friend struct Z_Construct_UClass_UMqttUtilitiesBPL_Statics; \
public: \
	DECLARE_CLASS(UMqttUtilitiesBPL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MqttUtilities"), NO_API) \
	DECLARE_SERIALIZER(UMqttUtilitiesBPL)


#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttUtilitiesBPL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttUtilitiesBPL) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttUtilitiesBPL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttUtilitiesBPL); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMqttUtilitiesBPL(UMqttUtilitiesBPL&&); \
	NO_API UMqttUtilitiesBPL(const UMqttUtilitiesBPL&); \
public: \
	NO_API virtual ~UMqttUtilitiesBPL();


#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttUtilitiesBPL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMqttUtilitiesBPL(UMqttUtilitiesBPL&&); \
	NO_API UMqttUtilitiesBPL(const UMqttUtilitiesBPL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttUtilitiesBPL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttUtilitiesBPL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttUtilitiesBPL) \
	NO_API virtual ~UMqttUtilitiesBPL();


#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_12_PROLOG
#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_SPARSE_DATA \
	FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_RPC_WRAPPERS \
	FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_ACCESSORS \
	FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_INCLASS \
	FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_SPARSE_DATA \
	FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_ACCESSORS \
	FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_INCLASS_NO_PURE_DECLS \
	FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MQTTUTILITIES_API UClass* StaticClass<class UMqttUtilitiesBPL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID__projects_mqtt_tests_ue_MyProject___Copy_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
