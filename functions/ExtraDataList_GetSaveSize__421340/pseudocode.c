__int16 __userpurge ExtraDataList_GetSaveSize@<ax>(_DWORD *this@<ecx>, double st7_0@<st0>, int a3, TESObjectREFR *a4)
{
  int v5; // edi
  int i; // edi
  __int16 v7; // bp
  _DWORD **v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  __int16 v11; // ax
  _DWORD **v12; // eax
  _DWORD *v13; // eax
  int j; // ecx
  _DWORD *v15; // eax
  int k; // ecx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _WORD **v19; // esi
  _DWORD *v20; // eax
  int m; // ecx
  void *v22; // ecx
  UInt32 *v23; // esi
  TESForm *v24; // eax
  const char *v25; // eax
  int v27; // [esp-Ch] [ebp-18h]
  int v28; // [esp-8h] [ebp-14h]
  const char *v29; // [esp-4h] [ebp-10h]
  int v30; // [esp+8h] [ebp-4h]
  __int16 v31; // [esp+8h] [ebp-4h]

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalistG);
  v5 = 0;
  if ( sub_45A170() )
    v5 = 6;
  v30 = v5 + 2;
  for ( i = *(this + 1); i; i = *(_DWORD *)(i + 8) )
  {
    v7 = v30;
    switch ( *(_BYTE *)(i + 4) )
    {
      case kExtraData_PersistentCell:
        if ( !a4 || !a4->vtbl->IsActor(a4) || a4 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 4;
        break;
      case kExtraData_Script:
        if ( (a3 & 0x4000020) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v8 = (_DWORD **)OblivionDynamicCast(
                          (void *)i,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                          &ExtraScript `RTTI Type Descriptor',
                          0);
        LOWORD(v30) = ScriptEventList_GetSaveSize_(v8[4], st7_0) + 4 + v30;
        break;
      case kExtraData_StartLocation:
        OblivionDynamicCast(
          (void *)i,
          0,
          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
          &ExtraPackageStartLocation `RTTI Type Descriptor',
          0);
        v30 += 0x14;
        break;
      case kExtraData_Package:
        v9 = OblivionDynamicCast(
               (void *)i,
               0,
               (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
               &ExtraPackage `RTTI Type Descriptor',
               0);
        v30 += 0xE;
        v10 = v9;
        if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x40u
          || !TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v9[3] + 0xC)) )
        {
          break;
        }
        v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10[3] + 0xDC))(v10[3]) + 1;
        goto LABEL_30;
      case kExtraData_TresPassPackage:
        if ( (a3 & 0x40000) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 4;
        v12 = (_DWORD **)OblivionDynamicCast(
                           (void *)i,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                           &ExtraTresPassPackage `RTTI Type Descriptor',
                           0);
        if ( v12[3] )
          LOWORD(v30) = (*(int (__thiscall **)(_DWORD *))(*v12[3] + 0xDC))(v12[3]) + v30;
        break;
      case kExtraData_RunOncePacks:
        v13 = *((_DWORD **)OblivionDynamicCast(
                             (void *)i,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                             &ExtraRunOncePacks `RTTI Type Descriptor',
                             0)
              + 3);
        for ( j = 0; v13; v13 = (_DWORD *)v13[1] )
        {
          if ( *v13 )
            ++j;
        }
        v30 += j + 2 + 4 * j;
        break;
      case kExtraData_ReferencePointer:
      case kExtraData_Health:
      case kExtraData_TimeLeft:
      case kExtraData_Charge:
      case kExtraData_Scale:
      case kExtraData_Poison:
      case kExtraData_StartingWorldOrCell:
        if ( (a3 & 0x20) != 0 )
          goto LABEL_8;
        goto ExtraDataList_GetSaveSize___def_4213AC;
      case kExtraData_Follower:
        v15 = *((_DWORD **)OblivionDynamicCast(
                             (void *)i,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                             &ExtraFollower `RTTI Type Descriptor',
                             0)
              + 3);
        for ( k = 0; v15; v15 = (_DWORD *)v15[1] )
        {
          if ( *v15 )
            ++k;
        }
        v30 += 4 * k + 2;
        break;
      case kExtraData_Ownership:
        if ( (a3 & 0xA0) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 4;
        break;
      case kExtraData_Global:
        if ( (a3 & 0x120) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 4;
        break;
      case kExtraData_Rank:
        if ( (a3 & 0x220) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 4;
        break;
      case kExtraData_Count:
        if ( (a3 & 0x20) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 2;
        break;
      case kExtraData_Uses:
      case kExtraData_Soul:
      case kExtraData_QuickKey:
        if ( (a3 & 0x20) != 0 )
          goto LABEL_10;
        goto ExtraDataList_GetSaveSize___def_4213AC;
      case kExtraData_Lock:
        if ( (a3 & 0x40) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 6;
        break;
      case kExtraData_Teleport:
        if ( (a3 & 0x100000) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        OblivionDynamicCast(
          (void *)i,
          0,
          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
          &ExtraTeleport `RTTI Type Descriptor',
          0);
        LOWORD(v30) = sub_42B4F0() + v30;
        break;
      case kExtraData_MapMarker:
        if ( (a3 & 0x400) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        ++v30;
        break;
      case kExtraData_LeveledItem:
        if ( (a3 & 0x20) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 5;
        break;
      case kExtraData_NonActorMagicCaster:
        if ( (a3 & 0x200000) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 0xC;
        break;
      case kExtraData_Seed|kExtraData_Havok:
        if ( (a3 & 0x200000) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v17 = OblivionDynamicCast(
                (void *)i,
                0,
                (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                &NonActorMagicTarget `RTTI Type Descriptor',
                0);
        v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v17[3] + 8))(v17 + 3);
        LOWORD(v30) = ActiveEffect_Base_GetAEListSaveSize_(v18, 0) + 4 + v30;
        break;
      case kExtraData_CrimeGold:
        if ( (char)a3 >= 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 4;
        break;
      case kExtraData_OblivionEntry:
        if ( (a3 & 0x4000) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 0x10;
        break;
      case kExtraData_ItemDropper:
      case kExtraData_HeadingTarget:
      case kExtraData_HaggleAmount:
LABEL_8:
        v30 += 4;
        break;
      case kExtraData_PersuasionPercent:
        if ( (a3 & 0x1000) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        OblivionDynamicCast(
          (void *)i,
          0,
          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
          &ExtraPersuasionPercent `RTTI Type Descriptor',
          0);
        v30 += 0xD;
        break;
      case kExtraData_LastFinishedSequence:
        if ( (a3 & 0x2000000) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += strlen(*((const char **)OblivionDynamicCast(
                                         (void *)i,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                                         &ExtraLastFinishedSequence `RTTI Type Descriptor',
                                         0)
                      + 3))
             + 1;
        break;
      case kExtraData_SavedMovementData:
        if ( (a3 & 0x1000000) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v19 = (_WORD **)OblivionDynamicCast(
                          (void *)i,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                          &ExtraSavedMovementData `RTTI Type Descriptor',
                          0);
        v31 = sub_4522F0(v19[4]) + 6 + v30;
        LOWORD(v30) = sub_4522F0(v19[5]) + v31;
        v11 = sub_4522F0(v19[6]);
LABEL_30:
        LOWORD(v30) = v11 + v30;
        break;
      case kExtraData_FriendHitList:
        v20 = *((_DWORD **)OblivionDynamicCast(
                             (void *)i,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                             &ExtraFriendHitList `RTTI Type Descriptor',
                             0)
              + 3);
        for ( m = 0; v20; v20 = (_DWORD *)v20[1] )
        {
          if ( *v20 )
            ++m;
        }
        v30 += 2 + 0xA * m;
        break;
      case kExtraData_InvestmentGold:
        if ( (a3 & 0x2000) == 0 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        v30 += 4;
        break;
      case kExtraData_InfoGeneralTopic:
        v22 = *((void **)OblivionDynamicCast(
                           (void *)i,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                           &ExtraInfoGeneralTopic `RTTI Type Descriptor',
                           0)
              + 3);
        if ( !v22 )
          goto ExtraDataList_GetSaveSize___def_4213AC;
        LOWORD(v30) = sub_6B86A0((UnkBohDialogueTopicBoh *)v22) + v30;
        break;
      case kExtraData_HasNoRumors:
LABEL_10:
        ++v30;
        break;
      default:
        goto ExtraDataList_GetSaveSize___def_4213AC;
    }
    if ( v7 == (_WORD)v30 )
    {
ExtraDataList_GetSaveSize___def_4213AC:
      if ( ((a3 & 0x20) == 0 || *(_BYTE *)(i + 4) != 0x1B)
        && ((a3 & 0x20) == 0
         || *(_BYTE *)(i + 4) != 0x1C
         && ((a3 & 0x20) == 0 || *(_BYTE *)(i + 4) != 0x47 && ((a3 & 0x20) == 0 || *(_BYTE *)(i + 4) != 0x50)))
        && ((a3 & 0x10000000) == 0 || *(_BYTE *)(i + 4) != 0x35)
        && *(_BYTE *)(i + 4) != 0x25 )
      {
        continue;
      }
    }
    ++v30;
  }
  if ( Global_DebugSaveBuffer )
  {
    v23 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v23 )
    {
      v24 = TESForm_LookupByFormID(*v23);
      v25 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v24->vtbl->GetEditorName)(
                            v24,
                            *(UInt32 *)((char *)v23 + 5),
                            0x18CD,
                            "..\\TES Shared\\ExtraDataList.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        (unsigned __int16)v30,
        *v23,
        v25,
        v27,
        v28,
        v29);
      NiLeaveCriticalSection_0(&BSExtraDataCS);
      return v30;
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      (unsigned __int16)v30,
      0x18CD,
      "..\\TES Shared\\ExtraDataList.cpp");
  }
  NiLeaveCriticalSection_0(&BSExtraDataCS);
  return v30;
}
