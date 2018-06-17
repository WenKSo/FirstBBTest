// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT12_MyProject12Character_generated_h
#error "MyProject12Character.generated.h already included, missing '#pragma once' in MyProject12Character.h"
#endif
#define MYPROJECT12_MyProject12Character_generated_h

#define MyProject12_Source_MyProject12_MyProject12Character_h_12_RPC_WRAPPERS
#define MyProject12_Source_MyProject12_MyProject12Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject12_Source_MyProject12_MyProject12Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject12Character(); \
	friend MYPROJECT12_API class UClass* Z_Construct_UClass_AMyProject12Character(); \
public: \
	DECLARE_CLASS(AMyProject12Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject12"), NO_API) \
	DECLARE_SERIALIZER(AMyProject12Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject12_Source_MyProject12_MyProject12Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject12Character(); \
	friend MYPROJECT12_API class UClass* Z_Construct_UClass_AMyProject12Character(); \
public: \
	DECLARE_CLASS(AMyProject12Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject12"), NO_API) \
	DECLARE_SERIALIZER(AMyProject12Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject12_Source_MyProject12_MyProject12Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject12Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject12Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject12Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject12Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject12Character(AMyProject12Character&&); \
	NO_API AMyProject12Character(const AMyProject12Character&); \
public:


#define MyProject12_Source_MyProject12_MyProject12Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject12Character(AMyProject12Character&&); \
	NO_API AMyProject12Character(const AMyProject12Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject12Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject12Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject12Character)


#define MyProject12_Source_MyProject12_MyProject12Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AMyProject12Character, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProject12Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AMyProject12Character, CursorToWorld); }


#define MyProject12_Source_MyProject12_MyProject12Character_h_9_PROLOG
#define MyProject12_Source_MyProject12_MyProject12Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject12_Source_MyProject12_MyProject12Character_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject12_Source_MyProject12_MyProject12Character_h_12_RPC_WRAPPERS \
	MyProject12_Source_MyProject12_MyProject12Character_h_12_INCLASS \
	MyProject12_Source_MyProject12_MyProject12Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject12_Source_MyProject12_MyProject12Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject12_Source_MyProject12_MyProject12Character_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject12_Source_MyProject12_MyProject12Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject12_Source_MyProject12_MyProject12Character_h_12_INCLASS_NO_PURE_DECLS \
	MyProject12_Source_MyProject12_MyProject12Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject12_Source_MyProject12_MyProject12Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
