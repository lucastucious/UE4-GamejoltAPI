// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FScoreTableInfo;
struct FScoreInfo;
struct FTrophyInfo;
struct FUserInfo;
class UObject;
class UUEGameJoltAPI;
enum class EDataStore : uint8;
enum class EDataOperation : uint8;
enum class EGameJoltAchievedTrophies : uint8;
enum class ESessionStatus : uint8;
#ifdef GAMEJOLTPLUGIN_UEGameJoltAPI_generated_h
#error "UEGameJoltAPI.generated.h already included, missing '#pragma once' in UEGameJoltAPI.h"
#endif
#define GAMEJOLTPLUGIN_UEGameJoltAPI_generated_h

#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScoreTableInfo_Statics; \
	GAMEJOLTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> GAMEJOLTPLUGIN_API UScriptStruct* StaticStruct<struct FScoreTableInfo>();

#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScoreInfo_Statics; \
	GAMEJOLTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> GAMEJOLTPLUGIN_API UScriptStruct* StaticStruct<struct FScoreInfo>();

#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrophyInfo_Statics; \
	GAMEJOLTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> GAMEJOLTPLUGIN_API UScriptStruct* StaticStruct<struct FTrophyInfo>();

#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserInfo_Statics; \
	GAMEJOLTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> GAMEJOLTPLUGIN_API UScriptStruct* StaticStruct<struct FUserInfo>();

