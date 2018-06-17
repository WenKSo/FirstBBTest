// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYPROJECT12_LightSwitchCodeOnly_generated_h
#error "LightSwitchCodeOnly.generated.h already included, missing '#pragma once' in LightSwitchCodeOnly.h"
#endif
#define MYPROJECT12_LightSwitchCodeOnly_generated_h

#define MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitchCodeOnly(); \
	friend MYPROJECT12_API class UClass* Z_Construct_UClass_ALightSwitchCodeOnly(); \
public: \
	DECLARE_CLASS(ALightSwitchCodeOnly, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject12"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchCodeOnly) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALightSwitchCodeOnly(); \
	friend MYPROJECT12_API class UClass* Z_Construct_UClass_ALightSwitchCodeOnly(); \
public: \
	DECLARE_CLASS(ALightSwitchCodeOnly, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject12"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchCodeOnly) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwitchCodeOnly(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwitchCodeOnly) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchCodeOnly); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchCodeOnly); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchCodeOnly(ALightSwitchCodeOnly&&); \
	NO_API ALightSwitchCodeOnly(const ALightSwitchCodeOnly&); \
public:


#define MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchCodeOnly(ALightSwitchCodeOnly&&); \
	NO_API ALightSwitchCodeOnly(const ALightSwitchCodeOnly&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchCodeOnly); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchCodeOnly); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitchCodeOnly)


#define MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_9_PROLOG
#define MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_RPC_WRAPPERS \
	MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_INCLASS \
	MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_INCLASS_NO_PURE_DECLS \
	MyProject12_Source_MyProject12_LightSwitchCodeOnly_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject12_Source_MyProject12_LightSwitchCodeOnly_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
