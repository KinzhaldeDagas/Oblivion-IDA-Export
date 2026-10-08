// RadiantAI: package refresh/reselection bridge. If no current package, calls 0x648E40 to choose one; validates procedure row, checks duration/package flags, can end/reset packages, then calls 0x648E40 again for reselection.
bool __userpurge sub_649340@<al>(
        float *a1@<ecx>,
        int a2@<ebx>,
        double st6_0@<st1>,
        double a4@<st0>,
        TESChildCELL *arg0,
        char a6)
{
  double GameHour; // st5
  int v8; // ebp
  _BYTE *v11; // ecx
  TESChildCELL *v12; // ebx
  void (__thiscall *v13)(float *, _DWORD); // edx
  int v14; // ecx
  double GameDay; // st7
  char v16; // al
  char v17; // al
  int v18; // ebx
  char v19; // al
  char v20; // al
  int v21; // eax
  UInt32 v22; // ebx
  TESObjectCELL *DwordAtOffset40; // eax
  _BYTE *v24; // ecx
  TESObjectCELL *v25; // eax
  int v26; // eax
  int v27; // ecx
  double v28; // st7
  char v29; // al
  TESWorldSpace *WorldSpace; // eax
  int (__thiscall *v31)(float *); // eax
  int v32; // eax
  int *i; // esi
  int v34; // edi
  float *v35; // [esp+0h] [ebp-30h]
  float *v36; // [esp+0h] [ebp-30h]
  float a3; // [esp+4h] [ebp-2Ch]
  float a3a; // [esp+4h] [ebp-2Ch]
  float *v39; // [esp+8h] [ebp-28h]
  float *v40; // [esp+8h] [ebp-28h]
  float a5; // [esp+Ch] [ebp-24h]
  float a5a; // [esp+Ch] [ebp-24h]
  unsigned __int8 (__cdecl *v43)(TESObjectREFR *, int); // [esp+10h] [ebp-20h]
  unsigned __int8 (__cdecl *v44)(TESObjectREFR *, int); // [esp+10h] [ebp-20h]
  TESChildCELL *v45; // [esp+14h] [ebp-1Ch]
  TESChildCELL *v46; // [esp+14h] [ebp-1Ch]
  BSExtraDataVtbl *v47; // [esp+14h] [ebp-1Ch]
  int v48; // [esp+18h] [ebp-18h]
  _DWORD *v49; // [esp+18h] [ebp-18h]
  float v50; // [esp+1Ch] [ebp-14h]
  float v51; // [esp+28h] [ebp-8h]
  bool v52; // [esp+34h] [ebp+4h]

  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x64934d*/
  v51 = a4; /*0x649352*/
  v8 = *((_DWORD *)a1 + 2); /*0x64935b*/
  if ( !a6 /*0x64937b*/
    && (sub_5E6BA0((Actor *)arg0)
     || (*((unsigned __int8 (__thiscall **)(TESChildCELL *, int))arg0->vtbl + 0xCD))(arg0, 1)) )
  {
    return 0; /*0x649389*/
  }
  v11 = *((_BYTE **)a1 + 2); /*0x64938c*/
  v48 = a2; /*0x64938f*/
  v12 = 0; /*0x649390*/
  if ( v11 ) /*0x649394*/
  {
    if ( !sub_565DB0(v11) ) /*0x649396*/
      sub_565DC0(*((_BYTE **)a1 + 2)); /*0x6493a2*/
  }
  v52 = 0; /*0x6493a9*/
  if ( !v8 ) /*0x6493ad*/
  {
    sub_648E40((int)a1, st6_0, a4, arg0); /*0x6493b7*/
    v8 = *((_DWORD *)a1 + 2); /*0x6493bc*/
    v52 = v8 != 0; /*0x6493c3*/
    v13 = *(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x394); /*0x6493cd*/
    a1[3] = v51; /*0x6493d3*/
    a1[1] = 0.0; /*0x6493d9*/
    a1[0xB] = 0.0; /*0x6493dc*/
    v13(a1, 0); /*0x6493df*/
    goto LABEL_10; /*0x6493df*/
  }
  if ( *(_DWORD *)(v8 + 0x18) == 0xFFFFFFFF ) /*0x64941b*/
    sub_5672A0((TESPackage *)v8); /*0x64941f*/
  v14 = *(_DWORD *)(v8 + 0x30); /*0x649424*/
  GameDay = v51; /*0x649427*/
  if ( !v14 || (*(_DWORD *)(v8 + 0x1C) & 4) == 0 ) /*0x64943b*/
  {
    if ( (*(_DWORD *)(v8 + 0x1C) & 4) != 0 ) /*0x649516*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(4 * *(_DWORD *)(v8 + 0x18) + 0xB152B0) + 4 * *((_DWORD *)a1 + 1)) != 0x2C ) /*0x649529*/
        return 0; /*0x649532*/
    }
    else if ( (*(_DWORD *)(v8 + 0x1C) & 2) != 0 ) /*0x649548*/
    {
      GameDay = sub_566DC0( /*0x649558*/
                  (TESPackage *)v8,
                  kTerrainLODQuadRayDirectionZ,
                  st6_0,
                  GameHour,
                  (Actor *)arg0,
                  0,
                  kTerrainLODQuadRayDirectionZ);
      if ( !v20 && *(_DWORD *)(*(_DWORD *)(4 * *(_DWORD *)(v8 + 0x18) + 0xB152B0) + 4 * *((_DWORD *)a1 + 1)) != 0x2C ) /*0x649572*/
        return v52; /*0x649572*/
      v52 = 1; /*0x649574*/
      goto LABEL_50; /*0x649579*/
    }
    v52 = 1; /*0x64952b*/
    goto LABEL_50; /*0x649530*/
  }
  v16 = *(_BYTE *)(v8 + 0x20); /*0x649441*/
  if ( v16 != 5 /*0x649464*/
    && v16 != 4
    && v16 != 3
    && *(_DWORD *)(*(_DWORD *)(4 * *(_DWORD *)(*((_DWORD *)a1 + 2) + 0x18) + 0xB152B0) + 4 * *((_DWORD *)a1 + 1)) != 0x2C )
  {
    goto LABEL_93; /*0x649464*/
  }
  v17 = *(_BYTE *)(v8 + 0x2F); /*0x64946a*/
  if ( v17 == (char)0xFF ) /*0x64946f*/
  {
    st6_0 = a1[3]; /*0x649471*/
    v18 = *(_DWORD *)(v8 + 0x30) + Double_To_SInt32(GameDay); /*0x64947b*/
  }
  else
  {
    v18 = v14 + v17; /*0x649483*/
  }
  if ( v18 <= 0x17 ) /*0x649488*/
  {
    st6_0 = (double)*(char *)(v8 + 0x2F); /*0x649497*/
    if ( st6_0 > GameDay ) /*0x6494a2*/
      v52 = 1; /*0x6494a4*/
  }
  else
  {
    v18 -= 0x17; /*0x64948a*/
  }
  if ( Double_To_SInt32(GameDay) < v18 ) /*0x6494b0*/
  {
    if ( !v52 ) /*0x6494be*/
    {
      if ( a6 ) /*0x6494c5*/
        a6 = 0; /*0x6494c7*/
    }
  }
  else
  {
    v52 = 1; /*0x6494b2*/
  }
  v12 = arg0 + 0x11; /*0x6494d1*/
  GameDay = Script_AddEventToExtraScript(v8, &arg0[0x11], 0x400); /*0x6494d6*/
  if ( sub_565DF0((_DWORD *)v8) ) /*0x6494e0*/
  {
    GameDay = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x6494ee*/
    ExtraDataList_SetRunOnceExtraPackage((ExtraDataList *)&arg0[0x11], v8, v19); /*0x6494f7*/
  }
  if ( !v52 ) /*0x649501*/
  {
LABEL_93:
    if ( !a6 || sub_5660B0((_DWORD *)v8) ) /*0x649586*/
      return v52; /*0x64958d*/
  }
