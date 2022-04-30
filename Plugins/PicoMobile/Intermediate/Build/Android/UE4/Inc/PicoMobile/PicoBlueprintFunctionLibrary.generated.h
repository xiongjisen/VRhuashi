// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPicoMeshData;
struct FPicoControllerButtonTexture;
class UObject;
enum class EPicoControllerType : uint8;
class UStaticMesh;
class UTexture2D;
class UMaterialInstanceDynamic;
class UMaterialInstance;
class UMaterial;
struct FVector;
struct FRotator;
struct FVector2D;
struct FPicoEyeTrackingData;
enum class PicoFoveationLevel : uint8;
struct FPicoPayCodeOrderInfo;
struct FPicoCoinOrderInfo;
enum class EPicoRefreshRate : uint8;
struct FIntPoint;
enum class EPicoCamType : uint8;
enum class EPicoNodeType : uint8;
struct FQuat;
#ifdef PICOMOBILE_PicoBlueprintFunctionLibrary_generated_h
#error "PicoBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in PicoBlueprintFunctionLibrary.h"
#endif
#define PICOMOBILE_PicoBlueprintFunctionLibrary_generated_h

#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPicoMeshData_Statics; \
	PICOMOBILE_API static class UScriptStruct* StaticStruct();


template<> PICOMOBILE_API UScriptStruct* StaticStruct<struct FPicoMeshData>();

#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPicoEyeTrackingData_Statics; \
	PICOMOBILE_API static class UScriptStruct* StaticStruct();


template<> PICOMOBILE_API UScriptStruct* StaticStruct<struct FPicoEyeTrackingData>();

#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPicoControllerBatteryTexture_Statics; \
	PICOMOBILE_API static class UScriptStruct* StaticStruct();


template<> PICOMOBILE_API UScriptStruct* StaticStruct<struct FPicoControllerBatteryTexture>();

#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPicoControllerButtonTexture_Statics; \
	PICOMOBILE_API static class UScriptStruct* StaticStruct();


template<> PICOMOBILE_API UScriptStruct* StaticStruct<struct FPicoControllerButtonTexture>();

#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPicoPayCodeOrderInfo_Statics; \
	PICOMOBILE_API static class UScriptStruct* StaticStruct();


template<> PICOMOBILE_API UScriptStruct* StaticStruct<struct FPicoPayCodeOrderInfo>();

#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPicoCoinOrderInfo_Statics; \
	PICOMOBILE_API static class UScriptStruct* StaticStruct();


template<> PICOMOBILE_API UScriptStruct* StaticStruct<struct FPicoCoinOrderInfo>();