#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_205_DELEGATE \
struct _Script_GameJoltPlugin_eventOnTimeFetched_Parms \
{ \
	FDateTime ServerTime; \
}; \
static inline void FOnTimeFetched_DelegateWrapper(const FMulticastScriptDelegate& OnTimeFetched, FDateTime ServerTime) \
{ \
	_Script_GameJoltPlugin_eventOnTimeFetched_Parms Parms; \
	Parms.ServerTime=ServerTime; \
	OnTimeFetched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_203_DELEGATE \
struct _Script_GameJoltPlugin_eventOnRankFetched_Parms \
{ \
	int32 Rank; \
}; \
static inline void FOnRankFetched_DelegateWrapper(const FMulticastScriptDelegate& OnRankFetched, int32 Rank) \
{ \
	_Script_GameJoltPlugin_eventOnRankFetched_Parms Parms; \
	Parms.Rank=Rank; \
	OnRankFetched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_201_DELEGATE \
struct _Script_GameJoltPlugin_eventOnScoreboardTableFetched_Parms \
{ \
	TArray<FScoreTableInfo> ScoreboardTable; \
}; \
static inline void FOnScoreboardTableFetched_DelegateWrapper(const FMulticastScriptDelegate& OnScoreboardTableFetched, const TArray<FScoreTableInfo>& ScoreboardTable) \
{ \
	_Script_GameJoltPlugin_eventOnScoreboardTableFetched_Parms Parms; \
	Parms.ScoreboardTable=ScoreboardTable; \
	OnScoreboardTableFetched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_199_DELEGATE \
struct _Script_GameJoltPlugin_eventOnScoreboardFetched_Parms \
{ \
	TArray<FScoreInfo> Scores; \
}; \
static inline void FOnScoreboardFetched_DelegateWrapper(const FMulticastScriptDelegate& OnScoreboardFetched, TArray<FScoreInfo> const& Scores) \
{ \
	_Script_GameJoltPlugin_eventOnScoreboardFetched_Parms Parms; \
	Parms.Scores=Scores; \
	OnScoreboardFetched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_197_DELEGATE \
struct _Script_GameJoltPlugin_eventOnScoreAdded_Parms \
{ \
	bool bWasScoreAdded; \
}; \
static inline void FOnScoreAdded_DelegateWrapper(const FMulticastScriptDelegate& OnScoreAdded, bool bWasScoreAdded) \
{ \
	_Script_GameJoltPlugin_eventOnScoreAdded_Parms Parms; \
	Parms.bWasScoreAdded=bWasScoreAdded ? true : false; \
	OnScoreAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_195_DELEGATE \
struct _Script_GameJoltPlugin_eventOnTrophyRemoved_Parms \
{ \
	bool bWasRemoved; \
}; \
static inline void FOnTrophyRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnTrophyRemoved, bool bWasRemoved) \
{ \
	_Script_GameJoltPlugin_eventOnTrophyRemoved_Parms Parms; \
	Parms.bWasRemoved=bWasRemoved ? true : false; \
	OnTrophyRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_193_DELEGATE \
struct _Script_GameJoltPlugin_eventOnTrophiesFetched_Parms \
{ \
	TArray<FTrophyInfo> Trophies; \
}; \
static inline void FOnTrophiesFetched_DelegateWrapper(const FMulticastScriptDelegate& OnTrophiesFetched, const TArray<FTrophyInfo>& Trophies) \
{ \
	_Script_GameJoltPlugin_eventOnTrophiesFetched_Parms Parms; \
	Parms.Trophies=Trophies; \
	OnTrophiesFetched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_191_DELEGATE \
struct _Script_GameJoltPlugin_eventOnSessionChecked_Parms \
{ \
	bool bIsSessionStillOpen; \
}; \
static inline void FOnSessionChecked_DelegateWrapper(const FMulticastScriptDelegate& OnSessionChecked, bool bIsSessionStillOpen) \
{ \
	_Script_GameJoltPlugin_eventOnSessionChecked_Parms Parms; \
	Parms.bIsSessionStillOpen=bIsSessionStillOpen ? true : false; \
	OnSessionChecked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_189_DELEGATE \
struct _Script_GameJoltPlugin_eventOnSessionClosed_Parms \
{ \
	bool bIsSessionClosed; \
}; \
static inline void FOnSessionClosed_DelegateWrapper(const FMulticastScriptDelegate& OnSessionClosed, bool bIsSessionClosed) \
{ \
	_Script_GameJoltPlugin_eventOnSessionClosed_Parms Parms; \
	Parms.bIsSessionClosed=bIsSessionClosed ? true : false; \
	OnSessionClosed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_187_DELEGATE \
struct _Script_GameJoltPlugin_eventOnSessionPinged_Parms \
{ \
	bool bIsSessionStillOpen; \
}; \
static inline void FOnSessionPinged_DelegateWrapper(const FMulticastScriptDelegate& OnSessionPinged, bool bIsSessionStillOpen) \
{ \
	_Script_GameJoltPlugin_eventOnSessionPinged_Parms Parms; \
	Parms.bIsSessionStillOpen=bIsSessionStillOpen ? true : false; \
	OnSessionPinged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_185_DELEGATE \
struct _Script_GameJoltPlugin_eventOnSessionOpened_Parms \
{ \
	bool bIsSessionOpen; \
}; \
static inline void FOnSessionOpened_DelegateWrapper(const FMulticastScriptDelegate& OnSessionOpened, bool bIsSessionOpen) \
{ \
	_Script_GameJoltPlugin_eventOnSessionOpened_Parms Parms; \
	Parms.bIsSessionOpen=bIsSessionOpen ? true : false; \
	OnSessionOpened.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_183_DELEGATE \
struct _Script_GameJoltPlugin_eventOnFriendlistFetched_Parms \
{ \
	TArray<int32> Friendlist; \
}; \
static inline void FOnFriendlistFetched_DelegateWrapper(const FMulticastScriptDelegate& OnFriendlistFetched, TArray<int32> const& Friendlist) \
{ \
	_Script_GameJoltPlugin_eventOnFriendlistFetched_Parms Parms; \
	Parms.Friendlist=Friendlist; \
	OnFriendlistFetched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_181_DELEGATE \
struct _Script_GameJoltPlugin_eventOnUsersFetched_Parms \
{ \
	TArray<FUserInfo> UserInfo; \
}; \
static inline void FOnUsersFetched_DelegateWrapper(const FMulticastScriptDelegate& OnUsersFetched, TArray<FUserInfo> const& UserInfo) \
{ \
	_Script_GameJoltPlugin_eventOnUsersFetched_Parms Parms; \
	Parms.UserInfo=UserInfo; \
	OnUsersFetched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_179_DELEGATE \
struct _Script_GameJoltPlugin_eventOnUserFetched_Parms \
{ \
	FUserInfo CurrentUserInfo; \
}; \
static inline void FOnUserFetched_DelegateWrapper(const FMulticastScriptDelegate& OnUserFetched, FUserInfo CurrentUserInfo) \
{ \
	_Script_GameJoltPlugin_eventOnUserFetched_Parms Parms; \
	Parms.CurrentUserInfo=CurrentUserInfo; \
	OnUserFetched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_177_DELEGATE \
struct _Script_GameJoltPlugin_eventOnAutoLogin_Parms \
{ \
	bool bIsLoggedIn; \
}; \
static inline void FOnAutoLogin_DelegateWrapper(const FMulticastScriptDelegate& OnAutoLogin, bool bIsLoggedIn) \
{ \
	_Script_GameJoltPlugin_eventOnAutoLogin_Parms Parms; \
	Parms.bIsLoggedIn=bIsLoggedIn ? true : false; \
	OnAutoLogin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_175_DELEGATE \
struct _Script_GameJoltPlugin_eventOnUserAuthorized_Parms \
{ \
	bool bIsLoggedIn; \
}; \
static inline void FOnUserAuthorized_DelegateWrapper(const FMulticastScriptDelegate& OnUserAuthorized, bool bIsLoggedIn) \
{ \
	_Script_GameJoltPlugin_eventOnUserAuthorized_Parms Parms; \
	Parms.bIsLoggedIn=bIsLoggedIn ? true : false; \
	OnUserAuthorized.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_170_DELEGATE \
static inline void FOnFailed_DelegateWrapper(const FMulticastScriptDelegate& OnFailed) \
{ \
	OnFailed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_167_DELEGATE \
static inline void FOnGetResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetResult) \
{ \
	OnGetResult.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_SPARSE_DATA
#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetObjectArray); \
	DECLARE_FUNCTION(execGetObjectKeys); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execSendRequest); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execRemoveData); \
	DECLARE_FUNCTION(execUpdateData); \
	DECLARE_FUNCTION(execFetchData); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execGetRank); \
	DECLARE_FUNCTION(execFetchRank); \
	DECLARE_FUNCTION(execGetScoreboardTable); \
	DECLARE_FUNCTION(execFetchScoreboardTable); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScoreboard); \
	DECLARE_FUNCTION(execFetchScoreboard); \
	DECLARE_FUNCTION(execGetTrophyRemovalStatus); \
	DECLARE_FUNCTION(execRemoveRewardedTrophy); \
	DECLARE_FUNCTION(execGetTrophies); \
	DECLARE_FUNCTION(execFetchTrophies); \
	DECLARE_FUNCTION(execFetchAllTrophies); \
	DECLARE_FUNCTION(execRewardTrophy); \
	DECLARE_FUNCTION(execGetFriendlist); \
	DECLARE_FUNCTION(execFetchFriendlist); \
	DECLARE_FUNCTION(execGetUserInfo); \
	DECLARE_FUNCTION(execFetchUsers); \
	DECLARE_FUNCTION(execFetchUser); \
	DECLARE_FUNCTION(execLogOffUser); \
	DECLARE_FUNCTION(execisUserAuthorize); \
	DECLARE_FUNCTION(execLogin); \
	DECLARE_FUNCTION(execReadServerTime); \
	DECLARE_FUNCTION(execFetchServerTime); \
	DECLARE_FUNCTION(execGetSessionStatus); \
	DECLARE_FUNCTION(execCheckSession); \
	DECLARE_FUNCTION(execCloseSession); \
	DECLARE_FUNCTION(execPingSession); \
	DECLARE_FUNCTION(execOpenSession); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execFromString);


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetObjectArray); \
	DECLARE_FUNCTION(execGetObjectKeys); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execSendRequest); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execRemoveData); \
	DECLARE_FUNCTION(execUpdateData); \
	DECLARE_FUNCTION(execFetchData); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execGetRank); \
	DECLARE_FUNCTION(execFetchRank); \
	DECLARE_FUNCTION(execGetScoreboardTable); \
	DECLARE_FUNCTION(execFetchScoreboardTable); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScoreboard); \
	DECLARE_FUNCTION(execFetchScoreboard); \
	DECLARE_FUNCTION(execGetTrophyRemovalStatus); \
	DECLARE_FUNCTION(execRemoveRewardedTrophy); \
	DECLARE_FUNCTION(execGetTrophies); \
	DECLARE_FUNCTION(execFetchTrophies); \
	DECLARE_FUNCTION(execFetchAllTrophies); \
	DECLARE_FUNCTION(execRewardTrophy); \
	DECLARE_FUNCTION(execGetFriendlist); \
	DECLARE_FUNCTION(execFetchFriendlist); \
	DECLARE_FUNCTION(execGetUserInfo); \
	DECLARE_FUNCTION(execFetchUsers); \
	DECLARE_FUNCTION(execFetchUser); \
	DECLARE_FUNCTION(execLogOffUser); \
	DECLARE_FUNCTION(execisUserAuthorize); \
	DECLARE_FUNCTION(execLogin); \
	DECLARE_FUNCTION(execReadServerTime); \
	DECLARE_FUNCTION(execFetchServerTime); \
	DECLARE_FUNCTION(execGetSessionStatus); \
	DECLARE_FUNCTION(execCheckSession); \
	DECLARE_FUNCTION(execCloseSession); \
	DECLARE_FUNCTION(execPingSession); \
	DECLARE_FUNCTION(execOpenSession); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execFromString);


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUEGameJoltAPI(); \
	friend struct Z_Construct_UClass_UUEGameJoltAPI_Statics; \
public: \
	DECLARE_CLASS(UUEGameJoltAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltPlugin"), NO_API) \
	DECLARE_SERIALIZER(UUEGameJoltAPI)


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_INCLASS \
private: \
	static void StaticRegisterNativesUUEGameJoltAPI(); \
	friend struct Z_Construct_UClass_UUEGameJoltAPI_Statics; \
public: \
	DECLARE_CLASS(UUEGameJoltAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltPlugin"), NO_API) \
	DECLARE_SERIALIZER(UUEGameJoltAPI)


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUEGameJoltAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUEGameJoltAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUEGameJoltAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUEGameJoltAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUEGameJoltAPI(UUEGameJoltAPI&&); \
	NO_API UUEGameJoltAPI(const UUEGameJoltAPI&); \
public:


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUEGameJoltAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUEGameJoltAPI(UUEGameJoltAPI&&); \
	NO_API UUEGameJoltAPI(const UUEGameJoltAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUEGameJoltAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUEGameJoltAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUEGameJoltAPI)


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserToken() { return STRUCT_OFFSET(UUEGameJoltAPI, UserToken); }


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_213_PROLOG
#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_SPARSE_DATA \
	HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_RPC_WRAPPERS \
	HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_INCLASS \
	HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_SPARSE_DATA \
	HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h_216_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UEGameJoltAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTPLUGIN_API UClass* StaticClass<class UUEGameJoltAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GameJoltPlugIn_Source_GameJoltPlugin_Classes_UEGameJoltAPI_h


#define FOREACH_ENUM_EDATAOPERATION(op) \
	op(EDataOperation::add) \
	op(EDataOperation::substract) \
	op(EDataOperation::multiply) \
	op(EDataOperation::divide) \
	op(EDataOperation::append) \
	op(EDataOperation::prepend) 

enum class EDataOperation : uint8;
template<> GAMEJOLTPLUGIN_API UEnum* StaticEnum<EDataOperation>();

#define FOREACH_ENUM_EDATASTORE(op) \
	op(EDataStore::Global) \
	op(EDataStore::User) 

enum class EDataStore : uint8;
template<> GAMEJOLTPLUGIN_API UEnum* StaticEnum<EDataStore>();

#define FOREACH_ENUM_ESESSIONSTATUS(op) \
	op(ESessionStatus::Active) \
	op(ESessionStatus::Idle) 

enum class ESessionStatus : uint8;
template<> GAMEJOLTPLUGIN_API UEnum* StaticEnum<ESessionStatus>();

#define FOREACH_ENUM_EGAMEJOLTACHIEVEDTROPHIES(op) \
	op(EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_BLANK) \
	op(EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_USER) \
	op(EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_GAME) 

enum class EGameJoltAchievedTrophies : uint8;
template<> GAMEJOLTPLUGIN_API UEnum* StaticEnum<EGameJoltAchievedTrophies>();

#define FOREACH_ENUM_EGAMEJOLTCOMPONENTENUM(op) \
	op(EGameJoltComponentEnum::GJ_USER_AUTH) \
	op(EGameJoltComponentEnum::GJ_USER_AUTOLOGIN) \
	op(EGameJoltComponentEnum::GJ_USER_FETCH) \
	op(EGameJoltComponentEnum::GJ_USERS_FETCH) \
	op(EGameJoltComponentEnum::GJ_USER_FRIENDLIST) \
	op(EGameJoltComponentEnum::GJ_SESSION_OPEN) \
	op(EGameJoltComponentEnum::GJ_SESSION_PING) \
	op(EGameJoltComponentEnum::GJ_SESSION_CLOSE) \
	op(EGameJoltComponentEnum::GJ_SESSION_CHECK) \
	op(EGameJoltComponentEnum::GJ_TROPHIES_FETCH) \
	op(EGameJoltComponentEnum::GJ_TROPHIES_ADD) \
	op(EGameJoltComponentEnum::GJ_TROHIES_REMOVE) \
	op(EGameJoltComponentEnum::GJ_SCORES_FETCH) \
	op(EGameJoltComponentEnum::GJ_SCORES_ADD) \
	op(EGameJoltComponentEnum::GJ_SCORES_TABLE) \
	op(EGameJoltComponentEnum::GJ_SCORES_RANK) \
	op(EGameJoltComponentEnum::GJ_DATASTORE_FETCH) \
	op(EGameJoltComponentEnum::GJ_DATASTORE_SET) \
	op(EGameJoltComponentEnum::GJ_DATASTORE_UPDATE) \
	op(EGameJoltComponentEnum::GJ_DATASTORE_REMOVE) \
	op(EGameJoltComponentEnum::GJ_OTHER) \
	op(EGameJoltComponentEnum::GJ_TIME) 

enum class EGameJoltComponentEnum : uint8;
template<> GAMEJOLTPLUGIN_API UEnum* StaticEnum<EGameJoltComponentEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