LABEL_50:
  if ( TESPackage_IsRuntimePackage((TESPackage *)v8) ) /*0x649591*/
  {
    sub_5EAE70((Actor *)arg0, (int)v12, (int)arg0, v48); /*0x64959c*/
    v21 = *((_DWORD *)a1 + 2); /*0x6495a1*/
    if ( v21 ) /*0x6495a6*/
    {
      if ( v8 == v21 ) /*0x6495aa*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x10))(v8, 1); /*0x6495b6*/
    }
    v8 = 0; /*0x6495b8*/
  }
  sub_648E40((int)a1, st6_0, GameDay, arg0); /*0x6495bd*/
  if ( !v8 || v8 == *((_DWORD *)a1 + 2) ) /*0x6495c9*/
    return 0; /*0x649628*/
  if ( (*(_DWORD *)(v8 + 0x1C) & 0x200) == 0 /*0x6495eb*/
    || (v22 = Shared_GetDwordAtOffset40(reference), v22 != Shared_GetDwordAtOffset40(arg0)) )
  {
    a1[3] = v51; /*0x649616*/
    a1[1] = 0.0; /*0x649619*/
LABEL_10:
    if ( v52 ) /*0x6493e6*/
    {
      if ( v8 && *((_DWORD *)a1 + 2) != v8 ) /*0x6493f7*/
      {
        if ( sub_565DB0((_BYTE *)v8) ) /*0x6493ff*/
        {
          v45 = arg0; /*0x64940c*/
          v43 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor; /*0x64940d*/
LABEL_66:
          a5 = flt_A5B6C0; /*0x649645*/
          v39 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0); /*0x649663*/
          a3 = flt_A5B6C0; /*0x64966d*/
          v35 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0); /*0x649672*/
          DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg0); /*0x649675*/
          sub_446B90(DwordAtOffset40, v35, a3, v39, a5, v43, (int)v45); /*0x649681*/
          goto LABEL_67; /*0x649681*/
        }
        if ( sub_565DC0((_BYTE *)v8) ) /*0x649636*/
        {
          v45 = arg0; /*0x64963f*/
          v43 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_ClearOwnedDoorLockForActor; /*0x649640*/
          goto LABEL_66; /*0x649640*/
        }
      }
