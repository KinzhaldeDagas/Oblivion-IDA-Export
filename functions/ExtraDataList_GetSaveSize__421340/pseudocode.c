// Verified save-game modified-size estimator has no ExtraDistantData case. Its callers are the save-game modified-form path; this does not contradict the separate XLOD plugin-record writer. ExtraDistantData save-game policy remains Unknown.
__int16 __thiscall ExtraDataList_GetSaveSize(_DWORD *this, int a2, TESObjectREFR *a3)
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

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalistG); /*0x42134f*/
  v5 = 0; /*0x42135a*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x42135c*/
    v5 = 6; /*0x421365*/
  v30 = v5 + 2; /*0x42136d*/
  for ( i = *(this + 1); i; i = *(_DWORD *)(i + 8) ) /*0x421371*/
  {
    v7 = v30; /*0x421394*/
    switch ( *(_BYTE *)(i + 4) ) /*0x4213ac*/
    {
      case kExtraData_PersistentCell: /*0x4213ac*/
        if ( !a3 || !a3->vtbl->IsActor(a3) || a3 == (TESObjectREFR *)reference ) /*0x421758*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421758*/
        v30 += 4; /*0x42175e*/
        break; /*0x421763*/
      case kExtraData_Script: /*0x4213ac*/
        if ( (a2 & 0x4000020) == 0 ) /*0x421466*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421466*/
        v8 = (_DWORD **)OblivionDynamicCast( /*0x42147b*/
                          (void *)i,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                          &ExtraScript `RTTI Type Descriptor',
                          0);
        LOWORD(v30) = ScriptEventList_GetSaveSize_(v8[4]) + 4 + v30; /*0x42148e*/
        break; /*0x421493*/
      case kExtraData_StartLocation: /*0x4213ac*/
        OblivionDynamicCast( /*0x4215ac*/
          (void *)i,
          0,
          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
          &ExtraPackageStartLocation `RTTI Type Descriptor',
          0);
        v30 += 0x14; /*0x4215b4*/
        break; /*0x4215b9*/
      case kExtraData_Package: /*0x4213ac*/
        v9 = OblivionDynamicCast( /*0x4214b4*/
               (void *)i,
               0,
               (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
               &ExtraPackage `RTTI Type Descriptor',
               0);
        v30 += 0xE; /*0x4214bf*/
        v10 = v9; /*0x4214cb*/
        if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x40u /*0x4214dc*/
          || !TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v9[3] + 0xC)) )
        {
          break; /*0x4214e3*/
        }
        v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10[3] + 0xDC))(v10[3]) + 1; /*0x4214f2*/
        goto LABEL_30; /*0x4214f2*/
      case kExtraData_TresPassPackage: /*0x4213ac*/
        if ( (a2 & 0x40000) == 0 ) /*0x421516*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421516*/
        v30 += 4; /*0x42151c*/
        v12 = (_DWORD **)OblivionDynamicCast( /*0x42152f*/
                           (void *)i,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                           &ExtraTresPassPackage `RTTI Type Descriptor',
                           0);
        if ( v12[3] ) /*0x421537*/
          LOWORD(v30) = (*(int (__thiscall **)(_DWORD *))(*v12[3] + 0xDC))(v12[3]) + v30; /*0x42154c*/
        break; /*0x421551*/
      case kExtraData_RunOncePacks: /*0x4213ac*/
        v13 = *((_DWORD **)OblivionDynamicCast( /*0x42156b*/
                             (void *)i,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                             &ExtraRunOncePacks `RTTI Type Descriptor',
                             0)
              + 3);
        for ( j = 0; v13; v13 = (_DWORD *)v13[1] ) /*0x421578*/
        {
          if ( *v13 ) /*0x421580*/
            ++j; /*0x421585*/
        }
        v30 += j + 2 + 4 * j; /*0x421594*/
        break; /*0x421598*/
      case kExtraData_ReferencePointer: /*0x4213ac*/
      case kExtraData_Health: /*0x4213ac*/
      case kExtraData_TimeLeft: /*0x4213ac*/
      case kExtraData_Charge: /*0x4213ac*/
      case kExtraData_Scale: /*0x4213ac*/
      case kExtraData_Poison: /*0x4213ac*/
      case kExtraData_StartingWorldOrCell: /*0x4213ac*/
        if ( (a2 & 0x20) != 0 ) /*0x4213c9*/
          goto LABEL_8; /*0x4213c9*/
        goto ExtraDataList_GetSaveSize___def_4213AC; /*0x4213c9*/
      case kExtraData_Follower: /*0x4213ac*/
        v15 = *((_DWORD **)OblivionDynamicCast( /*0x4215d2*/
                             (void *)i,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                             &ExtraFollower `RTTI Type Descriptor',
                             0)
              + 3);
        for ( k = 0; v15; v15 = (_DWORD *)v15[1] ) /*0x4215dc*/
        {
          if ( *v15 ) /*0x4215e0*/
            ++k; /*0x4215e5*/
        }
        v30 += 4 * k + 2; /*0x4215f7*/
        break; /*0x4215fb*/
      case kExtraData_Ownership: /*0x4213ac*/
        if ( (a2 & 0xA0) == 0 ) /*0x421427*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421427*/
        v30 += 4; /*0x42142d*/
        break; /*0x421431*/
      case kExtraData_Global: /*0x4213ac*/
        if ( (a2 & 0x120) == 0 ) /*0x42143c*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x42143c*/
        v30 += 4; /*0x421442*/
        break; /*0x421446*/
      case kExtraData_Rank: /*0x4213ac*/
        if ( (a2 & 0x220) == 0 ) /*0x421451*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421451*/
        v30 += 4; /*0x421457*/
        break; /*0x42145b*/
      case kExtraData_Count: /*0x4213ac*/
        if ( (a2 & 0x20) == 0 ) /*0x4213b6*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x4213b6*/
        v30 += 2; /*0x4213bc*/
        break; /*0x4213c1*/
      case kExtraData_Uses: /*0x4213ac*/
      case kExtraData_Soul: /*0x4213ac*/
      case kExtraData_QuickKey: /*0x4213ac*/
        if ( (a2 & 0x20) != 0 ) /*0x4213db*/
          goto LABEL_10; /*0x4213db*/
        goto ExtraDataList_GetSaveSize___def_4213AC; /*0x4213db*/
      case kExtraData_Lock: /*0x4213ac*/
        if ( (a2 & 0x40) == 0 ) /*0x4213ee*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x4213ee*/
        v30 += 6; /*0x4213f4*/
        break; /*0x4213f9*/
      case kExtraData_Teleport: /*0x4213ac*/
        if ( (a2 & 0x100000) == 0 ) /*0x421662*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421662*/
        OblivionDynamicCast( /*0x421677*/
          (void *)i,
          0,
          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
          &ExtraTeleport `RTTI Type Descriptor',
          0);
        LOWORD(v30) = sub_42B4F0() + v30; /*0x421687*/
        break; /*0x42168c*/
      case kExtraData_MapMarker: /*0x4213ac*/
        if ( (a2 & 0x400) == 0 ) /*0x421722*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421722*/
        ++v30; /*0x421728*/
        break; /*0x42172d*/
      case kExtraData_LeveledItem: /*0x4213ac*/
        if ( (a2 & 0x20) == 0 ) /*0x421498*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421498*/
        v30 += 5; /*0x42149e*/
        break; /*0x4214a3*/
      case kExtraData_NonActorMagicCaster: /*0x4213ac*/
        if ( (a2 & 0x200000) == 0 ) /*0x421606*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421606*/
        v30 += 0xC; /*0x42160c*/
        break; /*0x421611*/
      case kExtraData_Seed|kExtraData_Havok: /*0x4213ac*/
        if ( (a2 & 0x200000) == 0 ) /*0x42161c*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x42161c*/
        v17 = OblivionDynamicCast( /*0x421631*/
                (void *)i,
                0,
                (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                &NonActorMagicTarget `RTTI Type Descriptor',
                0);
        v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v17[3] + 8))(v17 + 3); /*0x421644*/
        LOWORD(v30) = ActiveEffect_Base_GetAEListSaveSize_(v18, 0) + 4 + v30; /*0x421652*/
        break; /*0x421657*/
      case kExtraData_CrimeGold: /*0x4213ac*/
        if ( (char)a2 >= 0 ) /*0x421415*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421415*/
        v30 += 4; /*0x42141b*/
        break; /*0x42141f*/
      case kExtraData_OblivionEntry: /*0x4213ac*/
        if ( (a2 & 0x4000) == 0 ) /*0x421697*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421697*/
        v30 += 0x10; /*0x42169d*/
        break; /*0x4216a2*/
      case kExtraData_ItemDropper: /*0x4213ac*/
      case kExtraData_HeadingTarget: /*0x4213ac*/
      case kExtraData_HaggleAmount: /*0x4213ac*/
LABEL_8:
        v30 += 4; /*0x4213cf*/
        break; /*0x4213d3*/
      case kExtraData_PersuasionPercent: /*0x4213ac*/
        if ( (a2 & 0x1000) == 0 ) /*0x4216ad*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x4216ad*/
        OblivionDynamicCast( /*0x4216c2*/
          (void *)i,
          0,
          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
          &ExtraPersuasionPercent `RTTI Type Descriptor',
          0);
        v30 += 0xD; /*0x4216ca*/
        break; /*0x4216cf*/
      case kExtraData_LastFinishedSequence: /*0x4213ac*/
        if ( (a2 & 0x2000000) == 0 ) /*0x4216da*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x4216da*/
        v30 += strlen(*((const char **)OblivionDynamicCast( /*0x421713*/
                                         (void *)i,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                                         &ExtraLastFinishedSequence `RTTI Type Descriptor',
                                         0)
                      + 3))
             + 1;
        break; /*0x421717*/
      case kExtraData_SavedMovementData: /*0x4213ac*/
        if ( (a2 & 0x1000000) == 0 ) /*0x42176e*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x42176e*/
        v19 = (_WORD **)OblivionDynamicCast( /*0x42178e*/
                          (void *)i,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                          &ExtraSavedMovementData `RTTI Type Descriptor',
                          0);
        v31 = sub_4522F0(v19[4]) + 6 + v30; /*0x4217a3*/
        LOWORD(v30) = sub_4522F0(v19[5]) + v31; /*0x4217bd*/
        v11 = sub_4522F0(v19[6]); /*0x4217c3*/
LABEL_30:
        LOWORD(v30) = v11 + v30; /*0x4214f6*/
        break; /*0x4214f6*/
      case kExtraData_FriendHitList: /*0x4213ac*/
        v20 = *((_DWORD **)OblivionDynamicCast( /*0x4217e5*/
                             (void *)i,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                             &ExtraFriendHitList `RTTI Type Descriptor',
                             0)
              + 3);
        for ( m = 0; v20; v20 = (_DWORD *)v20[1] ) /*0x4217f2*/
        {
          if ( *v20 ) /*0x4217f4*/
            ++m; /*0x4217f9*/
        }
        v30 += 2 + 0xA * m; /*0x421809*/
        break; /*0x42180d*/
      case kExtraData_InvestmentGold: /*0x4213ac*/
        if ( (a2 & 0x2000) == 0 ) /*0x421404*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x421404*/
        v30 += 4; /*0x42140a*/
        break; /*0x42140e*/
      case kExtraData_InfoGeneralTopic: /*0x4213ac*/
        v22 = *((void **)OblivionDynamicCast( /*0x421826*/
                           (void *)i,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                           &ExtraInfoGeneralTopic `RTTI Type Descriptor',
                           0)
              + 3);
        if ( !v22 ) /*0x42182e*/
          goto ExtraDataList_GetSaveSize___def_4213AC; /*0x42182e*/
        LOWORD(v30) = MenuTopic::GetSaveSize((MenuTopicView *)v22) + v30;// ExtraDataList save-size case 0x59: includes MenuTopic::GetSaveSize only when ExtraInfoGeneralTopic owns a non-null cached MenuTopic. /*0x421835*/
        break; /*0x42183a*/
      case kExtraData_HasNoRumors: /*0x4213ac*/
LABEL_10:
        ++v30; /*0x4213e1*/
        break; /*0x4213e6*/
      default:
        goto ExtraDataList_GetSaveSize___def_4213AC;
    }
    if ( v7 == (_WORD)v30 ) /*0x421505*/
    {
ExtraDataList_GetSaveSize___def_4213AC:
      if ( ((a2 & 0x20) == 0 || *(_BYTE *)(i + 4) != 0x1B) /*0x421881*/
        && ((a2 & 0x20) == 0
         || *(_BYTE *)(i + 4) != 0x1C
         && ((a2 & 0x20) == 0 || *(_BYTE *)(i + 4) != 0x47 && ((a2 & 0x20) == 0 || *(_BYTE *)(i + 4) != 0x50)))
        && ((a2 & 0x10000000) == 0 || *(_BYTE *)(i + 4) != 0x35)
        && *(_BYTE *)(i + 4) != 0x25 )
      {
        continue; /*0x421881*/
      }
    }
    ++v30; /*0x421883*/
  }
  if ( Global_DebugSaveBuffer )
  {
    v23 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x4218a9*/
    if ( v23 )
    {
      v24 = TESForm_LookupByFormID(*v23); /*0x4218b6*/
      v25 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v24->vtbl->GetEditorName)( /*0x4218d6*/
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
      NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x4218f2*/
      return v30; /*0x4218fd*/
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      (unsigned __int16)v30,
      0x18CD,
      "..\\TES Shared\\ExtraDataList.cpp");
  }
  NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x421920*/
  return v30; /*0x4218fa*/
}
