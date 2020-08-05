// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJoltPlugin/Classes/UEGameJoltAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEGameJoltAPI() {}
// Cross Module References
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameJoltPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature();
	GAMEJOLTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FScoreTableInfo();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature();
	GAMEJOLTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FScoreInfo();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature();
	GAMEJOLTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTrophyInfo();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature();
	GAMEJOLTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUserInfo();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnFailed__DelegateSignature();
	GAMEJOLTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnGetResult__DelegateSignature();
	GAMEJOLTPLUGIN_API UEnum* Z_Construct_UEnum_GameJoltPlugin_EDataOperation();
	GAMEJOLTPLUGIN_API UEnum* Z_Construct_UEnum_GameJoltPlugin_EDataStore();
	GAMEJOLTPLUGIN_API UEnum* Z_Construct_UEnum_GameJoltPlugin_ESessionStatus();
	GAMEJOLTPLUGIN_API UEnum* Z_Construct_UEnum_GameJoltPlugin_EGameJoltAchievedTrophies();
	GAMEJOLTPLUGIN_API UEnum* Z_Construct_UEnum_GameJoltPlugin_EGameJoltComponentEnum();
	GAMEJOLTPLUGIN_API UClass* Z_Construct_UClass_UUEGameJoltAPI_NoRegister();
	GAMEJOLTPLUGIN_API UClass* Z_Construct_UClass_UUEGameJoltAPI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnTimeFetched_Parms
		{
			FDateTime ServerTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics::NewProp_ServerTime = { "ServerTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameJoltPlugin_eventOnTimeFetched_Parms, ServerTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics::NewProp_ServerTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Fetch Time */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Fetch Time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnTimeFetched__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnTimeFetched_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnRankFetched_Parms
		{
			int32 Rank;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameJoltPlugin_eventOnRankFetched_Parms, Rank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics::NewProp_Rank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Fetch High-Score Rank */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Fetch High-Score Rank" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnRankFetched__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnRankFetched_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnScoreboardTableFetched_Parms
		{
			TArray<FScoreTableInfo> ScoreboardTable;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScoreboardTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoreboardTable_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::NewProp_ScoreboardTable = { "ScoreboardTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameJoltPlugin_eventOnScoreboardTableFetched_Parms, ScoreboardTable), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::NewProp_ScoreboardTable_Inner = { "ScoreboardTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScoreTableInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::NewProp_ScoreboardTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::NewProp_ScoreboardTable_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Fetch Scoreboard Table */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Fetch Scoreboard Table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnScoreboardTableFetched__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnScoreboardTableFetched_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnScoreboardFetched_Parms
		{
			TArray<FScoreInfo> Scores;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scores;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scores_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::NewProp_Scores_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::NewProp_Scores = { "Scores", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameJoltPlugin_eventOnScoreboardFetched_Parms, Scores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::NewProp_Scores_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::NewProp_Scores_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::NewProp_Scores_Inner = { "Scores", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScoreInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::NewProp_Scores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::NewProp_Scores_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Fetch Scoreboard */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Fetch Scoreboard" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnScoreboardFetched__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnScoreboardFetched_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnScoreAdded_Parms
		{
			bool bWasScoreAdded;
		};
		static void NewProp_bWasScoreAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasScoreAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::NewProp_bWasScoreAdded_SetBit(void* Obj)
	{
		((_Script_GameJoltPlugin_eventOnScoreAdded_Parms*)Obj)->bWasScoreAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::NewProp_bWasScoreAdded = { "bWasScoreAdded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameJoltPlugin_eventOnScoreAdded_Parms), &Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::NewProp_bWasScoreAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::NewProp_bWasScoreAdded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Add Score */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Add Score" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnScoreAdded__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnScoreAdded_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnTrophyRemoved_Parms
		{
			bool bWasRemoved;
		};
		static void NewProp_bWasRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasRemoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::NewProp_bWasRemoved_SetBit(void* Obj)
	{
		((_Script_GameJoltPlugin_eventOnTrophyRemoved_Parms*)Obj)->bWasRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::NewProp_bWasRemoved = { "bWasRemoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameJoltPlugin_eventOnTrophyRemoved_Parms), &Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::NewProp_bWasRemoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::NewProp_bWasRemoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Remove Trophy */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Remove Trophy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnTrophyRemoved__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnTrophyRemoved_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnTrophiesFetched_Parms
		{
			TArray<FTrophyInfo> Trophies;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Trophies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Trophies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::NewProp_Trophies = { "Trophies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameJoltPlugin_eventOnTrophiesFetched_Parms, Trophies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::NewProp_Trophies_Inner = { "Trophies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTrophyInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::NewProp_Trophies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::NewProp_Trophies_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Fetch Trophies */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Fetch Trophies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnTrophiesFetched__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnTrophiesFetched_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnSessionChecked_Parms
		{
			bool bIsSessionStillOpen;
		};
		static void NewProp_bIsSessionStillOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSessionStillOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::NewProp_bIsSessionStillOpen_SetBit(void* Obj)
	{
		((_Script_GameJoltPlugin_eventOnSessionChecked_Parms*)Obj)->bIsSessionStillOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::NewProp_bIsSessionStillOpen = { "bIsSessionStillOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameJoltPlugin_eventOnSessionChecked_Parms), &Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::NewProp_bIsSessionStillOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::NewProp_bIsSessionStillOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Check Session */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Check Session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnSessionChecked__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnSessionChecked_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnSessionClosed_Parms
		{
			bool bIsSessionClosed;
		};
		static void NewProp_bIsSessionClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSessionClosed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::NewProp_bIsSessionClosed_SetBit(void* Obj)
	{
		((_Script_GameJoltPlugin_eventOnSessionClosed_Parms*)Obj)->bIsSessionClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::NewProp_bIsSessionClosed = { "bIsSessionClosed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameJoltPlugin_eventOnSessionClosed_Parms), &Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::NewProp_bIsSessionClosed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::NewProp_bIsSessionClosed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Close Session */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Close Session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnSessionClosed__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnSessionClosed_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnSessionPinged_Parms
		{
			bool bIsSessionStillOpen;
		};
		static void NewProp_bIsSessionStillOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSessionStillOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::NewProp_bIsSessionStillOpen_SetBit(void* Obj)
	{
		((_Script_GameJoltPlugin_eventOnSessionPinged_Parms*)Obj)->bIsSessionStillOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::NewProp_bIsSessionStillOpen = { "bIsSessionStillOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameJoltPlugin_eventOnSessionPinged_Parms), &Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::NewProp_bIsSessionStillOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::NewProp_bIsSessionStillOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Ping Session */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Ping Session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnSessionPinged__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnSessionPinged_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnSessionOpened_Parms
		{
			bool bIsSessionOpen;
		};
		static void NewProp_bIsSessionOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSessionOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::NewProp_bIsSessionOpen_SetBit(void* Obj)
	{
		((_Script_GameJoltPlugin_eventOnSessionOpened_Parms*)Obj)->bIsSessionOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::NewProp_bIsSessionOpen = { "bIsSessionOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameJoltPlugin_eventOnSessionOpened_Parms), &Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::NewProp_bIsSessionOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::NewProp_bIsSessionOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Open Session */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Open Session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnSessionOpened__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnSessionOpened_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnFriendlistFetched_Parms
		{
			TArray<int32> Friendlist;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friendlist_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Friendlist;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Friendlist_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::NewProp_Friendlist_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::NewProp_Friendlist = { "Friendlist", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameJoltPlugin_eventOnFriendlistFetched_Parms, Friendlist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::NewProp_Friendlist_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::NewProp_Friendlist_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::NewProp_Friendlist_Inner = { "Friendlist", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::NewProp_Friendlist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::NewProp_Friendlist_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Get Friendlist */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Get Friendlist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnFriendlistFetched__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnFriendlistFetched_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnUsersFetched_Parms
		{
			TArray<FUserInfo> UserInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserInfo_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameJoltPlugin_eventOnUsersFetched_Parms, UserInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::NewProp_UserInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::NewProp_UserInfo_Inner = { "UserInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUserInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::NewProp_UserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::NewProp_UserInfo_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Get User Info*/" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Get User Info" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnUsersFetched__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnUsersFetched_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnUserFetched_Parms
		{
			FUserInfo CurrentUserInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentUserInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics::NewProp_CurrentUserInfo = { "CurrentUserInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameJoltPlugin_eventOnUserFetched_Parms, CurrentUserInfo), Z_Construct_UScriptStruct_FUserInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics::NewProp_CurrentUserInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Get Current User Info */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Get Current User Info" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnUserFetched__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnUserFetched_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnAutoLogin_Parms
		{
			bool bIsLoggedIn;
		};
		static void NewProp_bIsLoggedIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoggedIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::NewProp_bIsLoggedIn_SetBit(void* Obj)
	{
		((_Script_GameJoltPlugin_eventOnAutoLogin_Parms*)Obj)->bIsLoggedIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::NewProp_bIsLoggedIn = { "bIsLoggedIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameJoltPlugin_eventOnAutoLogin_Parms), &Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::NewProp_bIsLoggedIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::NewProp_bIsLoggedIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Automatic Login */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Automatic Login" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnAutoLogin__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnAutoLogin_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics
	{
		struct _Script_GameJoltPlugin_eventOnUserAuthorized_Parms
		{
			bool bIsLoggedIn;
		};
		static void NewProp_bIsLoggedIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoggedIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::NewProp_bIsLoggedIn_SetBit(void* Obj)
	{
		((_Script_GameJoltPlugin_eventOnUserAuthorized_Parms*)Obj)->bIsLoggedIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::NewProp_bIsLoggedIn = { "bIsLoggedIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameJoltPlugin_eventOnUserAuthorized_Parms), &Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::NewProp_bIsLoggedIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::NewProp_bIsLoggedIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Authorize User */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Authorize User" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnUserAuthorized__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameJoltPlugin_eventOnUserAuthorized_Parms), Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnFailed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Generates a delegate for the OnFailed event */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Generates a delegate for the OnFailed event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnFailed__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GameJoltPlugin_OnGetResult__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltPlugin_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Generates a delegate for the OnGetResult event */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Generates a delegate for the OnGetResult event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltPlugin_OnGetResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin, nullptr, "OnGetResult__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameJoltPlugin_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltPlugin_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameJoltPlugin_OnGetResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameJoltPlugin_OnGetResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EDataOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameJoltPlugin_EDataOperation, Z_Construct_UPackage__Script_GameJoltPlugin(), TEXT("EDataOperation"));
		}
		return Singleton;
	}
	template<> GAMEJOLTPLUGIN_API UEnum* StaticEnum<EDataOperation>()
	{
		return EDataOperation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDataOperation(EDataOperation_StaticEnum, TEXT("/Script/GameJoltPlugin"), TEXT("EDataOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameJoltPlugin_EDataOperation_Hash() { return 2487686090U; }
	UEnum* Z_Construct_UEnum_GameJoltPlugin_EDataOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameJoltPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDataOperation"), 0, Get_Z_Construct_UEnum_GameJoltPlugin_EDataOperation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDataOperation::add", (int64)EDataOperation::add },
				{ "EDataOperation::substract", (int64)EDataOperation::substract },
				{ "EDataOperation::multiply", (int64)EDataOperation::multiply },
				{ "EDataOperation::divide", (int64)EDataOperation::divide },
				{ "EDataOperation::append", (int64)EDataOperation::append },
				{ "EDataOperation::prepend", (int64)EDataOperation::prepend },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "add.DisplayName", "Add" },
				{ "add.Name", "EDataOperation::add" },
				{ "append.DisplayName", "Append" },
				{ "append.Name", "EDataOperation::append" },
				{ "BlueprintType", "true" },
				{ "divide.DisplayName", "Divide" },
				{ "divide.Name", "EDataOperation::divide" },
				{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
				{ "multiply.DisplayName", "Multiply" },
				{ "multiply.Name", "EDataOperation::multiply" },
				{ "prepend.DisplayName", "Prepend" },
				{ "prepend.Name", "EDataOperation::prepend" },
				{ "substract.DisplayName", "Substract" },
				{ "substract.Name", "EDataOperation::substract" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin,
				nullptr,
				"EDataOperation",
				"EDataOperation",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDataStore_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameJoltPlugin_EDataStore, Z_Construct_UPackage__Script_GameJoltPlugin(), TEXT("EDataStore"));
		}
		return Singleton;
	}
	template<> GAMEJOLTPLUGIN_API UEnum* StaticEnum<EDataStore>()
	{
		return EDataStore_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDataStore(EDataStore_StaticEnum, TEXT("/Script/GameJoltPlugin"), TEXT("EDataStore"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameJoltPlugin_EDataStore_Hash() { return 1784722913U; }
	UEnum* Z_Construct_UEnum_GameJoltPlugin_EDataStore()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameJoltPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDataStore"), 0, Get_Z_Construct_UEnum_GameJoltPlugin_EDataStore_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDataStore::Global", (int64)EDataStore::Global },
				{ "EDataStore::User", (int64)EDataStore::User },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Global.Name", "EDataStore::Global" },
				{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
				{ "User.Name", "EDataStore::User" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin,
				nullptr,
				"EDataStore",
				"EDataStore",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESessionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameJoltPlugin_ESessionStatus, Z_Construct_UPackage__Script_GameJoltPlugin(), TEXT("ESessionStatus"));
		}
		return Singleton;
	}
	template<> GAMEJOLTPLUGIN_API UEnum* StaticEnum<ESessionStatus>()
	{
		return ESessionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESessionStatus(ESessionStatus_StaticEnum, TEXT("/Script/GameJoltPlugin"), TEXT("ESessionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameJoltPlugin_ESessionStatus_Hash() { return 401813749U; }
	UEnum* Z_Construct_UEnum_GameJoltPlugin_ESessionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameJoltPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESessionStatus"), 0, Get_Z_Construct_UEnum_GameJoltPlugin_ESessionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESessionStatus::Active", (int64)ESessionStatus::Active },
				{ "ESessionStatus::Idle", (int64)ESessionStatus::Idle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Name", "ESessionStatus::Active" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Represents the possible values for the status of a session\n * https://gamejolt.com/game-api/doc/sessions/ping\n */" },
				{ "Idle.Name", "ESessionStatus::Idle" },
				{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
				{ "ToolTip", "Represents the possible values for the status of a session\nhttps://gamejolt.com/game-api/doc/sessions/ping" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin,
				nullptr,
				"ESessionStatus",
				"ESessionStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameJoltAchievedTrophies_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameJoltPlugin_EGameJoltAchievedTrophies, Z_Construct_UPackage__Script_GameJoltPlugin(), TEXT("EGameJoltAchievedTrophies"));
		}
		return Singleton;
	}
	template<> GAMEJOLTPLUGIN_API UEnum* StaticEnum<EGameJoltAchievedTrophies>()
	{
		return EGameJoltAchievedTrophies_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameJoltAchievedTrophies(EGameJoltAchievedTrophies_StaticEnum, TEXT("/Script/GameJoltPlugin"), TEXT("EGameJoltAchievedTrophies"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameJoltPlugin_EGameJoltAchievedTrophies_Hash() { return 1738891929U; }
	UEnum* Z_Construct_UEnum_GameJoltPlugin_EGameJoltAchievedTrophies()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameJoltPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameJoltAchievedTrophies"), 0, Get_Z_Construct_UEnum_GameJoltPlugin_EGameJoltAchievedTrophies_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_BLANK", (int64)EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_BLANK },
				{ "EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_USER", (int64)EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_USER },
				{ "EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_GAME", (int64)EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_GAME },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* Represents the possible selections for \"Fetch Trophies\" (all, achieved, unachieved) */" },
				{ "GJ_ACHIEVEDTROPHY_BLANK.DisplayName", "All Trophies" },
				{ "GJ_ACHIEVEDTROPHY_BLANK.Name", "EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_BLANK" },
				{ "GJ_ACHIEVEDTROPHY_GAME.DisplayName", "Unachieved Trophies" },
				{ "GJ_ACHIEVEDTROPHY_GAME.Name", "EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_GAME" },
				{ "GJ_ACHIEVEDTROPHY_USER.DisplayName", "User Achieved Trophies" },
				{ "GJ_ACHIEVEDTROPHY_USER.Name", "EGameJoltAchievedTrophies::GJ_ACHIEVEDTROPHY_USER" },
				{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
				{ "ToolTip", "Represents the possible selections for \"Fetch Trophies\" (all, achieved, unachieved)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin,
				nullptr,
				"EGameJoltAchievedTrophies",
				"EGameJoltAchievedTrophies",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameJoltComponentEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameJoltPlugin_EGameJoltComponentEnum, Z_Construct_UPackage__Script_GameJoltPlugin(), TEXT("EGameJoltComponentEnum"));
		}
		return Singleton;
	}
	template<> GAMEJOLTPLUGIN_API UEnum* StaticEnum<EGameJoltComponentEnum>()
	{
		return EGameJoltComponentEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameJoltComponentEnum(EGameJoltComponentEnum_StaticEnum, TEXT("/Script/GameJoltPlugin"), TEXT("EGameJoltComponentEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameJoltPlugin_EGameJoltComponentEnum_Hash() { return 4083809106U; }
	UEnum* Z_Construct_UEnum_GameJoltPlugin_EGameJoltComponentEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameJoltPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameJoltComponentEnum"), 0, Get_Z_Construct_UEnum_GameJoltPlugin_EGameJoltComponentEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameJoltComponentEnum::GJ_USER_AUTH", (int64)EGameJoltComponentEnum::GJ_USER_AUTH },
				{ "EGameJoltComponentEnum::GJ_USER_AUTOLOGIN", (int64)EGameJoltComponentEnum::GJ_USER_AUTOLOGIN },
				{ "EGameJoltComponentEnum::GJ_USER_FETCH", (int64)EGameJoltComponentEnum::GJ_USER_FETCH },
				{ "EGameJoltComponentEnum::GJ_USERS_FETCH", (int64)EGameJoltComponentEnum::GJ_USERS_FETCH },
				{ "EGameJoltComponentEnum::GJ_USER_FRIENDLIST", (int64)EGameJoltComponentEnum::GJ_USER_FRIENDLIST },
				{ "EGameJoltComponentEnum::GJ_SESSION_OPEN", (int64)EGameJoltComponentEnum::GJ_SESSION_OPEN },
				{ "EGameJoltComponentEnum::GJ_SESSION_PING", (int64)EGameJoltComponentEnum::GJ_SESSION_PING },
				{ "EGameJoltComponentEnum::GJ_SESSION_CLOSE", (int64)EGameJoltComponentEnum::GJ_SESSION_CLOSE },
				{ "EGameJoltComponentEnum::GJ_SESSION_CHECK", (int64)EGameJoltComponentEnum::GJ_SESSION_CHECK },
				{ "EGameJoltComponentEnum::GJ_TROPHIES_FETCH", (int64)EGameJoltComponentEnum::GJ_TROPHIES_FETCH },
				{ "EGameJoltComponentEnum::GJ_TROPHIES_ADD", (int64)EGameJoltComponentEnum::GJ_TROPHIES_ADD },
				{ "EGameJoltComponentEnum::GJ_TROHIES_REMOVE", (int64)EGameJoltComponentEnum::GJ_TROHIES_REMOVE },
				{ "EGameJoltComponentEnum::GJ_SCORES_FETCH", (int64)EGameJoltComponentEnum::GJ_SCORES_FETCH },
				{ "EGameJoltComponentEnum::GJ_SCORES_ADD", (int64)EGameJoltComponentEnum::GJ_SCORES_ADD },
				{ "EGameJoltComponentEnum::GJ_SCORES_TABLE", (int64)EGameJoltComponentEnum::GJ_SCORES_TABLE },
				{ "EGameJoltComponentEnum::GJ_SCORES_RANK", (int64)EGameJoltComponentEnum::GJ_SCORES_RANK },
				{ "EGameJoltComponentEnum::GJ_DATASTORE_FETCH", (int64)EGameJoltComponentEnum::GJ_DATASTORE_FETCH },
				{ "EGameJoltComponentEnum::GJ_DATASTORE_SET", (int64)EGameJoltComponentEnum::GJ_DATASTORE_SET },
				{ "EGameJoltComponentEnum::GJ_DATASTORE_UPDATE", (int64)EGameJoltComponentEnum::GJ_DATASTORE_UPDATE },
				{ "EGameJoltComponentEnum::GJ_DATASTORE_REMOVE", (int64)EGameJoltComponentEnum::GJ_DATASTORE_REMOVE },
				{ "EGameJoltComponentEnum::GJ_OTHER", (int64)EGameJoltComponentEnum::GJ_OTHER },
				{ "EGameJoltComponentEnum::GJ_TIME", (int64)EGameJoltComponentEnum::GJ_TIME },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* Represents all possible requests */" },
				{ "GJ_DATASTORE_FETCH.DisplayName", "Fetch Data" },
				{ "GJ_DATASTORE_FETCH.Name", "EGameJoltComponentEnum::GJ_DATASTORE_FETCH" },
				{ "GJ_DATASTORE_REMOVE.DisplayName", "Fetch Keys" },
				{ "GJ_DATASTORE_REMOVE.Name", "EGameJoltComponentEnum::GJ_DATASTORE_REMOVE" },
				{ "GJ_DATASTORE_SET.DisplayName", "Set Data" },
				{ "GJ_DATASTORE_SET.Name", "EGameJoltComponentEnum::GJ_DATASTORE_SET" },
				{ "GJ_DATASTORE_UPDATE.DisplayName", "Update Data" },
				{ "GJ_DATASTORE_UPDATE.Name", "EGameJoltComponentEnum::GJ_DATASTORE_UPDATE" },
				{ "GJ_OTHER.DisplayName", "Other" },
				{ "GJ_OTHER.Name", "EGameJoltComponentEnum::GJ_OTHER" },
				{ "GJ_SCORES_ADD.DisplayName", "Add Score" },
				{ "GJ_SCORES_ADD.Name", "EGameJoltComponentEnum::GJ_SCORES_ADD" },
				{ "GJ_SCORES_FETCH.DisplayName", "Fetch Scores" },
				{ "GJ_SCORES_FETCH.Name", "EGameJoltComponentEnum::GJ_SCORES_FETCH" },
				{ "GJ_SCORES_RANK.DisplayName", "Fetch Rank of Highscore" },
				{ "GJ_SCORES_RANK.Name", "EGameJoltComponentEnum::GJ_SCORES_RANK" },
				{ "GJ_SCORES_TABLE.DisplayName", "Fetch Tables" },
				{ "GJ_SCORES_TABLE.Name", "EGameJoltComponentEnum::GJ_SCORES_TABLE" },
				{ "GJ_SESSION_CHECK.DisplayName", "Check Session" },
				{ "GJ_SESSION_CHECK.Name", "EGameJoltComponentEnum::GJ_SESSION_CHECK" },
				{ "GJ_SESSION_CLOSE.DisplayName", "Close Session" },
				{ "GJ_SESSION_CLOSE.Name", "EGameJoltComponentEnum::GJ_SESSION_CLOSE" },
				{ "GJ_SESSION_OPEN.DisplayName", "Open Session" },
				{ "GJ_SESSION_OPEN.Name", "EGameJoltComponentEnum::GJ_SESSION_OPEN" },
				{ "GJ_SESSION_PING.DisplayName", "Ping Session" },
				{ "GJ_SESSION_PING.Name", "EGameJoltComponentEnum::GJ_SESSION_PING" },
				{ "GJ_TIME.DisplayName", "Fetch Server Time" },
				{ "GJ_TIME.Name", "EGameJoltComponentEnum::GJ_TIME" },
				{ "GJ_TROHIES_REMOVE.DisplayName", "Remove Rewarded Trophy" },
				{ "GJ_TROHIES_REMOVE.Name", "EGameJoltComponentEnum::GJ_TROHIES_REMOVE" },
				{ "GJ_TROPHIES_ADD.DisplayName", "Reward Trophy" },
				{ "GJ_TROPHIES_ADD.Name", "EGameJoltComponentEnum::GJ_TROPHIES_ADD" },
				{ "GJ_TROPHIES_FETCH.DisplayName", "Fetch Trophies" },
				{ "GJ_TROPHIES_FETCH.Name", "EGameJoltComponentEnum::GJ_TROPHIES_FETCH" },
				{ "GJ_USER_AUTH.DisplayName", "Authorize User" },
				{ "GJ_USER_AUTH.Name", "EGameJoltComponentEnum::GJ_USER_AUTH" },
				{ "GJ_USER_AUTOLOGIN.DisplayName", "Automatic Login" },
				{ "GJ_USER_AUTOLOGIN.Name", "EGameJoltComponentEnum::GJ_USER_AUTOLOGIN" },
				{ "GJ_USER_FETCH.DisplayName", "Fetch Current User" },
				{ "GJ_USER_FETCH.Name", "EGameJoltComponentEnum::GJ_USER_FETCH" },
				{ "GJ_USER_FRIENDLIST.DisplayName", "Fetch Friendlist" },
				{ "GJ_USER_FRIENDLIST.Name", "EGameJoltComponentEnum::GJ_USER_FRIENDLIST" },
				{ "GJ_USERS_FETCH.DisplayName", "Fetch Users" },
				{ "GJ_USERS_FETCH.Name", "EGameJoltComponentEnum::GJ_USERS_FETCH" },
				{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
				{ "ToolTip", "Represents all possible requests" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameJoltPlugin,
				nullptr,
				"EGameJoltComponentEnum",
				"EGameJoltComponentEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FScoreTableInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEJOLTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FScoreTableInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreTableInfo, Z_Construct_UPackage__Script_GameJoltPlugin(), TEXT("ScoreTableInfo"), sizeof(FScoreTableInfo), Get_Z_Construct_UScriptStruct_FScoreTableInfo_Hash());
	}
	return Singleton;
}
template<> GAMEJOLTPLUGIN_API UScriptStruct* StaticStruct<FScoreTableInfo>()
{
	return FScoreTableInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScoreTableInfo(FScoreTableInfo::StaticStruct, TEXT("/Script/GameJoltPlugin"), TEXT("ScoreTableInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameJoltPlugin_StaticRegisterNativesFScoreTableInfo
{
	FScriptStruct_GameJoltPlugin_StaticRegisterNativesFScoreTableInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScoreTableInfo")),new UScriptStruct::TCppStructOps<FScoreTableInfo>);
	}
} ScriptStruct_GameJoltPlugin_StaticRegisterNativesFScoreTableInfo;
	struct Z_Construct_UScriptStruct_FScoreTableInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Primary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreTableInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Contains all information about a scoreboard */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Contains all information about a scoreboard" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreTableInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary_MetaData[] = {
		{ "Category", "Scoreboard Table Primary" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreTableInfo, Primary), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Scoreboard Table Description" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreTableInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Scoreboard Table Name" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreTableInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Scoreboard Table ID" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreTableInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreTableInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreTableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltPlugin,
		nullptr,
		&NewStructOps,
		"ScoreTableInfo",
		sizeof(FScoreTableInfo),
		alignof(FScoreTableInfo),
		Z_Construct_UScriptStruct_FScoreTableInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScoreTableInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScoreTableInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameJoltPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScoreTableInfo"), sizeof(FScoreTableInfo), Get_Z_Construct_UScriptStruct_FScoreTableInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScoreTableInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScoreTableInfo_Hash() { return 2442534541U; }
class UScriptStruct* FScoreInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEJOLTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FScoreInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreInfo, Z_Construct_UPackage__Script_GameJoltPlugin(), TEXT("ScoreInfo"), sizeof(FScoreInfo), Get_Z_Construct_UScriptStruct_FScoreInfo_Hash());
	}
	return Singleton;
}
template<> GAMEJOLTPLUGIN_API UScriptStruct* StaticStruct<FScoreInfo>()
{
	return FScoreInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScoreInfo(FScoreInfo::StaticStruct, TEXT("/Script/GameJoltPlugin"), TEXT("ScoreInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameJoltPlugin_StaticRegisterNativesFScoreInfo
{
	FScriptStruct_GameJoltPlugin_StaticRegisterNativesFScoreInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScoreInfo")),new UScriptStruct::TCppStructOps<FScoreInfo>);
	}
} ScriptStruct_GameJoltPlugin_StaticRegisterNativesFScoreInfo;
	struct Z_Construct_UScriptStruct_FScoreInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnixTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnixTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Guest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreSort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreSort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScoreString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Contains all information about an entry in a scoreboard */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Contains all information about an entry in a scoreboard" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScoreInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "ScoreInfo" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreInfo, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UnixTimestamp_MetaData[] = {
		{ "Category", "ScoreInfo" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UnixTimestamp = { "UnixTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreInfo, UnixTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UnixTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UnixTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Guest_MetaData[] = {
		{ "Category", "ScoreInfo" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Guest = { "Guest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreInfo, Guest), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Guest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Guest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserID_MetaData[] = {
		{ "Category", "ScoreInfo" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreInfo, UserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "ScoreInfo" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreInfo, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ExtraData_MetaData[] = {
		{ "Category", "ScoreInfo" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ExtraData = { "ExtraData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreInfo, ExtraData), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ExtraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ExtraData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreSort_MetaData[] = {
		{ "Category", "ScoreInfo" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreSort = { "ScoreSort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreInfo, ScoreSort), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreSort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreSort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreString_MetaData[] = {
		{ "Category", "ScoreInfo" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreString = { "ScoreString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreInfo, ScoreString), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UnixTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Guest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ExtraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreSort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltPlugin,
		nullptr,
		&NewStructOps,
		"ScoreInfo",
		sizeof(FScoreInfo),
		alignof(FScoreInfo),
		Z_Construct_UScriptStruct_FScoreInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScoreInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScoreInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameJoltPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScoreInfo"), sizeof(FScoreInfo), Get_Z_Construct_UScriptStruct_FScoreInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScoreInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScoreInfo_Hash() { return 3271580265U; }
class UScriptStruct* FTrophyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEJOLTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FTrophyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrophyInfo, Z_Construct_UPackage__Script_GameJoltPlugin(), TEXT("TrophyInfo"), sizeof(FTrophyInfo), Get_Z_Construct_UScriptStruct_FTrophyInfo_Hash());
	}
	return Singleton;
}
template<> GAMEJOLTPLUGIN_API UScriptStruct* StaticStruct<FTrophyInfo>()
{
	return FTrophyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrophyInfo(FTrophyInfo::StaticStruct, TEXT("/Script/GameJoltPlugin"), TEXT("TrophyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameJoltPlugin_StaticRegisterNativesFTrophyInfo
{
	FScriptStruct_GameJoltPlugin_StaticRegisterNativesFTrophyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrophyInfo")),new UScriptStruct::TCppStructOps<FTrophyInfo>);
	}
} ScriptStruct_GameJoltPlugin_StaticRegisterNativesFTrophyInfo;
	struct Z_Construct_UScriptStruct_FTrophyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_achieved_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_achieved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_image_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_image_url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Difficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trophy_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Trophy_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Contains all information about a trophy */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Contains all information about a trophy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrophyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_achieved_MetaData[] = {
		{ "Category", "Achieved Time" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_achieved = { "achieved", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrophyInfo, achieved), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_achieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_achieved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_image_url_MetaData[] = {
		{ "Category", "Trophy's Image URL" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_image_url = { "image_url", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrophyInfo, image_url), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_image_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_image_url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty_MetaData[] = {
		{ "Category", "Trophy's Difficulty" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrophyInfo, Difficulty), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Trophy's Description" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrophyInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Trophy's Name" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrophyInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Trophy_ID_MetaData[] = {
		{ "Category", "Trophy ID" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Trophy_ID = { "Trophy_ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrophyInfo, Trophy_ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Trophy_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Trophy_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrophyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_achieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_image_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Trophy_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltPlugin,
		nullptr,
		&NewStructOps,
		"TrophyInfo",
		sizeof(FTrophyInfo),
		alignof(FTrophyInfo),
		Z_Construct_UScriptStruct_FTrophyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrophyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrophyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrophyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameJoltPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrophyInfo"), sizeof(FTrophyInfo), Get_Z_Construct_UScriptStruct_FTrophyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrophyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrophyInfo_Hash() { return 1981757994U; }
class UScriptStruct* FUserInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEJOLTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FUserInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserInfo, Z_Construct_UPackage__Script_GameJoltPlugin(), TEXT("UserInfo"), sizeof(FUserInfo), Get_Z_Construct_UScriptStruct_FUserInfo_Hash());
	}
	return Singleton;
}
template<> GAMEJOLTPLUGIN_API UScriptStruct* StaticStruct<FUserInfo>()
{
	return FUserInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserInfo(FUserInfo::StaticStruct, TEXT("/Script/GameJoltPlugin"), TEXT("UserInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameJoltPlugin_StaticRegisterNativesFUserInfo
{
	FScriptStruct_GameJoltPlugin_StaticRegisterNativesFUserInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserInfo")),new UScriptStruct::TCppStructOps<FUserInfo>);
	}
} ScriptStruct_GameJoltPlugin_StaticRegisterNativesFUserInfo;
	struct Z_Construct_UScriptStruct_FUserInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Last_Logged_in_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Last_Logged_in;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signed_up_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Signed_up;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_AvatarURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User_AvatarURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S_User_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_S_User_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Contains all available information about a user */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Contains all available information about a user" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_status_MetaData[] = {
		{ "Category", "User Status" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, status), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Last_Logged_in_MetaData[] = {
		{ "Category", "User Last Logged in" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Last_Logged_in = { "Last_Logged_in", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, Last_Logged_in), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Last_Logged_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Last_Logged_in_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Signed_up_MetaData[] = {
		{ "Category", "User Signed up" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Signed_up = { "Signed_up", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, Signed_up), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Signed_up_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Signed_up_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_AvatarURL_MetaData[] = {
		{ "Category", "User Avatar" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_AvatarURL = { "User_AvatarURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, User_AvatarURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_AvatarURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_AvatarURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_Name_MetaData[] = {
		{ "Category", "Username" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_Name = { "User_Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, User_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_Type_MetaData[] = {
		{ "Category", "User type" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_Type = { "User_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, User_Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_S_User_ID_MetaData[] = {
		{ "Category", "User ID" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_S_User_ID = { "S_User_ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, S_User_ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_S_User_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_S_User_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Last_Logged_in,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Signed_up,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_AvatarURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_User_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_S_User_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltPlugin,
		nullptr,
		&NewStructOps,
		"UserInfo",
		sizeof(FUserInfo),
		alignof(FUserInfo),
		Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameJoltPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserInfo"), sizeof(FUserInfo), Get_Z_Construct_UScriptStruct_FUserInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserInfo_Hash() { return 3180341830U; }
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetObjectArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UUEGameJoltAPI*>*)Z_Param__Result=P_THIS->GetObjectArray(Z_Param_WorldContextObject,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetObjectKeys)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetObjectKeys(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInt(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUEGameJoltAPI**)Z_Param__Result=P_THIS->GetObject(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execSendRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_output);
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_GET_UBOOL(Z_Param_bAppendUserInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendRequest(Z_Param_output,Z_Param_url,Z_Param_bAppendUserInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetData)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_DataAsString);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DataAsInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetData(Z_Param_Out_Success,Z_Param_Out_DataAsString,Z_Param_Out_DataAsInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execRemoveData)
	{
		P_GET_ENUM(EDataStore,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveData(EDataStore(Z_Param_Type),Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execUpdateData)
	{
		P_GET_ENUM(EDataStore,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_ENUM(EDataOperation,Z_Param_Operation);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateData(EDataStore(Z_Param_Type),Z_Param_Key,EDataOperation(Z_Param_Operation),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFetchData)
	{
		P_GET_ENUM(EDataStore,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FetchData(EDataStore(Z_Param_Type),Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execSetData)
	{
		P_GET_ENUM(EDataStore,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(EDataStore(Z_Param_Type),Z_Param_Key,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetRank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFetchRank)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_GET_PROPERTY(FIntProperty,Z_Param_TableID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FetchRank(Z_Param_Score,Z_Param_TableID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetScoreboardTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScoreTableInfo>*)Z_Param__Result=P_THIS->GetScoreboardTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFetchScoreboardTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FetchScoreboardTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execAddScore)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserScore);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserScore_Sort);
		P_GET_PROPERTY(FStrProperty,Z_Param_GuestUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_extra_data);
		P_GET_PROPERTY(FIntProperty,Z_Param_table_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddScore(Z_Param_UserScore,Z_Param_UserScore_Sort,Z_Param_GuestUser,Z_Param_extra_data,Z_Param_table_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetScoreboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScoreInfo>*)Z_Param__Result=P_THIS->GetScoreboard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFetchScoreboard)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ScoreLimit);
		P_GET_PROPERTY(FIntProperty,Z_Param_Table_id);
		P_GET_PROPERTY(FIntProperty,Z_Param_BetterThan);
		P_GET_PROPERTY(FIntProperty,Z_Param_WorseThan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FetchScoreboard(Z_Param_ScoreLimit,Z_Param_Table_id,Z_Param_BetterThan,Z_Param_WorseThan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetTrophyRemovalStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTrophyRemovalStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execRemoveRewardedTrophy)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Trophy_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveRewardedTrophy(Z_Param_Trophy_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetTrophies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTrophyInfo>*)Z_Param__Result=P_THIS->GetTrophies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFetchTrophies)
	{
		P_GET_ENUM(EGameJoltAchievedTrophies,Z_Param_AchievedType);
		P_GET_TARRAY(int32,Z_Param_Trophy_IDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FetchTrophies(EGameJoltAchievedTrophies(Z_Param_AchievedType),Z_Param_Trophy_IDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFetchAllTrophies)
	{
		P_GET_ENUM(EGameJoltAchievedTrophies,Z_Param_AchievedType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FetchAllTrophies(EGameJoltAchievedTrophies(Z_Param_AchievedType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execRewardTrophy)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Trophy_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RewardTrophy(Z_Param_Trophy_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetFriendlist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetFriendlist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFetchFriendlist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FetchFriendlist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetUserInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FUserInfo>*)Z_Param__Result=P_THIS->GetUserInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFetchUsers)
	{
		P_GET_TARRAY(int32,Z_Param_Users);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FetchUsers(Z_Param_Users);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFetchUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FetchUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execLogOffUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOffUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execisUserAuthorize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isUserAuthorize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Login(Z_Param_Name,Z_Param_Token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execReadServerTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->ReadServerTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFetchServerTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FetchServerTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execGetSessionStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSessionStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execCheckSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execCloseSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execPingSession)
	{
		P_GET_ENUM(ESessionStatus,Z_Param_SessionStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PingSession(ESessionStatus(Z_Param_SessionStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execOpenSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execInit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GameID);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrivateKey);
		P_GET_UBOOL(Z_Param_AutoLogin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Init(Z_Param_GameID,Z_Param_PrivateKey,Z_Param_AutoLogin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execCreate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUEGameJoltAPI**)Z_Param__Result=UUEGameJoltAPI::Create(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUEGameJoltAPI::execFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dataString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FromString(Z_Param_dataString);
		P_NATIVE_END;
	}
	void UUEGameJoltAPI::StaticRegisterNativesUUEGameJoltAPI()
	{
		UClass* Class = UUEGameJoltAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScore", &UUEGameJoltAPI::execAddScore },
			{ "CheckSession", &UUEGameJoltAPI::execCheckSession },
			{ "CloseSession", &UUEGameJoltAPI::execCloseSession },
			{ "Create", &UUEGameJoltAPI::execCreate },
			{ "FetchAllTrophies", &UUEGameJoltAPI::execFetchAllTrophies },
			{ "FetchData", &UUEGameJoltAPI::execFetchData },
			{ "FetchFriendlist", &UUEGameJoltAPI::execFetchFriendlist },
			{ "FetchRank", &UUEGameJoltAPI::execFetchRank },
			{ "FetchScoreboard", &UUEGameJoltAPI::execFetchScoreboard },
			{ "FetchScoreboardTable", &UUEGameJoltAPI::execFetchScoreboardTable },
			{ "FetchServerTime", &UUEGameJoltAPI::execFetchServerTime },
			{ "FetchTrophies", &UUEGameJoltAPI::execFetchTrophies },
			{ "FetchUser", &UUEGameJoltAPI::execFetchUser },
			{ "FetchUsers", &UUEGameJoltAPI::execFetchUsers },
			{ "FromString", &UUEGameJoltAPI::execFromString },
			{ "GetBool", &UUEGameJoltAPI::execGetBool },
			{ "GetData", &UUEGameJoltAPI::execGetData },
			{ "GetFriendlist", &UUEGameJoltAPI::execGetFriendlist },
			{ "GetInt", &UUEGameJoltAPI::execGetInt },
			{ "GetObject", &UUEGameJoltAPI::execGetObject },
			{ "GetObjectArray", &UUEGameJoltAPI::execGetObjectArray },
			{ "GetObjectKeys", &UUEGameJoltAPI::execGetObjectKeys },
			{ "GetRank", &UUEGameJoltAPI::execGetRank },
			{ "GetScoreboard", &UUEGameJoltAPI::execGetScoreboard },
			{ "GetScoreboardTable", &UUEGameJoltAPI::execGetScoreboardTable },
			{ "GetSessionStatus", &UUEGameJoltAPI::execGetSessionStatus },
			{ "GetString", &UUEGameJoltAPI::execGetString },
			{ "GetTrophies", &UUEGameJoltAPI::execGetTrophies },
			{ "GetTrophyRemovalStatus", &UUEGameJoltAPI::execGetTrophyRemovalStatus },
			{ "GetUserInfo", &UUEGameJoltAPI::execGetUserInfo },
			{ "Init", &UUEGameJoltAPI::execInit },
			{ "isUserAuthorize", &UUEGameJoltAPI::execisUserAuthorize },
			{ "Login", &UUEGameJoltAPI::execLogin },
			{ "LogOffUser", &UUEGameJoltAPI::execLogOffUser },
			{ "OpenSession", &UUEGameJoltAPI::execOpenSession },
			{ "PingSession", &UUEGameJoltAPI::execPingSession },
			{ "ReadServerTime", &UUEGameJoltAPI::execReadServerTime },
			{ "RemoveData", &UUEGameJoltAPI::execRemoveData },
			{ "RemoveRewardedTrophy", &UUEGameJoltAPI::execRemoveRewardedTrophy },
			{ "RewardTrophy", &UUEGameJoltAPI::execRewardTrophy },
			{ "SendRequest", &UUEGameJoltAPI::execSendRequest },
			{ "SetData", &UUEGameJoltAPI::execSetData },
			{ "UpdateData", &UUEGameJoltAPI::execUpdateData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics
	{
		struct UEGameJoltAPI_eventAddScore_Parms
		{
			FString UserScore;
			int32 UserScore_Sort;
			FString GuestUser;
			FString extra_data;
			int32 table_id;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_table_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_table_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_extra_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_extra_data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuestUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GuestUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserScore_Sort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserScore_Sort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventAddScore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventAddScore_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_table_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_table_id = { "table_id", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventAddScore_Parms, table_id), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_table_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_table_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_extra_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_extra_data = { "extra_data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventAddScore_Parms, extra_data), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_extra_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_extra_data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_GuestUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_GuestUser = { "GuestUser", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventAddScore_Parms, GuestUser), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_GuestUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_GuestUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_UserScore_Sort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_UserScore_Sort = { "UserScore_Sort", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventAddScore_Parms, UserScore_Sort), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_UserScore_Sort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_UserScore_Sort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_UserScore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_UserScore = { "UserScore", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventAddScore_Parms, UserScore), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_UserScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_UserScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_table_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_extra_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_GuestUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_UserScore_Sort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::NewProp_UserScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Scoreboard" },
		{ "Comment", "/** \n\x09 * Adds an entry to a scoreboard\n\x09 * @param UserScore A String value associated with the score. Example: \"234 Jumps\".\n\x09 * @param UserScore_Sort An integer sorting value associated with the score. All sorting will work off of this number. Example: \"234\".\n\x09 * @param GuestUser The guest's name. Leave blank if you're storing for a user.\n\x09 * @param extra_data If there's any extra data you would like to store (as a string), you can use this variable. This data is never shown to the user.\n\x09 * @param table_id The id of the high score table that you want to submit to. If left blank the score will be submitted to the primary high score table.\n\x09 * @return True if the request succeded, false if not\n\x09**/" },
		{ "DisplayName", "Add Score to Scoreboard" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Adds an entry to a scoreboard\n@param UserScore A String value associated with the score. Example: \"234 Jumps\".\n@param UserScore_Sort An integer sorting value associated with the score. All sorting will work off of this number. Example: \"234\".\n@param GuestUser The guest's name. Leave blank if you're storing for a user.\n@param extra_data If there's any extra data you would like to store (as a string), you can use this variable. This data is never shown to the user.\n@param table_id The id of the high score table that you want to submit to. If left blank the score will be submitted to the primary high score table.\n@return True if the request succeded, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "AddScore", nullptr, nullptr, sizeof(UEGameJoltAPI_eventAddScore_Parms), Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics
	{
		struct UEGameJoltAPI_eventCheckSession_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventCheckSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventCheckSession_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Sessions" },
		{ "Comment", "/**\n\x09 * Fetches the current session status\n\x09 * @return True if the request succeded, false if not\n\x09 */" },
		{ "DisplayName", "Fetch Session Status" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Fetches the current session status\n@return True if the request succeded, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "CheckSession", nullptr, nullptr, sizeof(UEGameJoltAPI_eventCheckSession_Parms), Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_CheckSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_CheckSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics
	{
		struct UEGameJoltAPI_eventCloseSession_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventCloseSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventCloseSession_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Sessions" },
		{ "Comment", "/**\n\x09 * Closes the session\n\x09 * @return True if the request succeded, false if not\n\x09 **/" },
		{ "DisplayName", "Close Session" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Closes the session\n@return True if the request succeded, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "CloseSession", nullptr, nullptr, sizeof(UEGameJoltAPI_eventCloseSession_Parms), Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_CloseSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_CloseSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics
	{
		struct UEGameJoltAPI_eventCreate_Parms
		{
			UObject* WorldContextObject;
			UUEGameJoltAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventCreate_Parms, ReturnValue), Z_Construct_UClass_UUEGameJoltAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventCreate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt" },
		{ "Comment", "/**\n\x09 * Creates a new instance of the UUEGameJoltAPI class, for use in Blueprint graphs.\n\x09 * @param WorldContextObject The current context (default to self / this)\n\x09 * @return A pointer to the newly created post data\n\x09**/" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Create GameJolt API Data" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Creates a new instance of the UUEGameJoltAPI class, for use in Blueprint graphs.\n@param WorldContextObject The current context (default to self / this)\n@return A pointer to the newly created post data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "Create", nullptr, nullptr, sizeof(UEGameJoltAPI_eventCreate_Parms), Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics
	{
		struct UEGameJoltAPI_eventFetchAllTrophies_Parms
		{
			EGameJoltAchievedTrophies AchievedType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievedType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AchievedType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AchievedType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::NewProp_AchievedType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::NewProp_AchievedType = { "AchievedType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchAllTrophies_Parms, AchievedType), Z_Construct_UEnum_GameJoltPlugin_EGameJoltAchievedTrophies, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::NewProp_AchievedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::NewProp_AchievedType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::NewProp_AchievedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::NewProp_AchievedType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::NewProp_AchievedType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Trophies" },
		{ "Comment", "/**\n\x09 * Gets information for all trophies\n\x09 * This is meant for the use in Blueprints\n\x09 * It's just a wrapper around FetchTrophies with an empty TArray as an parameter\n\x09 * You can call UUEGameJoltAPI::FetchTrophies directly\n\x09 **/" },
		{ "DisplayName", "Fetch All Trophies" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets information for all trophies\nThis is meant for the use in Blueprints\nIt's just a wrapper around FetchTrophies with an empty TArray as an parameter\nYou can call UUEGameJoltAPI::FetchTrophies directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FetchAllTrophies", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFetchAllTrophies_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics
	{
		struct UEGameJoltAPI_eventFetchData_Parms
		{
			EDataStore Type;
			FString Key;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchData_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchData_Parms, Type), Z_Construct_UEnum_GameJoltPlugin_EDataStore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::NewProp_Type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tries to fetch the data stored under the specified key\n\x09 * @param Type Whether to fetch a global key/value pair or a key/value pair stored for the current user\n\x09 * @param Key The key/label of the data\n\x09 */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Tries to fetch the data stored under the specified key\n@param Type Whether to fetch a global key/value pair or a key/value pair stored for the current user\n@param Key The key/label of the data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FetchData", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFetchData_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FetchData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FetchData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics
	{
		struct UEGameJoltAPI_eventFetchFriendlist_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventFetchFriendlist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventFetchFriendlist_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/**\n\x09 * Fetches the friendlist of the current user\n\x09 * @return True if the request could be send, false if not\n\x09 */" },
		{ "DisplayName", "Fetch Friendlist" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Fetches the friendlist of the current user\n@return True if the request could be send, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FetchFriendlist", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFetchFriendlist_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics
	{
		struct UEGameJoltAPI_eventFetchRank_Parms
		{
			int32 Score;
			int32 TableID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TableID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventFetchRank_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventFetchRank_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_TableID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_TableID = { "TableID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchRank_Parms, TableID), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_TableID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_TableID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_Score_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchRank_Parms, Score), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_TableID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::NewProp_Score,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Scoreboard" },
		{ "Comment", "/**\n\x09 * Fetches the rank of the specified score\n\x09 * Use \"Get Rank of Score\" / GetRank or the OnGetRank delegate to read the results\n\x09 * @param Score The numeric score value to look for\n\x09 * @param TableID The ID of the scoreboard to search. '0' means primary table\n\x09 * @return Whether the request could be send successfully or not\n\x09 */" },
		{ "DisplayName", "Fetch Rank of Score" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Fetches the rank of the specified score\nUse \"Get Rank of Score\" / GetRank or the OnGetRank delegate to read the results\n@param Score The numeric score value to look for\n@param TableID The ID of the scoreboard to search. '0' means primary table\n@return Whether the request could be send successfully or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FetchRank", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFetchRank_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FetchRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FetchRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics
	{
		struct UEGameJoltAPI_eventFetchScoreboard_Parms
		{
			int32 ScoreLimit;
			int32 Table_id;
			int32 BetterThan;
			int32 WorseThan;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorseThan_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WorseThan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BetterThan_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BetterThan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Table_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Table_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventFetchScoreboard_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventFetchScoreboard_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_WorseThan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_WorseThan = { "WorseThan", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchScoreboard_Parms, WorseThan), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_WorseThan_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_WorseThan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_BetterThan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_BetterThan = { "BetterThan", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchScoreboard_Parms, BetterThan), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_BetterThan_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_BetterThan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_Table_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_Table_id = { "Table_id", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchScoreboard_Parms, Table_id), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_Table_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_Table_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_ScoreLimit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_ScoreLimit = { "ScoreLimit", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchScoreboard_Parms, ScoreLimit), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_ScoreLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_ScoreLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_WorseThan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_BetterThan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_Table_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::NewProp_ScoreLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Scoreboard" },
		{ "Comment", "/**\n\x09 * Returns a list of scores either for a user or globally for a game\n\x09 * @param ScoreLimit The amount of scores you want to fetch. Default is 10, maximum is 100\n\x09 * @param Table_id The ID of the score table\n\x09 * @param BetterThan Fetch only scores better than this score sort value\n\x09 * @param WorseThan Fetch only scores worse than this score sort value\n\x09 * @return True if the request succeded, false if not\n\x09**/" },
		{ "DisplayName", "Fetch Scoreboard" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Returns a list of scores either for a user or globally for a game\n@param ScoreLimit The amount of scores you want to fetch. Default is 10, maximum is 100\n@param Table_id The ID of the score table\n@param BetterThan Fetch only scores better than this score sort value\n@param WorseThan Fetch only scores worse than this score sort value\n@return True if the request succeded, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FetchScoreboard", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFetchScoreboard_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics
	{
		struct UEGameJoltAPI_eventFetchScoreboardTable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventFetchScoreboardTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventFetchScoreboardTable_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Scoreboard" },
		{ "Comment", "/**\n\x09 * Returns a list of high score tables for a game.\n\x09 * @return True if it the request succeded and false if it failed\n\x09 **/" },
		{ "DisplayName", "Fetch Scoreboard Table" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Returns a list of high score tables for a game.\n@return True if it the request succeded and false if it failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FetchScoreboardTable", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFetchScoreboardTable_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics
	{
		struct UEGameJoltAPI_eventFetchServerTime_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventFetchServerTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventFetchServerTime_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Misc" },
		{ "Comment", "/**\n\x09 * Gets the time of the GameJolt servers\n\x09 * @return True if the request succeded, false if not\n\x09 **/" },
		{ "DisplayName", "Fetch Server Time" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets the time of the GameJolt servers\n@return True if the request succeded, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FetchServerTime", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFetchServerTime_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics
	{
		struct UEGameJoltAPI_eventFetchTrophies_Parms
		{
			EGameJoltAchievedTrophies AchievedType;
			TArray<int32> Trophy_IDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trophy_IDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Trophy_IDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Trophy_IDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievedType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AchievedType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AchievedType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_Trophy_IDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_Trophy_IDs = { "Trophy_IDs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchTrophies_Parms, Trophy_IDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_Trophy_IDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_Trophy_IDs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_Trophy_IDs_Inner = { "Trophy_IDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_AchievedType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_AchievedType = { "AchievedType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchTrophies_Parms, AchievedType), Z_Construct_UEnum_GameJoltPlugin_EGameJoltAchievedTrophies, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_AchievedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_AchievedType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_AchievedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_Trophy_IDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_Trophy_IDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_AchievedType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::NewProp_AchievedType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Trophies" },
		{ "Comment", "/**\n\x09 * Gets information for the selected trophies\n\x09 * @param AchievedType Whether only achieved, unachieved or all trophies should be fetched\n\x09 * @param Tropies_ID An array of trophy IDs. An empty array will return all trophies\n\x09 */" },
		{ "DisplayName", "Fetch Trophies" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets information for the selected trophies\n@param AchievedType Whether only achieved, unachieved or all trophies should be fetched\n@param Tropies_ID An array of trophy IDs. An empty array will return all trophies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FetchTrophies", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFetchTrophies_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics
	{
		struct UEGameJoltAPI_eventFetchUser_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventFetchUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventFetchUser_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/** \n\x09 * Gets information about the current user\n\x09 * @return True if it the request succeded and false if it failed\n\x09 **/" },
		{ "DisplayName", "Fetch Current User Info" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets information about the current user\n@return True if it the request succeded and false if it failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FetchUser", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFetchUser_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FetchUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FetchUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics
	{
		struct UEGameJoltAPI_eventFetchUsers_Parms
		{
			TArray<int32> Users;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Users;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Users_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventFetchUsers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventFetchUsers_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_Users_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFetchUsers_Parms, Users), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_Users_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_Users_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_Users_Inner = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_Users,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::NewProp_Users_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/**\n\x09 * Fetches an array of users\n\x09 * @param Users An array (int32) representing the user ids\n\x09 * @return True if the request succeded, false if not\n\x09 */" },
		{ "DisplayName", "Fetch Users" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Fetches an array of users\n@param Users An array (int32) representing the user ids\n@return True if the request succeded, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FetchUsers", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFetchUsers_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics
	{
		struct UEGameJoltAPI_eventFromString_Parms
		{
			FString dataString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dataString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::NewProp_dataString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::NewProp_dataString = { "dataString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventFromString_Parms, dataString), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::NewProp_dataString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::NewProp_dataString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::NewProp_dataString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Request" },
		{ "Comment", "/* Creates new data from the input string */" },
		{ "DisplayName", "From String" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Creates new data from the input string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "FromString", nullptr, nullptr, sizeof(UEGameJoltAPI_eventFromString_Parms), Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_FromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_FromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics
	{
		struct UEGameJoltAPI_eventGetBool_Parms
		{
			FString key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventGetBool_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetBool_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Request|Advanced" },
		{ "Comment", "/** Gets a bool from the object with the specified key\n\x09 * @param key The key of the bool value\n\x09 * @return The value as a bool\n\x09*/" },
		{ "DisplayName", "Get Bool Field" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets a bool from the object with the specified key\n@param key The key of the bool value\n@return The value as a bool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetBool", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetBool_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics
	{
		struct UEGameJoltAPI_eventGetData_Parms
		{
			bool Success;
			FString DataAsString;
			int32 DataAsInt;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataAsInt;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataAsString;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::NewProp_DataAsInt = { "DataAsInt", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetData_Parms, DataAsInt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::NewProp_DataAsString = { "DataAsString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetData_Parms, DataAsString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventGetData_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventGetData_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::NewProp_DataAsInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::NewProp_DataAsString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Gets the fetched data and converts them to a string or an integer (if possible)\n\x09 * @param Success Whether the data was found\n\x09 * @param DataAsString The fetched data as a string\n\x09 * @param DataAsInt The fetched data as an integer (0 if conversion was not possible)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets the fetched data and converts them to a string or an integer (if possible)\n@param Success Whether the data was found\n@param DataAsString The fetched data as a string\n@param DataAsInt The fetched data as an integer (0 if conversion was not possible)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetData", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetData_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics
	{
		struct UEGameJoltAPI_eventGetFriendlist_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetFriendlist_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/**\n\x09 * Returns the fetched friendlist\n\x09 * @warning Call FetchFriendlist first\n\x09 * @return The user ids of all friends\n\x09 */" },
		{ "DisplayName", "Get Friendlist" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Returns the fetched friendlist\n@warning Call FetchFriendlist first\n@return The user ids of all friends" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetFriendlist", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetFriendlist_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics
	{
		struct UEGameJoltAPI_eventGetInt_Parms
		{
			FString key;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetInt_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Request|Advanced" },
		{ "Comment", "/** Gets an integer from the object with the specified key\n\x09 * @param key The key of the integer value\n\x09 * @return The value as an integer\n\x09*/" },
		{ "DisplayName", "Get Int Field" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets an integer from the object with the specified key\n@param key The key of the integer value\n@return The value as an integer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetInt", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetInt_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics
	{
		struct UEGameJoltAPI_eventGetObject_Parms
		{
			FString key;
			UUEGameJoltAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UUEGameJoltAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetObject_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Request|Advanced" },
		{ "Comment", "/** Gets nested post data from the object with the specified key\n\x09 * @param key The key of the post data value\n\x09 * @return The value as an UUEGameJoltAPI object reference / pointer\n\x09*/" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Get Data Field" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets nested post data from the object with the specified key\n@param key The key of the post data value\n@return The value as an UUEGameJoltAPI object reference / pointer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetObject", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetObject_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics
	{
		struct UEGameJoltAPI_eventGetObjectArray_Parms
		{
			UObject* WorldContextObject;
			FString key;
			TArray<UUEGameJoltAPI*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetObjectArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUEGameJoltAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetObjectArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetObjectArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Request|Advanced" },
		{ "Comment", "/**\n\x09 * Gets an array fromt the post data\n\x09 * @param key The key of the array\n\x09 * @return The array assigned to the key\n\x09 **/" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Get Object Array Field" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets an array fromt the post data\n@param key The key of the array\n@return The array assigned to the key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetObjectArray", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetObjectArray_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics
	{
		struct UEGameJoltAPI_eventGetObjectKeys_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetObjectKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetObjectKeys_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Request|Advanced" },
		{ "Comment", "/**\n\x09 * Gets a string array of all keys from the post data\n\x09* @return An array with all keys\n\x09*/" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "Displayname", "Get Object Keys" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets a string array of all keys from the post data\n@return An array with all keys" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetObjectKeys", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetObjectKeys_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics
	{
		struct UEGameJoltAPI_eventGetRank_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetRank_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Scoreboard" },
		{ "Comment", "/**\n\x09 * Gets the rank of a highscore from the response data\n\x09 * \n\x09 * If the score is not represented by any rank on the score table, the request will return the rank that is closest to the requested score.\n\x09 * \n\x09 * @warning Make sure to call \"Fetch Rank of Score\" / FetchRank before this\n\x09 * @return The rank of the score\n\x09 */" },
		{ "DisplayName", "Get Rank of Score" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets the rank of a highscore from the response data\n\nIf the score is not represented by any rank on the score table, the request will return the rank that is closest to the requested score.\n\n@warning Make sure to call \"Fetch Rank of Score\" / FetchRank before this\n@return The rank of the score" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetRank", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetRank_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics
	{
		struct UEGameJoltAPI_eventGetScoreboard_Parms
		{
			TArray<FScoreInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetScoreboard_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScoreInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Scoreboard" },
		{ "Comment", "/**\n\x09 * Gets the list of scores fetched with FetchScoreboard\n\x09 * @return An array of FScoreInfo structs for all entries\n\x09**/" },
		{ "DisplayName", "Get Scoreboard" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets the list of scores fetched with FetchScoreboard\n@return An array of FScoreInfo structs for all entries" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetScoreboard", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetScoreboard_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics
	{
		struct UEGameJoltAPI_eventGetScoreboardTable_Parms
		{
			TArray<FScoreTableInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetScoreboardTable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScoreTableInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Scoreboard" },
		{ "Comment", "/** \n\x09 * Gets a list of high score tables for a game and puts them in an array of FScoreTableInfo structs\n\x09 * @return  A array of FScoreTableInfo structs\n\x09*/" },
		{ "DisplayName", "Get Scoreboard Table" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets a list of high score tables for a game and puts them in an array of FScoreTableInfo structs\n@return  A array of FScoreTableInfo structs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetScoreboardTable", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetScoreboardTable_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics
	{
		struct UEGameJoltAPI_eventGetSessionStatus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventGetSessionStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventGetSessionStatus_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Sessions" },
		{ "Comment", "/**\n\x09 * Gets the current session status\n\x09 * @return Whether the session is open or not. Also false if any error occurred \n\x09 */" },
		{ "DisplayName", "Get Session Status" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets the current session status\n@return Whether the session is open or not. Also false if any error occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetSessionStatus", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetSessionStatus_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics
	{
		struct UEGameJoltAPI_eventGetString_Parms
		{
			FString key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetString_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Request|Advanced" },
		{ "Comment", "/** Gets a string from the object with the specified key\n\x09 * @param key The key of the string value\n\x09 * @return The value as a string\n\x09*/" },
		{ "DisplayName", "Get String Field" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets a string from the object with the specified key\n@param key The key of the string value\n@return The value as a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetString", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetString_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics
	{
		struct UEGameJoltAPI_eventGetTrophies_Parms
		{
			TArray<FTrophyInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetTrophies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTrophyInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Trophies" },
		{ "Comment", "/**\n\x09 * Gets the trophy information from the fetched trophies\n\x09 * @return Array of FTrophyInfo structs for all fetched trophies\n\x09 */" },
		{ "DisplayName", "Get Trophies" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets the trophy information from the fetched trophies\n@return Array of FTrophyInfo structs for all fetched trophies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetTrophies", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetTrophies_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics
	{
		struct UEGameJoltAPI_eventGetTrophyRemovalStatus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventGetTrophyRemovalStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventGetTrophyRemovalStatus_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Trophies" },
		{ "Comment", "/**\n\x09 * Checks the success of a trophy removal\n\x09 * @return Whether the trophy was successfuly remove or not\n\x09 */" },
		{ "DisplayName", "Check Trophy Removal Status" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Checks the success of a trophy removal\n@return Whether the trophy was successfuly remove or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetTrophyRemovalStatus", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetTrophyRemovalStatus_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics
	{
		struct UEGameJoltAPI_eventGetUserInfo_Parms
		{
			TArray<FUserInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventGetUserInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUserInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/**\n\x09 * Gets a single or an array of users and puts them in an array of FUserInfo structs\n\x09 * @return An array with the FUserInfo structs\n\x09 */" },
		{ "DisplayName", "Get User Info" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Gets a single or an array of users and puts them in an array of FUserInfo structs\n@return An array with the FUserInfo structs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "GetUserInfo", nullptr, nullptr, sizeof(UEGameJoltAPI_eventGetUserInfo_Parms), Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics
	{
		struct UEGameJoltAPI_eventInit_Parms
		{
			int32 GameID;
			FString PrivateKey;
			bool AutoLogin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLogin_MetaData[];
#endif
		static void NewProp_AutoLogin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoLogin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivateKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrivateKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventInit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventInit_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_AutoLogin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_AutoLogin_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventInit_Parms*)Obj)->AutoLogin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_AutoLogin = { "AutoLogin", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventInit_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_AutoLogin_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_AutoLogin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_AutoLogin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_PrivateKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_PrivateKey = { "PrivateKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventInit_Parms, PrivateKey), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_PrivateKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_PrivateKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventInit_Parms, GameID), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_AutoLogin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_PrivateKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::NewProp_GameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "GameJolt" },
		{ "Comment", "/**\n\x09 * Sets information needed for all requests\n\x09 * You can find these values in the GameJolt API section of your game's dashboard\n\x09 * @param PrivateKey The private key of your game \n\x09 * @param GameID The id of your game\n\x09 * @param AutoLogin Whether to check for passed credentials by the GameJolt client or not\n\x09 * @return Whether the .gj-crendential file was found or not. Also false if AutoLogin is false\n\x09 **/" },
		{ "DisplayName", "Init" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Sets information needed for all requests\nYou can find these values in the GameJolt API section of your game's dashboard\n@param PrivateKey The private key of your game\n@param GameID The id of your game\n@param AutoLogin Whether to check for passed credentials by the GameJolt client or not\n@return Whether the .gj-crendential file was found or not. Also false if AutoLogin is false" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "Init", nullptr, nullptr, sizeof(UEGameJoltAPI_eventInit_Parms), Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics
	{
		struct UEGameJoltAPI_eventisUserAuthorize_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventisUserAuthorize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventisUserAuthorize_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/**\n\x09 * Checks if the authentification was succesful\n\x09 * @return True if the user could be logged in, false if not\n\x09*/" },
		{ "DisplayName", "Is User Login" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Checks if the authentification was succesful\n@return True if the user could be logged in, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "isUserAuthorize", nullptr, nullptr, sizeof(UEGameJoltAPI_eventisUserAuthorize_Parms), Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics
	{
		struct UEGameJoltAPI_eventLogin_Parms
		{
			FString Name;
			FString Token;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventLogin_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventLogin_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/**\n\x09 * Sends a request to authentificate the user\n\x09 * Call UUEGameJoltAPI::isUserAuthorize / Is User Login to check whether the authorization was successful or not\n \x09 * @param Name The username - case insensitive\n \x09 * @param Token The token - case insensitive\n \x09 */" },
		{ "DisplayName", "Login" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Sends a request to authentificate the user\nCall UUEGameJoltAPI::isUserAuthorize / Is User Login to check whether the authorization was successful or not\n@param Name The username - case insensitive\n@param Token The token - case insensitive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "Login", nullptr, nullptr, sizeof(UEGameJoltAPI_eventLogin_Parms), Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_Login()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_Login_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_LogOffUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_LogOffUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/* Resets user related properties */" },
		{ "DisplayName", "Logoff User" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Resets user related properties" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_LogOffUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "LogOffUser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_LogOffUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_LogOffUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_LogOffUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_LogOffUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics
	{
		struct UEGameJoltAPI_eventOpenSession_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventOpenSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventOpenSession_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Sessions" },
		{ "Comment", "/**\n\x09 * Opens a session. You'll have to ping it manually with a timer\n\x09 * @return True if the request succeded, false if not\n\x09 **/" },
		{ "DislayName", "Open Session" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Opens a session. You'll have to ping it manually with a timer\n@return True if the request succeded, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "OpenSession", nullptr, nullptr, sizeof(UEGameJoltAPI_eventOpenSession_Parms), Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_OpenSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_OpenSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics
	{
		struct UEGameJoltAPI_eventPingSession_Parms
		{
			ESessionStatus SessionStatus;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventPingSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventPingSession_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::NewProp_SessionStatus = { "SessionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventPingSession_Parms, SessionStatus), Z_Construct_UEnum_GameJoltPlugin_ESessionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::NewProp_SessionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::NewProp_SessionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::NewProp_SessionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Sessions" },
		{ "Comment", "/**\n\x09 * Pings the Session. Every 30 to 60 seconds is good.\n\x09 * @param SessionStatus The status of the session. Can be \"Active\" or \"Idle\"\n\x09 * @return True if the request succeded, false if not\n\x09 **/" },
		{ "DisplayName", "Ping Session" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Pings the Session. Every 30 to 60 seconds is good.\n@param SessionStatus The status of the session. Can be \"Active\" or \"Idle\"\n@return True if the request succeded, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "PingSession", nullptr, nullptr, sizeof(UEGameJoltAPI_eventPingSession_Parms), Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_PingSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_PingSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics
	{
		struct UEGameJoltAPI_eventReadServerTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventReadServerTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Misc" },
		{ "Comment", "/**\n\x09 * Puts the requested server time in a readable format\n\x09 * UUEGameJoltAPI::FetchServerTime has to be called before this function\n\x09 * @return The server time in a FDateTime struct\n\x09 */" },
		{ "DisplayName", "Read Server Time" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Puts the requested server time in a readable format\nUUEGameJoltAPI::FetchServerTime has to be called before this function\n@return The server time in a FDateTime struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "ReadServerTime", nullptr, nullptr, sizeof(UEGameJoltAPI_eventReadServerTime_Parms), Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics
	{
		struct UEGameJoltAPI_eventRemoveData_Parms
		{
			EDataStore Type;
			FString Key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventRemoveData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventRemoveData_Parms, Type), Z_Construct_UEnum_GameJoltPlugin_EDataStore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::NewProp_Type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Deletes the data stored under the specified key\n\x09 * @param Type Whether to remove a global key/value pair or a key/value pair stored for the current user\n\x09 * @param Key The key of the data to remove\n\x09 */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Deletes the data stored under the specified key\n@param Type Whether to remove a global key/value pair or a key/value pair stored for the current user\n@param Key The key of the data to remove" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "RemoveData", nullptr, nullptr, sizeof(UEGameJoltAPI_eventRemoveData_Parms), Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_RemoveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_RemoveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics
	{
		struct UEGameJoltAPI_eventRemoveRewardedTrophy_Parms
		{
			int32 Trophy_ID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trophy_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Trophy_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventRemoveRewardedTrophy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventRemoveRewardedTrophy_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::NewProp_Trophy_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::NewProp_Trophy_ID = { "Trophy_ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventRemoveRewardedTrophy_Parms, Trophy_ID), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::NewProp_Trophy_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::NewProp_Trophy_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::NewProp_Trophy_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Trophies" },
		{ "Comment", "/**\n\x09 * Unachieved the specified trophy for the curernt user\n\x09 * @param Trophy_ID The ID of the trophy to be unachieved\n\x09 * @return Whether the request could be send or not\n\x09 */" },
		{ "DisplayName", "Remove Rewarded Trophy" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Unachieved the specified trophy for the curernt user\n@param Trophy_ID The ID of the trophy to be unachieved\n@return Whether the request could be send or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "RemoveRewardedTrophy", nullptr, nullptr, sizeof(UEGameJoltAPI_eventRemoveRewardedTrophy_Parms), Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics
	{
		struct UEGameJoltAPI_eventRewardTrophy_Parms
		{
			int32 Trophy_ID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trophy_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Trophy_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventRewardTrophy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventRewardTrophy_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::NewProp_Trophy_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::NewProp_Trophy_ID = { "Trophy_ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventRewardTrophy_Parms, Trophy_ID), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::NewProp_Trophy_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::NewProp_Trophy_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::NewProp_Trophy_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Trophies" },
		{ "Comment", "/** \n\x09 * Awards the current user a trophy\n\x09 * @return True if the request succeded, false if not\n\x09 **/" },
		{ "DisplayName", "Reward Trophies" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Awards the current user a trophy\n@return True if the request succeded, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "RewardTrophy", nullptr, nullptr, sizeof(UEGameJoltAPI_eventRewardTrophy_Parms), Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics
	{
		struct UEGameJoltAPI_eventSendRequest_Parms
		{
			FString output;
			FString url;
			bool bAppendUserInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAppendUserInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendUserInfo;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_output_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventSendRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventSendRequest_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_bAppendUserInfo_SetBit(void* Obj)
	{
		((UEGameJoltAPI_eventSendRequest_Parms*)Obj)->bAppendUserInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_bAppendUserInfo = { "bAppendUserInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEGameJoltAPI_eventSendRequest_Parms), &Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_bAppendUserInfo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventSendRequest_Parms, url), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_output_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventSendRequest_Parms, output), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_output_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_output_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_bAppendUserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::NewProp_output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJolt|Request|Advanced" },
		{ "Comment", "/* Sends Request */" },
		{ "CPP_Default_bAppendUserInfo", "true" },
		{ "Displayname", "Send Request" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Sends Request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "SendRequest", nullptr, nullptr, sizeof(UEGameJoltAPI_eventSendRequest_Parms), Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_SendRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_SendRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics
	{
		struct UEGameJoltAPI_eventSetData_Parms
		{
			EDataStore Type;
			FString Key;
			FString Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventSetData_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventSetData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventSetData_Parms, Type), Z_Construct_UEnum_GameJoltPlugin_EDataStore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::NewProp_Type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Either posts data for a new key or changes data for an existing one.\n\x09 * @param Type Whether to store the key/value pair for all users (global) or for the current user (user)\n\x09 * @param Key The key/label for the data\n\x09 * @param Data The actual data to store\n\x09*/" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Either posts data for a new key or changes data for an existing one.\n@param Type Whether to store the key/value pair for all users (global) or for the current user (user)\n@param Key The key/label for the data\n@param Data The actual data to store" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "SetData", nullptr, nullptr, sizeof(UEGameJoltAPI_eventSetData_Parms), Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics
	{
		struct UEGameJoltAPI_eventUpdateData_Parms
		{
			EDataStore Type;
			FString Key;
			EDataOperation Operation;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventUpdateData_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventUpdateData_Parms, Operation), Z_Construct_UEnum_GameJoltPlugin_EDataOperation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventUpdateData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEGameJoltAPI_eventUpdateData_Parms, Type), Z_Construct_UEnum_GameJoltPlugin_EDataStore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Operation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Operation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::NewProp_Type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Updates already stored data\n\x09 * @param Type Whether to update a global key/value pair or a key/value pair stored of the current user\n\x09 * @param Key The key of the data to update\n\x09 * @param Operation The operation that should be performed on the data\n\x09 * @param Value The value for the selected operation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Updates already stored data\n@param Type Whether to update a global key/value pair or a key/value pair stored of the current user\n@param Key The key of the data to update\n@param Operation The operation that should be performed on the data\n@param Value The value for the selected operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUEGameJoltAPI, nullptr, "UpdateData", nullptr, nullptr, sizeof(UEGameJoltAPI_eventUpdateData_Parms), Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUEGameJoltAPI_UpdateData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUEGameJoltAPI_UpdateData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUEGameJoltAPI_NoRegister()
	{
		return UUEGameJoltAPI::StaticClass();
	}
	struct Z_Construct_UClass_UUEGameJoltAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GJAPI_VERSION_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GJAPI_VERSION;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GJAPI_ROOT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GJAPI_ROOT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GJAPI_SERVER_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GJAPI_SERVER;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Game_PrivateKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Game_PrivateKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Game_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Game_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimeFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRankFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRankFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScoreboardTableFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScoreboardTableFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScoreboardFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScoreboardFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScoreAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScoreAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTrophyRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrophyRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTrophiesFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrophiesFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionChecked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionChecked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionPinged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionPinged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionOpened_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFriendlistFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendlistFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUsersFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUsersFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUserFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAutoLogin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAutoLogin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUserAuthorized_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserAuthorized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGetResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastActionPerformed_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastActionPerformed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastActionPerformed_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoggedIn_MetaData[];
#endif
		static void NewProp_bIsLoggedIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoggedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guest_username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Guest_username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUEGameJoltAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUEGameJoltAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUEGameJoltAPI_AddScore, "AddScore" }, // 3417964734
		{ &Z_Construct_UFunction_UUEGameJoltAPI_CheckSession, "CheckSession" }, // 1321684332
		{ &Z_Construct_UFunction_UUEGameJoltAPI_CloseSession, "CloseSession" }, // 515371078
		{ &Z_Construct_UFunction_UUEGameJoltAPI_Create, "Create" }, // 1660616419
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FetchAllTrophies, "FetchAllTrophies" }, // 3031685995
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FetchData, "FetchData" }, // 405600189
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FetchFriendlist, "FetchFriendlist" }, // 1206884011
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FetchRank, "FetchRank" }, // 1039683760
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboard, "FetchScoreboard" }, // 1990907411
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FetchScoreboardTable, "FetchScoreboardTable" }, // 225776257
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FetchServerTime, "FetchServerTime" }, // 3748123209
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FetchTrophies, "FetchTrophies" }, // 3212294394
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FetchUser, "FetchUser" }, // 1154399788
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FetchUsers, "FetchUsers" }, // 2076096816
		{ &Z_Construct_UFunction_UUEGameJoltAPI_FromString, "FromString" }, // 3506429489
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetBool, "GetBool" }, // 1615095272
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetData, "GetData" }, // 2796012250
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetFriendlist, "GetFriendlist" }, // 289025074
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetInt, "GetInt" }, // 3226956274
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetObject, "GetObject" }, // 3281294673
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetObjectArray, "GetObjectArray" }, // 3111938753
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetObjectKeys, "GetObjectKeys" }, // 2325852870
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetRank, "GetRank" }, // 887113914
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboard, "GetScoreboard" }, // 2758653091
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetScoreboardTable, "GetScoreboardTable" }, // 3596695834
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetSessionStatus, "GetSessionStatus" }, // 1865097216
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetString, "GetString" }, // 415788389
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetTrophies, "GetTrophies" }, // 2089372617
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetTrophyRemovalStatus, "GetTrophyRemovalStatus" }, // 2651351099
		{ &Z_Construct_UFunction_UUEGameJoltAPI_GetUserInfo, "GetUserInfo" }, // 1925201736
		{ &Z_Construct_UFunction_UUEGameJoltAPI_Init, "Init" }, // 3359200643
		{ &Z_Construct_UFunction_UUEGameJoltAPI_isUserAuthorize, "isUserAuthorize" }, // 2549966577
		{ &Z_Construct_UFunction_UUEGameJoltAPI_Login, "Login" }, // 647247236
		{ &Z_Construct_UFunction_UUEGameJoltAPI_LogOffUser, "LogOffUser" }, // 3783261369
		{ &Z_Construct_UFunction_UUEGameJoltAPI_OpenSession, "OpenSession" }, // 1257479540
		{ &Z_Construct_UFunction_UUEGameJoltAPI_PingSession, "PingSession" }, // 821213392
		{ &Z_Construct_UFunction_UUEGameJoltAPI_ReadServerTime, "ReadServerTime" }, // 472779665
		{ &Z_Construct_UFunction_UUEGameJoltAPI_RemoveData, "RemoveData" }, // 272120010
		{ &Z_Construct_UFunction_UUEGameJoltAPI_RemoveRewardedTrophy, "RemoveRewardedTrophy" }, // 3337574031
		{ &Z_Construct_UFunction_UUEGameJoltAPI_RewardTrophy, "RewardTrophy" }, // 3876210700
		{ &Z_Construct_UFunction_UUEGameJoltAPI_SendRequest, "SendRequest" }, // 3252103849
		{ &Z_Construct_UFunction_UUEGameJoltAPI_SetData, "SetData" }, // 1317532131
		{ &Z_Construct_UFunction_UUEGameJoltAPI_UpdateData, "UpdateData" }, // 3592121317
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to use the GameJoltAPI\n * Is also internally used by an UUEGameJoltAPI instance as a carrier for response data\n*/" },
		{ "IncludePath", "UEGameJoltAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Class to use the GameJoltAPI\nIs also internally used by an UUEGameJoltAPI instance as a carrier for response data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_VERSION_MetaData[] = {
		{ "Category", "GameJolt|Request" },
		{ "DisplayName", "GameJolt API Version" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_VERSION = { "GJAPI_VERSION", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, GJAPI_VERSION), METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_VERSION_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_VERSION_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_ROOT_MetaData[] = {
		{ "Category", "GameJolt|Request" },
		{ "DisplayName", "GameJolt API Root" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_ROOT = { "GJAPI_ROOT", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, GJAPI_ROOT), METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_ROOT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_ROOT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_SERVER_MetaData[] = {
		{ "Category", "GameJolt|Request" },
		{ "Comment", "/* Properties for HTTP-Request*/" },
		{ "DisplayName", "GameJolt API Server" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Properties for HTTP-Request" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_SERVER = { "GJAPI_SERVER", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, GJAPI_SERVER), METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_SERVER_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_SERVER_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_UserToken_MetaData[] = {
		{ "Comment", "/* Token */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Token" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_UserToken = { "UserToken", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, UserToken), METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_UserToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_UserToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/* Username */" },
		{ "DisplayName", "Players Username" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Username" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, UserName), METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Game_PrivateKey_MetaData[] = {
		{ "Category", "GameJolt" },
		{ "Comment", "/* Private Key */" },
		{ "DisplayName", "Your Game Private Key" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Private Key" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Game_PrivateKey = { "Game_PrivateKey", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, Game_PrivateKey), METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Game_PrivateKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Game_PrivateKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Game_ID_MetaData[] = {
		{ "Category", "GameJolt" },
		{ "Comment", "/* GameID */" },
		{ "DisplayName", "Your Game ID" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "GameID" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Game_ID = { "Game_ID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, Game_ID), METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Game_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Game_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTimeFetched_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTimeFetched = { "OnTimeFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnTimeFetched), Z_Construct_UDelegateFunction_GameJoltPlugin_OnTimeFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTimeFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTimeFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnRankFetched_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnRankFetched = { "OnRankFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnRankFetched), Z_Construct_UDelegateFunction_GameJoltPlugin_OnRankFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnRankFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnRankFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreboardTableFetched_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreboardTableFetched = { "OnScoreboardTableFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnScoreboardTableFetched), Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardTableFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreboardTableFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreboardTableFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreboardFetched_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreboardFetched = { "OnScoreboardFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnScoreboardFetched), Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreboardFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreboardFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreboardFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreAdded_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreAdded = { "OnScoreAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnScoreAdded), Z_Construct_UDelegateFunction_GameJoltPlugin_OnScoreAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTrophyRemoved_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTrophyRemoved = { "OnTrophyRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnTrophyRemoved), Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophyRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTrophyRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTrophyRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTrophiesFetched_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTrophiesFetched = { "OnTrophiesFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnTrophiesFetched), Z_Construct_UDelegateFunction_GameJoltPlugin_OnTrophiesFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTrophiesFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTrophiesFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionChecked_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionChecked = { "OnSessionChecked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnSessionChecked), Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionChecked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionChecked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionChecked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionClosed_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionClosed = { "OnSessionClosed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnSessionClosed), Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionClosed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionPinged_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionPinged = { "OnSessionPinged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnSessionPinged), Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionPinged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionPinged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionPinged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionOpened_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionOpened = { "OnSessionOpened", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnSessionOpened), Z_Construct_UDelegateFunction_GameJoltPlugin_OnSessionOpened__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnFriendlistFetched_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnFriendlistFetched = { "OnFriendlistFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnFriendlistFetched), Z_Construct_UDelegateFunction_GameJoltPlugin_OnFriendlistFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnFriendlistFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnFriendlistFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUsersFetched_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUsersFetched = { "OnUsersFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnUsersFetched), Z_Construct_UDelegateFunction_GameJoltPlugin_OnUsersFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUsersFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUsersFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUserFetched_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUserFetched = { "OnUserFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnUserFetched), Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUserFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUserFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnAutoLogin_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnAutoLogin = { "OnAutoLogin", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnAutoLogin), Z_Construct_UDelegateFunction_GameJoltPlugin_OnAutoLogin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnAutoLogin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnAutoLogin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUserAuthorized_MetaData[] = {
		{ "Category", "GameJolt|Events|Specific" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUserAuthorized = { "OnUserAuthorized", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnUserAuthorized), Z_Construct_UDelegateFunction_GameJoltPlugin_OnUserAuthorized__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUserAuthorized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUserAuthorized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnFailed_MetaData[] = {
		{ "Category", "GameJolt|Events" },
		{ "Comment", "/* Event which triggers when the request failed */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Event which triggers when the request failed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnFailed), Z_Construct_UDelegateFunction_GameJoltPlugin_OnFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnGetResult_MetaData[] = {
		{ "Category", "GameJolt|Events" },
		{ "Comment", "/* Event which triggers when the content has been retrieved */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Event which triggers when the content has been retrieved" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnGetResult = { "OnGetResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, OnGetResult), Z_Construct_UDelegateFunction_GameJoltPlugin_OnGetResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnGetResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnGetResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "GameJolt|Request" },
		{ "Comment", "/* Contains the actual page content, as a string */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Contains the actual page content, as a string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, Content), METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_LastActionPerformed_MetaData[] = {
		{ "Category", "GameJolt" },
		{ "Comment", "/* An enum representing the last request send. Local 'Get' nodes don't count */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "An enum representing the last request send. Local 'Get' nodes don't count" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_LastActionPerformed = { "LastActionPerformed", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, LastActionPerformed), Z_Construct_UEnum_GameJoltPlugin_EGameJoltComponentEnum, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_LastActionPerformed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_LastActionPerformed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_LastActionPerformed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_bIsLoggedIn_MetaData[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/* Whether a user is currently logged in. Treated as a guest if false */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Whether a user is currently logged in. Treated as a guest if false" },
	};
#endif
	void Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_bIsLoggedIn_SetBit(void* Obj)
	{
		((UUEGameJoltAPI*)Obj)->bIsLoggedIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_bIsLoggedIn = { "bIsLoggedIn", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUEGameJoltAPI), &Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_bIsLoggedIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_bIsLoggedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_bIsLoggedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Guest_username_MetaData[] = {
		{ "Category", "GameJolt|User" },
		{ "Comment", "/* The username of the guest profile */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "The username of the guest profile" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Guest_username = { "Guest_username", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, Guest_username), METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Guest_username_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Guest_username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "/* Prevents crashes in Get-Functions */" },
		{ "ModuleRelativePath", "Classes/UEGameJoltAPI.h" },
		{ "ToolTip", "Prevents crashes in Get-Functions" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUEGameJoltAPI, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUEGameJoltAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_VERSION,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_ROOT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_GJAPI_SERVER,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_UserToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Game_PrivateKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Game_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTimeFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnRankFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreboardTableFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreboardFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnScoreAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTrophyRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnTrophiesFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionChecked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionPinged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnSessionOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnFriendlistFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUsersFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUserFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnAutoLogin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnUserAuthorized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_OnGetResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_LastActionPerformed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_LastActionPerformed_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_bIsLoggedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_Guest_username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUEGameJoltAPI_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUEGameJoltAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUEGameJoltAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUEGameJoltAPI_Statics::ClassParams = {
		&UUEGameJoltAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUEGameJoltAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUEGameJoltAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUEGameJoltAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUEGameJoltAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUEGameJoltAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUEGameJoltAPI, 3766343470);
	template<> GAMEJOLTPLUGIN_API UClass* StaticClass<UUEGameJoltAPI>()
	{
		return UUEGameJoltAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUEGameJoltAPI(Z_Construct_UClass_UUEGameJoltAPI, &UUEGameJoltAPI::StaticClass, TEXT("/Script/GameJoltPlugin"), TEXT("UUEGameJoltAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUEGameJoltAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