LABEL_67:
      v24 = *((_BYTE **)a1 + 2); /*0x649686*/
      if ( !v24 || v24 == (_BYTE *)v8 ) /*0x64968f*/
        goto LABEL_74; /*0x64968f*/
      if ( sub_4BF150(v24) ) /*0x649691*/
      {
        v46 = arg0; /*0x64969a*/
        v44 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor; /*0x64969b*/
      }
      else
      {
        if ( !sub_565DA0(*((TESPackage **)a1 + 2)) ) /*0x6496ac*/
        {
LABEL_74:
          v26 = *((_DWORD *)a1 + 2); /*0x6496f5*/
          if ( v26 ) /*0x6496fa*/
          {
            if ( v8 != v26 || !sub_5EAE10((TESObjectREFR *)arg0) ) /*0x649702*/
            {
              if ( sub_567CA0(*((TargetData ***)a1 + 2)) ) /*0x64970e*/
              {
                v27 = *((_DWORD *)a1 + 2); /*0x649717*/
                if ( *(_BYTE *)(v27 + 0x20) ) /*0x64971a*/
                  sub_568BB0(v27, (TESObjectREFR *)arg0); /*0x649721*/
              }
            }
          }
          v28 = sub_566DC0( /*0x649735*/
                  (TESPackage *)*((_DWORD *)a1 + 2),
                  kTerrainLODQuadRayDirectionZ,
                  st6_0,
                  GameHour,
                  (Actor *)arg0,
                  0,
                  kTerrainLODQuadRayDirectionZ);
          if ( v29 ) /*0x64973c*/
            sub_5E6E00((Actor *)arg0, (int)arg0, st6_0, v28); /*0x649740*/
          *((_BYTE *)a1 + 0x84) = 0; /*0x649745*/
          v49 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *, _DWORD, int))arg0->vtbl + 0x5D))( /*0x64975f*/
                            arg0,
                            *(float *)&arg0[0xA].vtbl,
                            v48);
          v47 = (BSExtraDataVtbl *)Shared_GetDwordAtOffset40(arg0); /*0x649767*/
          WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)arg0); /*0x64976a*/
          TESObjectREFR_SetStartLocation(arg0, (BSExtraDataVtbl *)WorldSpace, v47, v49, v50); /*0x649772*/
          (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x38C))(a1, 0); /*0x649782*/
          v31 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x174); /*0x649786*/
          a1[0xB] = 0.0; /*0x64978e*/
          v32 = v31(a1); /*0x649791*/
          if ( v32 ) /*0x649795*/
          {
            if ( *(_BYTE *)(v32 + 0x20) != 0x15 ) /*0x64979b*/
              (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x178))(a1, 0); /*0x6497a8*/
          }
          (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0xBC))(a1, 0); /*0x6497b5*/
          (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x394))(a1, 0); /*0x6497c2*/
          for ( i = (int *)(a1 + 0xF); i[1] || *i; BSSimpleList_Remove(i, v34) ) /*0x6497c4*/
          {
            v34 = *i; /*0x6497d4*/
            if ( *i ) /*0x6497d4*/
              FormHeapFree(*i); /*0x6497db*/
          }
          return v52; /*0x6497ce*/
        }
        v46 = arg0; /*0x6496ae*/
        v44 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_ClearOwnedDoorLockForActor; /*0x6496af*/
      }
      a5a = flt_A5B6C0; /*0x6496c5*/
      v40 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0); /*0x6496d2*/
      a3a = flt_A5B6C0; /*0x6496dc*/
      v36 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0); /*0x6496e1*/
      v25 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg0); /*0x6496e4*/
      sub_446B90(v25, v36, a3a, v40, a5a, v44, (int)v46); /*0x6496f0*/
      goto LABEL_74; /*0x6496f0*/
    }
    return v52; /*0x649541*/
  }
  if ( *((_DWORD *)a1 + 1) ) /*0x6495ed*/
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x38C))(a1, 1); /*0x6495ff*/
  *((_DWORD *)a1 + 2) = v8; /*0x649603*/
  return 0; /*0x649381*/
}