#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_296_DELEGATE \
struct _Script_PicoMobile_eventPicoDisplayRefreshRateDelegate_Parms \
{ \
	float rate; \
}; \
static inline void FPicoDisplayRefreshRateDelegate_DelegateWrapper(const FScriptDelegate& PicoDisplayRefreshRateDelegate, float rate) \
{ \
	_Script_PicoMobile_eventPicoDisplayRefreshRateDelegate_Parms Parms; \
	Parms.rate=rate; \
	PicoDisplayRefreshRateDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_295_DELEGATE \
struct _Script_PicoMobile_eventPicoIPDChangedDelegate_Parms \
{ \
	float ipd; \
}; \
static inline void FPicoIPDChangedDelegate_DelegateWrapper(const FScriptDelegate& PicoIPDChangedDelegate, float ipd) \
{ \
	_Script_PicoMobile_eventPicoIPDChangedDelegate_Parms Parms; \
	Parms.ipd=ipd; \
	PicoIPDChangedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_294_DELEGATE \
struct _Script_PicoMobile_eventPicoEntitlementVerifyCallbackDelegate_Parms \
{ \
	int32 code; \
}; \
static inline void FPicoEntitlementVerifyCallbackDelegate_DelegateWrapper(const FScriptDelegate& PicoEntitlementVerifyCallbackDelegate, int32 const& code) \
{ \
	_Script_PicoMobile_eventPicoEntitlementVerifyCallbackDelegate_Parms Parms; \
	Parms.code=code; \
	PicoEntitlementVerifyCallbackDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_293_DELEGATE \
struct _Script_PicoMobile_eventPicoPaymentExceptionCallbackDelegate_Parms \
{ \
	FString exception; \
}; \
static inline void FPicoPaymentExceptionCallbackDelegate_DelegateWrapper(const FScriptDelegate& PicoPaymentExceptionCallbackDelegate, const FString& exception) \
{ \
	_Script_PicoMobile_eventPicoPaymentExceptionCallbackDelegate_Parms Parms; \
	Parms.exception=exception; \
	PicoPaymentExceptionCallbackDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_292_DELEGATE \
struct _Script_PicoMobile_eventPicoQueryOrderCallbackDelegate_Parms \
{ \
	FString code; \
	FString msg; \
}; \
static inline void FPicoQueryOrderCallbackDelegate_DelegateWrapper(const FScriptDelegate& PicoQueryOrderCallbackDelegate, const FString& code, const FString& msg) \
{ \
	_Script_PicoMobile_eventPicoQueryOrderCallbackDelegate_Parms Parms; \
	Parms.code=code; \
	Parms.msg=msg; \
	PicoQueryOrderCallbackDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_291_DELEGATE \
struct _Script_PicoMobile_eventPicoPayOrderCallbackDelegate_Parms \
{ \
	FString code; \
	FString msg; \
}; \
static inline void FPicoPayOrderCallbackDelegate_DelegateWrapper(const FScriptDelegate& PicoPayOrderCallbackDelegate, const FString& code, const FString& msg) \
{ \
	_Script_PicoMobile_eventPicoPayOrderCallbackDelegate_Parms Parms; \
	Parms.code=code; \
	Parms.msg=msg; \
	PicoPayOrderCallbackDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_290_DELEGATE \
struct _Script_PicoMobile_eventPicoGetUserInfoCallbackDelegate_Parms \
{ \
	FString info; \
}; \
static inline void FPicoGetUserInfoCallbackDelegate_DelegateWrapper(const FScriptDelegate& PicoGetUserInfoCallbackDelegate, const FString& info) \
{ \
	_Script_PicoMobile_eventPicoGetUserInfoCallbackDelegate_Parms Parms; \
	Parms.info=info; \
	PicoGetUserInfoCallbackDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_289_DELEGATE \
struct _Script_PicoMobile_eventPicoLogInOutCallbackDelegate_Parms \
{ \
	bool isSuccess; \
	FString reason; \
}; \
static inline void FPicoLogInOutCallbackDelegate_DelegateWrapper(const FScriptDelegate& PicoLogInOutCallbackDelegate, bool isSuccess, const FString& reason) \
{ \
	_Script_PicoMobile_eventPicoLogInOutCallbackDelegate_Parms Parms; \
	Parms.isSuccess=isSuccess ? true : false; \
	Parms.reason=reason; \
	PicoLogInOutCallbackDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_SPARSE_DATA
#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPicoLoadControllerResource); \
	DECLARE_FUNCTION(execPicoLoadControllerAssets); \
	DECLARE_FUNCTION(execPicoEnableAutoShowSplashScreen); \
	DECLARE_FUNCTION(execPicoClearSplashScreens); \
	DECLARE_FUNCTION(execPicoAddSplashScreen); \
	DECLARE_FUNCTION(execPicoGetEyeTrackingPos); \
	DECLARE_FUNCTION(execPicoGetEyeTrackingData); \
	DECLARE_FUNCTION(execPicoEnableEyeTrackingMarker); \
	DECLARE_FUNCTION(execPicoGetEyeTrackingGazeRay); \
	DECLARE_FUNCTION(execPicoGetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execPicoSetFoveationParameter); \
	DECLARE_FUNCTION(execPicoSetFoveationLevel); \
	DECLARE_FUNCTION(execPicoGetFoveationLevel); \
	DECLARE_FUNCTION(execPicoEnableFoveation); \
	DECLARE_FUNCTION(execPicoPaymentQueryOrder); \
	DECLARE_FUNCTION(execPicoPaymentPayWithPayCode); \
	DECLARE_FUNCTION(execPicoPaymentPayWithCoin); \
	DECLARE_FUNCTION(execPicoPaymentGetUserInfo); \
	DECLARE_FUNCTION(execPicoSDKGetUserInfo); \
	DECLARE_FUNCTION(execPicoPaymentLogout); \
	DECLARE_FUNCTION(execPicoLogoutSDK); \
	DECLARE_FUNCTION(execPicoPaymentLogin); \
	DECLARE_FUNCTION(execPicoLoginSDK); \
	DECLARE_FUNCTION(execPicoPaymentSetCallbackDelegates); \
	DECLARE_FUNCTION(execPicoDisplayRefreshRateChangedDelegates); \
	DECLARE_FUNCTION(execPicoGetRefreshRate); \
	DECLARE_FUNCTION(execPicoSetRefreshRate); \
	DECLARE_FUNCTION(execPicoIPDChangedDelegates); \
	DECLARE_FUNCTION(execPicoEntitlementVerifySetCallbackDelegates); \
	DECLARE_FUNCTION(execPicoGetDeviceModel); \
	DECLARE_FUNCTION(execPicoSetBoundaryCameraImageSize); \
	DECLARE_FUNCTION(execPicoGetBoundarySeeThroughData); \
	DECLARE_FUNCTION(execPicoGetBoundaryVisible); \
	DECLARE_FUNCTION(execPicoGetBoundaryDimensions); \
	DECLARE_FUNCTION(execPicoBoundaryGetGeometry); \
	DECLARE_FUNCTION(execPicoBoundaryTestPoint); \
	DECLARE_FUNCTION(execPicoBoundaryTestNode); \
	DECLARE_FUNCTION(execPicoSetBoundaryVisible); \
	DECLARE_FUNCTION(execPicoGetBoundaryEnabled); \
	DECLARE_FUNCTION(execPicoGetBoundaryConfigured); \
	DECLARE_FUNCTION(execPicoControllerHomekey); \
	DECLARE_FUNCTION(execSetCPUAndGPULevels); \
	DECLARE_FUNCTION(execPicoGetDeviceSN); \
	DECLARE_FUNCTION(execPicoGetHandness); \
	DECLARE_FUNCTION(execPicoVolumeDown); \
	DECLARE_FUNCTION(execPicoVolumeUp); \
	DECLARE_FUNCTION(execPicoSetVolume); \
	DECLARE_FUNCTION(execPicoGetMaxVolumeNumber); \
	DECLARE_FUNCTION(execPicoGetCurrentVolume); \
	DECLARE_FUNCTION(execPicoGetGpuUtilization); \
	DECLARE_FUNCTION(execPicoSetBrightness); \
	DECLARE_FUNCTION(execPicoGetCurrentBrightness); \
	DECLARE_FUNCTION(execPicoGetEyeTrackingAutoIPD); \
	DECLARE_FUNCTION(execPicoGetTrackingIPDEnabled); \
	DECLARE_FUNCTION(execPicoSetTrackingIPDEnabled); \
	DECLARE_FUNCTION(execPicoGetIPD); \
	DECLARE_FUNCTION(execPicoSetIPD); \
	DECLARE_FUNCTION(execPicoGetHFov); \
	DECLARE_FUNCTION(execPicoGetVFov); \
	DECLARE_FUNCTION(execPicoGetFov); \
	DECLARE_FUNCTION(execResetSensor); \
	DECLARE_FUNCTION(execPicoGetPSensorState); \
	DECLARE_FUNCTION(execPicoGetControllerType); \
	DECLARE_FUNCTION(execPicoIs6Dof); \
	DECLARE_FUNCTION(execPicoGetCurrentPosition); \
	DECLARE_FUNCTION(execPicoGetCurrentOrientation);


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPicoLoadControllerResource); \
	DECLARE_FUNCTION(execPicoLoadControllerAssets); \
	DECLARE_FUNCTION(execPicoEnableAutoShowSplashScreen); \
	DECLARE_FUNCTION(execPicoClearSplashScreens); \
	DECLARE_FUNCTION(execPicoAddSplashScreen); \
	DECLARE_FUNCTION(execPicoGetEyeTrackingPos); \
	DECLARE_FUNCTION(execPicoGetEyeTrackingData); \
	DECLARE_FUNCTION(execPicoEnableEyeTrackingMarker); \
	DECLARE_FUNCTION(execPicoGetEyeTrackingGazeRay); \
	DECLARE_FUNCTION(execPicoGetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execPicoSetFoveationParameter); \
	DECLARE_FUNCTION(execPicoSetFoveationLevel); \
	DECLARE_FUNCTION(execPicoGetFoveationLevel); \
	DECLARE_FUNCTION(execPicoEnableFoveation); \
	DECLARE_FUNCTION(execPicoPaymentQueryOrder); \
	DECLARE_FUNCTION(execPicoPaymentPayWithPayCode); \
	DECLARE_FUNCTION(execPicoPaymentPayWithCoin); \
	DECLARE_FUNCTION(execPicoPaymentGetUserInfo); \
	DECLARE_FUNCTION(execPicoSDKGetUserInfo); \
	DECLARE_FUNCTION(execPicoPaymentLogout); \
	DECLARE_FUNCTION(execPicoLogoutSDK); \
	DECLARE_FUNCTION(execPicoPaymentLogin); \
	DECLARE_FUNCTION(execPicoLoginSDK); \
	DECLARE_FUNCTION(execPicoPaymentSetCallbackDelegates); \
	DECLARE_FUNCTION(execPicoDisplayRefreshRateChangedDelegates); \
	DECLARE_FUNCTION(execPicoGetRefreshRate); \
	DECLARE_FUNCTION(execPicoSetRefreshRate); \
	DECLARE_FUNCTION(execPicoIPDChangedDelegates); \
	DECLARE_FUNCTION(execPicoEntitlementVerifySetCallbackDelegates); \
	DECLARE_FUNCTION(execPicoGetDeviceModel); \
	DECLARE_FUNCTION(execPicoSetBoundaryCameraImageSize); \
	DECLARE_FUNCTION(execPicoGetBoundarySeeThroughData); \
	DECLARE_FUNCTION(execPicoGetBoundaryVisible); \
	DECLARE_FUNCTION(execPicoGetBoundaryDimensions); \
	DECLARE_FUNCTION(execPicoBoundaryGetGeometry); \
	DECLARE_FUNCTION(execPicoBoundaryTestPoint); \
	DECLARE_FUNCTION(execPicoBoundaryTestNode); \
	DECLARE_FUNCTION(execPicoSetBoundaryVisible); \
	DECLARE_FUNCTION(execPicoGetBoundaryEnabled); \
	DECLARE_FUNCTION(execPicoGetBoundaryConfigured); \
	DECLARE_FUNCTION(execPicoControllerHomekey); \
	DECLARE_FUNCTION(execSetCPUAndGPULevels); \
	DECLARE_FUNCTION(execPicoGetDeviceSN); \
	DECLARE_FUNCTION(execPicoGetHandness); \
	DECLARE_FUNCTION(execPicoVolumeDown); \
	DECLARE_FUNCTION(execPicoVolumeUp); \
	DECLARE_FUNCTION(execPicoSetVolume); \
	DECLARE_FUNCTION(execPicoGetMaxVolumeNumber); \
	DECLARE_FUNCTION(execPicoGetCurrentVolume); \
	DECLARE_FUNCTION(execPicoGetGpuUtilization); \
	DECLARE_FUNCTION(execPicoSetBrightness); \
	DECLARE_FUNCTION(execPicoGetCurrentBrightness); \
	DECLARE_FUNCTION(execPicoGetEyeTrackingAutoIPD); \
	DECLARE_FUNCTION(execPicoGetTrackingIPDEnabled); \
	DECLARE_FUNCTION(execPicoSetTrackingIPDEnabled); \
	DECLARE_FUNCTION(execPicoGetIPD); \
	DECLARE_FUNCTION(execPicoSetIPD); \
	DECLARE_FUNCTION(execPicoGetHFov); \
	DECLARE_FUNCTION(execPicoGetVFov); \
	DECLARE_FUNCTION(execPicoGetFov); \
	DECLARE_FUNCTION(execResetSensor); \
	DECLARE_FUNCTION(execPicoGetPSensorState); \
	DECLARE_FUNCTION(execPicoGetControllerType); \
	DECLARE_FUNCTION(execPicoIs6Dof); \
	DECLARE_FUNCTION(execPicoGetCurrentPosition); \
	DECLARE_FUNCTION(execPicoGetCurrentOrientation);


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPicoBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPicoBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPicoBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PicoMobile"), NO_API) \
	DECLARE_SERIALIZER(UPicoBlueprintFunctionLibrary)


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_INCLASS \
private: \
	static void StaticRegisterNativesUPicoBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPicoBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPicoBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PicoMobile"), NO_API) \
	DECLARE_SERIALIZER(UPicoBlueprintFunctionLibrary)


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoBlueprintFunctionLibrary(UPicoBlueprintFunctionLibrary&&); \
	NO_API UPicoBlueprintFunctionLibrary(const UPicoBlueprintFunctionLibrary&); \
public:


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoBlueprintFunctionLibrary(UPicoBlueprintFunctionLibrary&&); \
	NO_API UPicoBlueprintFunctionLibrary(const UPicoBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoBlueprintFunctionLibrary)


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_PRIVATE_PROPERTY_OFFSET
#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_299_PROLOG
#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_PRIVATE_PROPERTY_OFFSET \
	huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_SPARSE_DATA \
	huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_RPC_WRAPPERS \
	huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_INCLASS \
	huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_PRIVATE_PROPERTY_OFFSET \
	huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_SPARSE_DATA \
	huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_RPC_WRAPPERS_NO_PURE_DECLS \
	huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_INCLASS_NO_PURE_DECLS \
	huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h_302_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOMOBILE_API UClass* StaticClass<class UPicoBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID huashi_Plugins_PicoMobile_Source_PicoMobile_Public_PicoBlueprintFunctionLibrary_h


#define FOREACH_ENUM_EPICOREFRESHRATE(op) \
	op(EPicoRefreshRate::Default) \
	op(EPicoRefreshRate::RefreshRate72) \
	op(EPicoRefreshRate::RefreshRate90) 

enum class EPicoRefreshRate : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EPicoRefreshRate>();

#define FOREACH_ENUM_EPICOCAMTYPE(op) \
	op(EPicoCamType::Left) \
	op(EPicoCamType::Right) 

enum class EPicoCamType : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EPicoCamType>();

#define FOREACH_ENUM_EPICOCONTROLLERTYPE(op) \
	op(EPicoControllerType::Goblin) \
	op(EPicoControllerType::Goblin2) \
	op(EPicoControllerType::Neo) \
	op(EPicoControllerType::Neo2) \
	op(EPicoControllerType::Neo3) \
	op(EPicoControllerType::TypeNum) 

enum class EPicoControllerType : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EPicoControllerType>();

#define FOREACH_ENUM_EPICONODETYPE(op) \
	op(EPicoNodeType::LeftHand) \
	op(EPicoNodeType::RightHand) \
	op(EPicoNodeType::Head) 

enum class EPicoNodeType : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EPicoNodeType>();

#define FOREACH_ENUM_EPICOSIMULATIONTYPE(op) \
	op(EPicoSimulationType::Null) \
	op(EPicoSimulationType::Invalid) \
	op(EPicoSimulationType::Valid) 

enum class EPicoSimulationType : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EPicoSimulationType>();

#define FOREACH_ENUM_EPICOVRHMD_EYE(op) \
	op(EPicoVRHMD_Eye::LeftEye) \
	op(EPicoVRHMD_Eye::RightEye) \
	op(EPicoVRHMD_Eye::AverageEye) 

enum class EPicoVRHMD_Eye : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EPicoVRHMD_Eye>();

#define FOREACH_ENUM_PICOFOVEATIONLEVEL(op) \
	op(PicoFoveationLevel::Low) \
	op(PicoFoveationLevel::Medium) \
	op(PicoFoveationLevel::High) \
	op(PicoFoveationLevel::TopHigh) 

enum class PicoFoveationLevel : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<PicoFoveationLevel>();

#define FOREACH_ENUM_FPICOCONTROLLERTYPE(op) \
	op(FPicoControllerType::Unknown) \
	op(FPicoControllerType::PicoDisConnectController) \
	op(FPicoControllerType::PicoGoblinController) \
	op(FPicoControllerType::PicoGublin2Controller) \
	op(FPicoControllerType::PicoNeoController) \
	op(FPicoControllerType::PicoNeo2Controller) 

enum class FPicoControllerType : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<FPicoControllerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
