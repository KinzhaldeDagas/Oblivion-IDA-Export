double __userpurge sub_45FDA0@<st0>(
        _DWORD **this@<ecx>,
        double st6_0@<st1>,
        double st5_0@<st2>,
        double result@<st0>,
        _DWORD *a5,
        int a6,
        char a7)
{
  UInt32 mainThreadID; // esi
  _DWORD **v8; // edi
  unsigned int v9; // eax
  unsigned int refID; // ebp
  _DWORD *v11; // ebx
  int v12; // esi
  unsigned int v13; // eax
  void **v14; // esi
  unsigned __int8 v15; // bl
  TESObjectREFR *v16; // eax
  TESObjectREFR *v17; // esi
  TESObjectREFR *v18; // esi
  _DWORD *v19; // eax
  UInt32 v20; // eax
  TESForm *v21; // eax
  float v22; // ecx
  float v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // esi
  TESObjectCELL *currentInteriorCell; // esi
  BSExtraDataVtbl *v27; // esi
  float *v28; // eax
  int v29; // eax
  TES *v30; // ecx
  int v31; // edx
  unsigned int v32; // ebp
  unsigned int i; // edi
  _DWORD *v34; // esi
  unsigned __int8 v35; // bl
  _DWORD **v36; // edx
  _DWORD *v37; // eax
  unsigned int j; // ecx
  void (__thiscall ***v39)(_DWORD, int); // ecx
  TESObjectCELL *v40; // esi
  BSExtraDataVtbl *v41; // esi
  int v42; // [esp-4h] [ebp-60h]
  int v43; // [esp+0h] [ebp-5Ch]
  float v44; // [esp+8h] [ebp-54h]
  __int64 v45; // [esp+Ch] [ebp-50h]
  char v46; // [esp+2Bh] [ebp-31h]
  int *p_a2; // [esp+30h] [ebp-2Ch]
  _DWORD **v49; // [esp+34h] [ebp-28h] BYREF
  float a2; // [esp+38h] [ebp-24h] BYREF
  float v51; // [esp+3Ch] [ebp-20h]
  int v52; // [esp+40h] [ebp-1Ch]
  float a3[2]; // [esp+44h] [ebp-18h] BYREF
  float v54; // [esp+4Ch] [ebp-10h]
  float a4[2]; // [esp+50h] [ebp-Ch] BYREF
  int v56; // [esp+58h] [ebp-4h] BYREF

  mainThreadID = OSGlobals->mainThreadID;
  v8 = this;
  if ( ((int (__usercall *)@<eax>(double@<st0>, double@<st1>))GetCurrentThreadId)(result, st6_0) == mainThreadID )
    LOBYTE(v9) = *((_BYTE *)v8 + 0x18);
  else
    v9 = (unsigned int)v8[6] >> 0x12;
  refID = 0;
  if ( (v9 & 1) != 0 )
  {
    v8[6] = (_DWORD *)((unsigned int)v8[6] | 2);
    if ( a7 )
      ioManager->members.unk38 = 5;
    v11 = a5;
    v46 = 1;
    if ( !a5 )
    {
      v11 = v8[7];
      a5 = v11;
      v46 = 0;
    }
    v12 = a6;
    if ( a6 )
      ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.super.Unk_16)(
        TESDataHandler_g_PlayerRef,
        *(_DWORD *)(a6 + 4),
        *(_DWORD *)(a6 + 8));
    a2 = 0.0;
    v51 = 0.0;
    if ( v11 )
    {
      v49 = (_DWORD **)v11[3];
      v13 = (unsigned int)v49;
      if ( v49 )
      {
        do
        {
          v14 = *(void ***)(v11[1] + 4 * refID);
          if ( v14 )
          {
            if ( *v14 != TESDataHandler_g_PlayerRef )
            {
              v15 = *((_BYTE *)v14 + 0xC);
              if ( v15 < 0x13u )
                PrintError(
                  "Savegame loading error: Attempting to set the current version to %i.  The oldest compatible version is"
                  " %i.  Errors may occur.",
                  v15,
                  0x13);
              *((_BYTE *)v8 + 0x7C) = v15;
              (*(void (__thiscall **)(void *, void *, void *))(*(_DWORD *)*v14 + 0x58))(*v14, v14[1], v14[2]);
              if ( v46 )
              {
                v16 = (TESObjectREFR *)OblivionDynamicCast(
                                         *v14,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &Actor `RTTI Type Descriptor',
                                         0);
                v17 = v16;
                if ( v16 )
                {
                  if ( !TESObjectREFR_GetParentCell(v16) && !TESObjectREFR_GetWorldSpace(v17) )
                    BSSimpleList_PushFront(&a2, (int)v17);
                }
              }
              v13 = (unsigned int)v49;
              v11 = a5;
              *((_BYTE *)v8 + 0x7C) = *((_BYTE *)v8 + 0x71);
            }
          }
          ++refID;
        }
        while ( refID < v13 );
        v12 = a6;
      }
    }
    if ( v46 )
    {
      p_a2 = (int *)&a2;
      do
      {
        if ( !p_a2[1] && !*p_a2 )
          break;
        v18 = (TESObjectREFR *)*p_a2;
        sub_5ED860(*p_a2, *(float *)&v11, refID, (int)v8, st5_0, st6_0);
        v11 = *this;
        refID = v18->member.super.refID;
        if ( NiTMap_GetAt(*this, refID, &v49) )
        {
          v8 = v49;
        }
        else
        {
          v19 = (_DWORD *)FormHeapAlloc(8u);
          if ( v19 )
          {
            v8 = (_DWORD **)v19;
            *v19 = 0;
            v19[1] = 0;
            v49 = (_DWORD **)v19;
            NiTMap_SetAt(v11, refID, (int)v19);
          }
          else
          {
            v8 = 0;
            v49 = 0;
            NiTMap_SetAt(v11, refID, 0);
          }
        }
        if ( !v8[1] )
          *v8 = (_DWORD *)((unsigned int)*v8 | 4);
        if ( !TESObjectREFR_GetParentCell(v18) && !TESObjectREFR_GetWorldSpace(v18) )
        {
          v20 = strtol(Str, 0, 0x10);
          v21 = TESForm_LookupByFormID(v20);
          v8 = (_DWORD **)OblivionDynamicCast(
                            v21,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESObjectCELL `RTTI Type Descriptor',
                            0);
          if ( v8 )
          {
            v22 = *(&Vector3_InitValue_ + 1);
            v23 = dword_B3F9B0;
            a3[0] = Vector3_InitValue_;
            a4[0] = a3[0];
            a3[1] = v22;
            a4[1] = v22;
            v54 = v23;
            *(float *)&v56 = v23;
            sub_4D5D70((TESObjectCELL *)v8, a3, a4);
            TESObjectREFR_SetPosition(v18, a3[0], a3[1], v54);
            sub_4D89A0((int *)v18, SLODWORD(a4[0]), SLODWORD(a4[1]), v56);
            sub_4DD4B0((int)v11, st5_0, st6_0, result, (Actor *)v18, (TESObjectCELL *)v8, 0);
          }
          else
          {
            TESForm_SetEnabled_((TESForm *)v18, 1);
          }
        }
        p_a2 = (int *)p_a2[1];
      }
      while ( p_a2 );
      v24 = LODWORD(v51);
      if ( v51 != 0.0 )
      {
        do
        {
          v25 = *(_DWORD *)(v24 + 4);
          FormHeapFree(v24);
          v24 = v25;
        }
        while ( v25 );
      }
      sub_677240((int *)&ActorProcessManager_ptr);
      sub_67C230(&dword_B3BDB0);
      v11 = a5;
      v12 = a6;
    }
    if ( a7 )
    {
      currentInteriorCell = TES->currentInteriorCell;
      if ( currentInteriorCell )
      {
        if ( TESObjectCELL_IsInterior(TES->currentInteriorCell) )
          v27 = sub_424180(&currentInteriorCell->members.extraData);
        else
          v27 = (BSExtraDataVtbl *)bhkWorldM;
        if ( v27 )
          sub_889E00(v27);
      }
      else
      {
        v27 = 0;
      }
      if ( bhkWorldM )
        sub_889E00((_DWORD *)bhkWorldM);
      sub_4416F0(TES, st5_0, st6_0, result);
      if ( !PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0) )
        sub_438060(
          (_DWORD **)ModelLoaderPtr,
          refID,
          st5_0,
          st6_0,
          result,
          (TESObjectREFR *)TESDataHandler_g_PlayerRef,
          0);
      sub_434020(ioManager, st5_0, st6_0, result, 5);
      ioManager->members.unk38 = 5;
      if ( v27 )
        st6_0 = sub_88D1D0(0);
      if ( bhkWorldM )
        st6_0 = sub_88D1D0(0);
      if ( !TES->currentInteriorCell )
      {
        sub_482310((int)TES->gridCellArray, *(float *)&refID);
        v28 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
        a2 = *v28;
        v51 = v28[1];
        v29 = *((_DWORD *)v28 + 2);
        a4[0] = a2;
        a4[1] = v51;
        v30 = TES;
        *(float *)&v56 = 0.0;
        v52 = v29;
        GetTerrainHeight(v30, &a2, (float *)&v56);
        v44 = *(float *)&dword_B258DC;
        v45 = qword_B258E0;
        v42 = LODWORD(a4[0]);
        v31 = v56;
        v43 = LODWORD(a4[1]);
        byte_B2CBC0 = 0;
        DrawGrassPass_(v42, v43, v31, v44, v45, SHIDWORD(v45), 1.0);
        result = sub_4EA6E0(LODWORD(a2), LODWORD(v51), v52, 0);
        byte_B2CBC0 = 1;
      }
      v12 = a6;
    }
    if ( v12 )
    {
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
        sub_6637C0(TESDataHandler_g_PlayerRef);
      ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.super.Unk_17)(
        TESDataHandler_g_PlayerRef,
        *(_DWORD *)(v12 + 4),
        *(_DWORD *)(v12 + 8));
    }
    if ( v11 )
    {
      v32 = a5[3];
      for ( i = 0; i < v32; ++i )
      {
        v34 = *(_DWORD **)(a5[1] + 4 * i);
        if ( v34 )
        {
          v35 = *((_BYTE *)v34 + 0xC);
          if ( v35 < 0x13u )
            PrintError(
              "Savegame loading error: Attempting to set the current version to %i.  The oldest compatible version is %i."
              "  Errors may occur.",
              v35,
              0x13);
          *((_BYTE *)this + 0x7C) = v35;
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*v34 + 0x5C))(*v34, v34[1], v34[2]);
          *((_BYTE *)this + 0x7C) = *((_BYTE *)this + 0x71);
          FormHeapFree((unsigned int)v34);
        }
      }
    }
    v36 = this;
    v37 = *(this + 7);
    if ( v37 )
    {
      for ( j = 0; j < v37[3]; ++j )
        *(_DWORD *)(v37[1] + 4 * j) = 0;
      v37[3] = 0;
      v37[4] = 0;
      v39 = (void (__thiscall ***)(_DWORD, int))*(this + 7);
      if ( v39 )
      {
        (**v39)(v39, 1);
        v36 = this;
      }
      v36[7] = 0;
    }
    if ( a7 )
    {
      v40 = TES->currentInteriorCell;
      if ( v40 )
      {
        if ( TESObjectCELL_IsInterior(TES->currentInteriorCell) )
          v41 = sub_424180(&v40->members.extraData);
        else
          v41 = (BSExtraDataVtbl *)bhkWorldM;
        if ( v41 )
          sub_889E00(v41);
      }
      else
      {
        v41 = 0;
      }
      if ( bhkWorldM )
        sub_889E00((_DWORD *)bhkWorldM);
      sub_434020(ioManager, st5_0, st6_0, result, 5);
      if ( v41 )
        sub_88D1D0(0);
      if ( bhkWorldM )
        sub_88D1D0(0);
    }
    *(this + 6) = (_DWORD *)((unsigned int)*(this + 6) & 0xFFFFFFFD);
  }
  return result;
}
