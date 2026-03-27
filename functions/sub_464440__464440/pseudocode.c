TESWorldSpace *__userpurge sub_464440@<eax>(
        char *ecx0@<ecx>,
        int a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  InterfaceManager *Singleton; // eax
  int v8; // eax
  PlayerCharacter *v9; // eax
  DWORD (__stdcall *v10)(); // edi
  UInt32 mainThreadID; // esi
  UInt32 v12; // esi
  TESObjectCELL *ParentCell; // esi
  TESWorldSpace *result; // eax
  int *v15; // esi
  const char *v16; // eax
  _DWORD *v17; // eax
  NiTMap_Entry_TESCELL *v18; // eax
  ChangesMap *v19; // eax
  char v20; // bl
  unsigned int v21; // ecx
  unsigned int v22; // eax
  _DWORD *v23; // esi
  _DWORD *v24; // edx
  NiTMap_Entry_TESCELL *v25; // eax
  NiTMap_TESCELL *v26; // ecx
  int v27; // ebx
  TESForm *v28; // eax
  char *vtbl; // esi
  UInt32 v30; // esi
  int v31; // eax
  unsigned int v32; // edi
  unsigned int v33; // eax
  int v34; // eax
  TESForm *v35; // esi
  TESObjectCELL *CellAtCellCoord; // edi
  TESWorldSpace *v37; // eax
  TESObjectREFR *v38; // eax
  float v39; // [esp+18h] [ebp-50h]
  TESChildCELL *v40; // [esp+1Ch] [ebp-4Ch] BYREF
  int a1; // [esp+20h] [ebp-48h] BYREF
  int v42; // [esp+24h] [ebp-44h]
  int v43; // [esp+28h] [ebp-40h]
  NiTMap_Entry_TESCELL *v44; // [esp+2Ch] [ebp-3Ch] BYREF
  _DWORD v45[11]; // [esp+30h] [ebp-38h] BYREF
  int v46; // [esp+64h] [ebp-4h]
  char v47; // [esp+6Ch] [ebp+4h]

  if ( OSGlobals->unk04 )
  {
    *(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) = 1;
    sub_4599B0((char)ecx0, a3, a4, a5);
    sub_463700(ecx0, (char)ecx0, a2, a3, a4, a5);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)ecx0 + 0x1C))(*(_DWORD *)ecx0);
    sub_462080(ecx0);
    SaveLoad_ValidateCreatedObj__((BSSimpleList_VoidPtr *)ecx0);
    Singleton = InterfaceManager_GetSingleton(0, 1);
    sub_57ECB0(Singleton, a3, a4);
    sub_67F180();
    sub_67FCF0();
    sub_43F6E0((int)TES, a3, a4, a5);
    sub_43F560(TES);
    TESDataHandler_Clear((_BYTE *)TESDataHandler);
    EffectSettingCollection_Reset();
    sub_5B7150();
    sub_5A6A80();
    sub_5AD750(0);
    sub_44A2B0((char *)TESDataHandler, "Data\\");
    v8 = FormHeapAlloc(0x804u);
    v46 = 0;
    if ( v8 )
      v9 = (PlayerCharacter *)PlayerCharacter_constr(v8, a3, a4);
    else
      v9 = 0;
    v46 = 0xFFFFFFFF;
    TESDataHandler_g_PlayerRef = v9;
    TESForm_SetFormID((TESForm *)v9, 0x14, 1);
    v10 = GetCurrentThreadId;
    mainThreadID = OSGlobals->mainThreadID;
    if ( GetCurrentThreadId() == mainThreadID )
      v47 = ecx0[0x18] & 1;
    else
      v47 = (*((_DWORD *)ecx0 + 6) & 0x40000) != 0;
    v12 = OSGlobals->mainThreadID;
    if ( v10() == v12 )
      *((_DWORD *)ecx0 + 6) &= ~1u;
    else
      *((_DWORD *)ecx0 + 6) &= ~0x40000u;
    TESDataHandler_LoadFiles_(TESDataHandler, a3, a4, a5, 0, 0);
    sub_45A530(ecx0, v47);
    sub_5AD750(0);
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    TESObjectREFR_ChangeCell((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
    sub_447D80(TESDataHandler, a3, a4);
    TESObjectREFR_ChangeCell((TESObjectREFR *)TESDataHandler_g_PlayerRef, (int)ParentCell);
    sub_4431F0(TES, a3, (char)ecx0, a4, a5, *(TESWorldSpace **)(TESDataHandler + 0xC));
    result = (TESWorldSpace *)PrintToLog___("Initializing LOD land...");
    v15 = (int *)(TESDataHandler + 0xC);
    if ( TESDataHandler != 0xFFFFFFF4 )
    {
      do
      {
        if ( !v15[1] && !*v15 )
          break;
        result = TESWorldSpace_GetParentWorldpsace((TESWorldSpace *)*v15);
        if ( !result )
        {
          result = (TESWorldSpace *)sub_4EF7E0(*v15);
          if ( result )
          {
            v16 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)*v15 + 0xD4))(*v15);
            sub_40FEC0("Initializing LOD land for worldspace '%s'", v16);
            v17 = (_DWORD *)sub_4EF7E0(*v15);
            result = (TESWorldSpace *)sub_4EBC00(v17);
          }
        }
        v15 = (int *)v15[1];
      }
      while ( v15 );
    }
  }
  else
  {
    if ( !*((_DWORD *)ecx0 + 1) )
    {
      v18 = (NiTMap_Entry_TESCELL *)FormHeapAlloc(0x10u);
      v44 = v18;
      v46 = 1;
      if ( v18 )
        v19 = ChangesMap::ChangesMap((ChangesMap *)v18);
      else
        v19 = 0;
      v46 = 0xFFFFFFFF;
      *((_DWORD *)ecx0 + 1) = v19;
    }
    v20 = a6;
    if ( !a6 )
      sub_45EC50((int)ecx0, (char)ecx0, a3, a4, a5);
    *((_DWORD *)ecx0 + 6) |= 0x40u;
    if ( !a6 )
      sub_463700(ecx0, (char)ecx0, 0, a3, a4, a5);
    v21 = *(_DWORD *)(*(_DWORD *)ecx0 + 4);
    v39 = flt_A379CC;
    v22 = 0;
    if ( v21 )
    {
      v23 = *(_DWORD **)(*(_DWORD *)ecx0 + 8);
      v24 = v23;
      while ( !*v24 )
      {
        ++v22;
        ++v24;
        if ( v22 >= v21 )
          goto LABEL_32;
      }
      v25 = (NiTMap_Entry_TESCELL *)v23[v22];
    }
    else
    {
LABEL_32:
      v25 = 0;
    }
    v44 = v25;
    if ( v25 )
    {
      do
      {
        if ( OSGlobals->exitToMainMenu )
        {
          v39 = v39 + fConstant_Inv100;
          sub_57B950((char)ecx0, a3, a4, a5, 2, v39);
        }
        v26 = *(NiTMap_TESCELL **)ecx0;
        v40 = 0;
        a1 = 0;
        sub_452600(v26, &v44, (void **)&a1, (TESObjectCELL **)&v40);
        v27 = a1;
        v28 = TESForm_LookupByFormID(a1);
        if ( v28 != (TESForm *)TESDataHandler_g_PlayerRef )
        {
          if ( v28 )
          {
            sub_45F180((int)ecx0, a3, a4, a5, v28, v40);
          }
          else if ( (int)v40->vtbl < 0 )
          {
            vtbl = (char *)v40[1].vtbl;
            if ( vtbl )
            {
              qmemcpy(v45, vtbl + 4, sizeof(v45));
              v30 = v45[0];
              if ( !TESDataHandler_IsFormIDCreated_(v45[0]) )
              {
                v31 = *((_DWORD *)ecx0 + 0x1D);
                if ( v30 <= *(_DWORD *)(v31 + 0xC) )
                  v30 = *(_DWORD *)(*(_DWORD *)(v31 + 4) + 4 * v30);
                else
                  v30 = 0;
              }
              v32 = v45[4];
              v45[0] = v30;
              if ( TESDataHandler_IsFormIDCreated_(v45[4]) )
              {
                v33 = v32;
              }
              else
              {
                v34 = *((_DWORD *)ecx0 + 0x1D);
                if ( v32 <= *(_DWORD *)(v34 + 0xC) )
                  v33 = *(_DWORD *)(*(_DWORD *)(v34 + 4) + 4 * v32);
                else
                  v33 = 0;
              }
              v45[4] = v33;
              v35 = TESForm_LookupByFormID(v30);
              CellAtCellCoord = (TESObjectCELL *)OblivionDynamicCast(
                                                   v35,
                                                   0,
                                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                   &TESObjectCELL `RTTI Type Descriptor',
                                                   0);
              v37 = (TESWorldSpace *)OblivionDynamicCast(
                                       v35,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESWorldSpace `RTTI Type Descriptor',
                                       0);
              if ( v37 )
              {
                v43 = (int)*(float *)&v45[1];
                v42 = (int)*(float *)&v45[2];
                CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(v37, v43 >> 0xC, v42 >> 0xC);
              }
              if ( CellAtCellCoord )
              {
                if ( TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 0) )
                {
                  v38 = sub_45C4F0(v27, (int)v45);
                  sub_4D35D0(CellAtCellCoord, a3, a4, a5, (TESChildCELL *)v38);
                }
              }
            }
          }
        }
      }
      while ( v44 );
      v20 = a6;
    }
    (*(void (__usercall **)(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)ecx0 + 0x1C))(
      *(_DWORD *)ecx0,
      a5,
      a4,
      a3);
    if ( *(_DWORD *)ecx0 )
      (***(void (__thiscall ****)(_DWORD, int))ecx0)(*(_DWORD *)ecx0, 1);
    result = *((TESWorldSpace **)ecx0 + 1);
    *((_DWORD *)ecx0 + 6) &= ~0x40u;
    *(_DWORD *)ecx0 = result;
    *((_DWORD *)ecx0 + 1) = 0;
    if ( !v20 )
      ecx0[0xA8] = 0;
  }
  return result;
}
