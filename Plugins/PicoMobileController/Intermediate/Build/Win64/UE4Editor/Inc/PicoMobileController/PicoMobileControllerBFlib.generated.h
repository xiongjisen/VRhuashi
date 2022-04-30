// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPicoArmModelJoint : uint8;
enum class EGazeBehavior : uint8;
struct FRotator;
struct FVector;
#ifdef PICOMOBILECONTROLLER_PicoMobileControllerBFlib_generated_h
#error "PicoMobileControllerBFlib.generated.h already included, missing '#pragma once' in PicoMobileControllerBFlib.h"
#endif
#define PICOMOBILECONTROLLER_PicoMobileControllerBFlib_generated_h

#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_8_DELEGATE \
static inline void FDelegateWithoutParam_DelegateWrapper(const FScriptDelegate& DelegateWithoutParam) \
{ \
	DelegateWithoutParam.ProcessDelegate<UObject>(NULL); \
}


#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_SPARSE_DATA
#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPicoResetG1Controller); \
	DECLARE_FUNCTION(execPicoSetControllerConnectedStatusChangedDelegate); \
	DECLARE_FUNCTION(execPicoSwitchArmModelJoint); \
	DECLARE_FUNCTION(execPicoGetArmModelJoint); \
	DECLARE_FUNCTION(execPicoChooseArmModelJoint); \
	DECLARE_FUNCTION(execPicoSetPointerTiltAngle); \
	DECLARE_FUNCTION(execPicoGetPointerTiltAngle); \
	DECLARE_FUNCTION(execPicoGetElbowDepth); \
	DECLARE_FUNCTION(execPicoSetElbowDepth); \
	DECLARE_FUNCTION(execPicoGetElbowHeight); \
	DECLARE_FUNCTION(execPicoSetElbowHeight); \
	DECLARE_FUNCTION(execPicoGetGazeType); \
	DECLARE_FUNCTION(execPicoSetGazeType); \
	DECLARE_FUNCTION(execPicoGetControllerBatteryLevel); \
	DECLARE_FUNCTION(execGetPicoControllerOrientationAndPosition); \
	DECLARE_FUNCTION(execGetDeviceType); \
	DECLARE_FUNCTION(execIsPicoControllerAvailable);


#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPicoResetG1Controller); \
	DECLARE_FUNCTION(execPicoSetControllerConnectedStatusChangedDelegate); \
	DECLARE_FUNCTION(execPicoSwitchArmModelJoint); \
	DECLARE_FUNCTION(execPicoGetArmModelJoint); \
	DECLARE_FUNCTION(execPicoChooseArmModelJoint); \
	DECLARE_FUNCTION(execPicoSetPointerTiltAngle); \
	DECLARE_FUNCTION(execPicoGetPointerTiltAngle); \
	DECLARE_FUNCTION(execPicoGetElbowDepth); \
	DECLARE_FUNCTION(execPicoSetElbowDepth); \
	DECLARE_FUNCTION(execPicoGetElbowHeight); \
	DECLARE_FUNCTION(execPicoSetElbowHeight); \
	DECLARE_FUNCTION(execPicoGetGazeType); \
	DECLARE_FUNCTION(execPicoSetGazeType); \
	DECLARE_FUNCTION(execPicoGetControllerBatteryLevel); \
	DECLARE_FUNCTION(execGetPicoControllerOrientationAndPosition); \
	DECLARE_FUNCTION(execGetDeviceType); \
	DECLARE_FUNCTION(execIsPicoControllerAvailable);


#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPicoMobileControllerBFlib(); \
	friend struct Z_Construct_UClass_UPicoMobileControllerBFlib_Statics; \
public: \
	DECLARE_CLASS(UPicoMobileControllerBFlib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PicoMobileController"), NO_API) \
	DECLARE_SERIALIZER(UPicoMobileControllerBFlib)


#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPicoMobileControllerBFlib(); \
	friend struct Z_Construct_UClass_UPicoMobileControllerBFlib_Statics; \
public: \
	DECLARE_CLASS(UPicoMobileControllerBFlib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PicoMobileController"), NO_API) \
	DECLARE_SERIALIZER(UPicoMobileControllerBFlib)


#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoMobileControllerBFlib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoMobileControllerBFlib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoMobileControllerBFlib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoMobileControllerBFlib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoMobileControllerBFlib(UPicoMobileControllerBFlib&&); \
	NO_API UPicoMobileControllerBFlib(const UPicoMobileControllerBFlib&); \
public:


#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoMobileControllerBFlib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoMobileControllerBFlib(UPicoMobileControllerBFlib&&); \
	NO_API UPicoMobileControllerBFlib(const UPicoMobileControllerBFlib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoMobileControllerBFlib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoMobileControllerBFlib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoMobileControllerBFlib)


#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_PRIVATE_PROPERTY_OFFSET
#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_26_PROLOG
#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_PRIVATE_PROPERTY_OFFSET \
	PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_SPARSE_DATA \
	PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_RPC_WRAPPERS \
	PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_INCLASS \
	PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_PRIVATE_PROPERTY_OFFSET \
	PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_SPARSE_DATA \
	PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_INCLASS_NO_PURE_DECLS \
	PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOMOBILECONTROLLER_API UClass* StaticClass<class UPicoMobileControllerBFlib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PicoTest_Plugins_PicoMobileController_Source_PicoMobileController_Public_PicoMobileControllerBFlib_h


#define FOREACH_ENUM_EGAZEBEHAVIOR(op) \
	op(EGazeBehavior::Never) \
	op(EGazeBehavior::DuringMotion) \
	op(EGazeBehavior::Always) 

enum class EGazeBehavior : uint8;
template<> PICOMOBILECONTROLLER_API UEnum* StaticEnum<EGazeBehavior>();

#define FOREACH_ENUM_EPICOARMMODELJOINT(op) \
	op(EPicoArmModelJoint::Controller) \
	op(EPicoArmModelJoint::Wrist) \
	op(EPicoArmModelJoint::Elbow) \
	op(EPicoArmModelJoint::Shoulder) 

enum class EPicoArmModelJoint : uint8;
template<> PICOMOBILECONTROLLER_API UEnum* StaticEnum<EPicoArmModelJoint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
