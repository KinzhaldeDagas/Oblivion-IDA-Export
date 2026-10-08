char __userpurge sub_630D40@<al>(
        float *a1@<ecx>,
        double a2@<st0>,
        double a3@<st1>,
        double a4@<st2>,
        TESForm *a5,
        int a6,
        char a7)
{
  int v8; // eax
  TESPackage *v9; // ebp
  int v10; // ecx
  int v12; // edx
  char *location; // ecx
  char v14; // al
  void *v15; // eax
  char v16; // al
  Actor *v17; // eax
  int v18; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  double v20; // st7
  TESObjectREFR *v21; // eax
  PlayerCharacter *v22; // eax
  int v23; // ebp
  int v24; // ebx
  UInt32 v25; // eax
  int v26; // eax
  TESWorldSpace *WorldSpace; // [esp+4h] [ebp-1Ch]
  int v28; // [esp+2Ch] [ebp+Ch]
  float v29; // [esp+2Ch] [ebp+Ch]

  v8 = (*(int (__usercall **)@<eax>(float *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x184))(a1, a2, a3); /*0x630d4c*/
  v9 = (TESPackage *)v8; /*0x630d4e*/
  if ( !v8 ) /*0x630d52*/
    return 0; /*0x630d52*/
  if ( (*(_BYTE *)(v8 + 0x1E) & 1) != 0 ) /*0x630d61*/
  {
    if ( sub_663A60((int)a5) || sub_663A00() >= (int)stru_B36A80.value ) /*0x630d88*/
      return 0; /*0x630d88*/
    sub_5668E0(v9, 0); /*0x630d92*/
  }
  if ( !*((_DWORD *)a1 + 0xB) ) /*0x630d97*/
    (*(void (__thiscall **)(float *, TESForm *))(*(_DWORD *)a1 + 0x558))(a1, a5); /*0x630da8*/
  v10 = *((_DWORD *)a1 + 0xB); /*0x630daa*/
  if ( !v10 ) /*0x630daf*/
  {
    if ( a7 ) /*0x630db5*/
    {
      (*(void (__thiscall **)(float *, TESForm *, int))(*(_DWORD *)a1 + 0x188))(a1, a5, 1); /*0x630dc8*/
      return 0; /*0x630dcf*/
    }
    return 0; /*0x630db5*/
  }
  v12 = *(_DWORD *)(v10 + 8); /*0x630dd2*/
  if ( (v12 & 0x20) != 0 || (v12 & 0x800) != 0 ) /*0x630de8*/
  {
    if ( (*(_DWORD *)(v10 + 8) & 0x20) != 0 ) /*0x631024*/
      sub_566870((TargetData **)v9, (TESForm *)v10, 1); /*0x63102b*/
    if ( a7 ) /*0x631035*/
      (*(void (__thiscall **)(float *, TESForm *, int))(*(_DWORD *)a1 + 0x188))(a1, a5, 1); /*0x631044*/
    return 0; /*0x631044*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x198))(v10, 1) ) /*0x630df8*/
  {
    sub_566870((TargetData **)v9, *((TESForm **)a1 + 0xB), 1); /*0x630e06*/
    ((void (__thiscall *)(TESForm *, _DWORD))a5->vtbl[3].Unk_19)(a5, *((_DWORD *)a1 + 0xB)); /*0x630e19*/
    return 0; /*0x630e20*/
  }
  if ( !*((_DWORD *)a1 + 0xB) /*0x630e58*/
    || (location = (char *)v9->members.location) != 0
    && sub_569740(location) < 2
    && (a2 = sub_566DC0(v9, kTerrainLODQuadRayDirectionZ, a3, a4, (Actor *)a5, 0, kTerrainLODQuadRayDirectionZ), v14) )
  {
    if ( a7 ) /*0x630e63*/
      (*(void (__thiscall **)(float *, TESForm *, int))(*(_DWORD *)a1 + 0x188))(a1, a5, 1); /*0x630e72*/
    if ( TESPackage_IsRuntimePackage(v9) ) /*0x630e76*/
    {
      v9->__vftable->super.Destroy((TESForm *)v9, 1); /*0x630e8d*/
      a1[2] = 0.0; /*0x630e8f*/
      a5->vtbl->ClearModified(a5, 0x30000); /*0x630ea2*/
      (*(void (__thiscall **)(float *, TESForm *, _DWORD))(*(_DWORD *)a1 + 0x18))(a1, a5, 0); /*0x630eae*/
      if ( ((int (__thiscall *)(TESForm *))a5->vtbl[4].Destroy)(a5) /*0x630ed0*/
        && (*(_DWORD *)(*((_DWORD *)a1 + 2) + 0x1C) & 0x800000) == 0 )
      {
        v15 = (void *)((int (__thiscall *)(TESForm *))a5->vtbl[4].Destroy)(a5); /*0x630ee0*/
        sub_5E9A60(v15, a2); /*0x630ee4*/
        if ( !v16 ) /*0x630eeb*/
        {
          a1[0x6A] = 0.0; /*0x630ef1*/
          v17 = (Actor *)((int (__thiscall *)(TESForm *))a5->vtbl[4].Destroy)(a5); /*0x630eff*/
          sub_5F80D0(v17); /*0x630f03*/
        }
        a5->vtbl[2].Unk_1E(a5); /*0x630f12*/
        return 0; /*0x630f19*/
      }
      return 0; /*0x631048*/
    }
  }
  if ( TESPackage_IsRuntimePackage(v9) ) /*0x630f1e*/
  {
    v18 = *((_DWORD *)a1 + 2); /*0x630f27*/
    if ( v18 ) /*0x630f2c*/
    {
      if ( (*(_DWORD *)(v18 + 0x1C) & 0x200) != 0 && (*(_BYTE *)(v18 + 0x1C) & 1) != 0 ) /*0x630f3d*/
      {
        if ( Shared_GetDwordAtOffset40(a5) ) /*0x630f41*/
        {
          DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x630f4d*/
          if ( TESObjectCELL_IsOwnedByActor(DwordAtOffset40, (Actor *)a5) ) /*0x630f54*/
          {
            if ( Actor_LineOfSight((Actor *)a5, a2, 0, *((TESObjectREFR **)a1 + 0xB), 1, 0, 0) ) /*0x630f6b*/
            {
              (*(void (__thiscall **)(float *, TESForm *))(*(_DWORD *)a1 + 0x194))(a1, a5); /*0x630f7f*/
              return 0; /*0x630f86*/
            }
          }
        }
      }
    }
  }
  v20 = sub_5677B0(v9, a2, (TESObjectREFR *)a5, 2); /*0x630f8e*/
  v28 = Double_To_SInt32(v20); /*0x630f98*/
  v21 = *((TESObjectREFR **)a1 + 0xB); /*0x630f9c*/
  if ( !v21 ) /*0x630fa1*/
    return 0; /*0x630fa1*/
  v29 = (float)v28; /*0x630fb0*/
  if ( v29 >= TesObjectREF_GetDistance((TESObjectREFR *)a5, v21, 0) ) /*0x630fc6*/
    return 0; /*0x630fc6*/
  v22 = *((PlayerCharacter **)a1 + 0xB); /*0x630fc8*/
  if ( v22 == reference ) /*0x630fd1*/
    return 0; /*0x63101c*/
  v23 = *(_DWORD *)a1; /*0x630fd3*/
  v24 = *((_DWORD *)a1 + 0xB); /*0x630fdd*/
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v22); /*0x630ff0*/
  v25 = Shared_GetDwordAtOffset40(*((void **)a1 + 0xB)); /*0x630ff1*/
  v26 = (*(int (__thiscall **)(int, UInt32, TESWorldSpace *, int, float))(*(_DWORD *)v24 + 0x174))( /*0x631001*/
          v24,
          v25,
          WorldSpace,
          a6,
          COERCE_FLOAT(LODWORD(v29)));
  (*(void (__thiscall **)(float *, TESForm *, int))(v23 + 0x418))(a1, a5, v26); /*0x63100d*/
  return 0; /*0x630dcb*/
}
