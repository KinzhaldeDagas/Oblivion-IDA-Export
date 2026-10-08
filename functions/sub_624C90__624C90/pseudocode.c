void __userpurge sub_624C90(
        int a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double Distance@<st0>,
        TESObjectREFR *a6,
        int a7)
{
  Actor *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  bool v13; // sf
  bool v14; // bl
  BSExtraDataVtbl *Owner; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  signed int v21; // eax
  int v22; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  char v24; // bl
  int v25; // eax
  int v26; // eax
  char v27; // al
  _DWORD *v28; // eax
  Actor **v29; // eax
  int v30; // eax
  signed int v31; // eax
  float v32; // [esp+4h] [ebp-24h]
  float v33; // [esp+4h] [ebp-24h]
  int v34; // [esp+Ch] [ebp-1Ch]

  if ( !*(_BYTE *)(a1 + 0x59) ) /*0x624c95*/
  {
    CombatController_InitializeCombatState((void **)a1, Distance); /*0x624c9c*/
    *(_BYTE *)(a1 + 0x59) = 1; /*0x624ca1*/
  }
  if ( a6 != (TESObjectREFR *)CombatController_GetCurrentTarget(a1) ) /*0x624cb2*/
  {
    v8 = *(Actor **)(a1 + 0x3C); /*0x624cb8*/
    if ( a6 != (TESObjectREFR *)v8 ) /*0x624cbd*/
    {
      if ( sub_613670((_DWORD *)a1, (int)a6) ) /*0x624cc6*/
      {
        LOBYTE(v17) = CombatController_CanReachCurrentTarget(a1) == 0; /*0x624d99*/
        sub_619D40(a1, a2, a6, v17, 1); /*0x624da0*/
        goto LABEL_16; /*0x624da0*/
      }
      LOBYTE(v9) = Actor_IsCreature(v8); /*0x624cd9*/
      v34 = v9; /*0x624ce0*/
      Distance = TesObjectREF_GetDistance((TESObjectREFR *)v8, a6, 0); /*0x624ce6*/
      v32 = Distance; /*0x624cf4*/
      v33 = COERCE_FLOAT(((int (__thiscall *)(Actor *, int, _DWORD))v8->vtbl->GetActorValue)(v8, 0x21, LODWORD(v32))); /*0x624cfd*/
      v10 = ((int (__thiscall *)(Actor *))v8->vtbl->GetDisposition)(v8); /*0x624d0b*/
      shouldActorFight(v10, (int)a6, 0x64, v33, 1, v34, 0, 0x64); /*0x624d0e*/
      v12 = v11 == 0; /*0x624d16*/
      v13 = v11 < 0; /*0x624d16*/
      if ( v11 < 0 ) /*0x624d18*/
      {
        v12 = 1; /*0x624d1c*/
        v13 = 0; /*0x624d1c*/
      }
      v14 = !v13 && !v12; /*0x624d21*/
      if ( Actor_IsCreature(*(Actor **)(a1 + 0x3C)) && Actor_IsCreature((Actor *)a6) ) /*0x624d2f*/
      {
        if ( !TESObjectREFR_GetOwner(a6) ) /*0x624d3a*/
          goto LABEL_16; /*0x624d3a*/
        Owner = TESObjectREFR_GetOwner(*(TESObjectREFR **)(a1 + 0x3C)); /*0x624d4d*/
        if ( TESObjectREFR_GetOwner(a6) == Owner ) /*0x624d56*/
          goto LABEL_16; /*0x624d56*/
      }
      else if ( !v14 ) /*0x624d5c*/
      {
        goto LABEL_16; /*0x624d5c*/
      }
      a4 = ((double (__usercall *)@<st0>(TESObjectREFRVtbl *@<ecx>, TESObjectREFR *, _DWORD, double@<st0>, double@<st1>))*((_DWORD *)a6[1].vtbl->super.super.InitializeComponent + 0x5C))( /*0x624d6e*/
             a6[1].vtbl,
             a6,
             *(_DWORD *)(a1 + 0x3C),
             Distance,
             a4);
      v16 = Double_To_SInt32(Distance); /*0x624d70*/
      Distance = 0.0; /*0x624d75*/
      CombatController_TryAddTarget(a1, (int)a6, a3, 0.0, (Actor *)a6, v16, 0.0, 0.0, 0.0); /*0x624d87*/
    }
  }
LABEL_16:
  if ( a7 ) /*0x624dab*/
    BaseProcess_GetCounterEffects_((char ****)a1, a7); /*0x624db0*/
  if ( !*(_DWORD *)(a1 + 0x88) ) /*0x624db5*/
    sub_613880(a1, (char)a6, a7, a3); /*0x624dc0*/
  v18 = *(_DWORD *)(a1 + 0x6C); /*0x624dc5*/
  if ( v18 == 8 ) /*0x624dcb*/
  {
    if ( (char)++*(_BYTE *)(a1 + 0x4F) <= SLODWORD(g_GameSettingStringPointers_B36CD8[0x1C]) ) /*0x624ddf*/
      return; /*0x624ddf*/
    v19 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58); /*0x624de8*/
    *(_BYTE *)(a1 + 0x4D) = 1; /*0x624deb*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x174))(v19) ) /*0x624df9*/
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x174))(v19) + 0x20) != 0xC ) /*0x624e0f*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 0x178))(v19, 0); /*0x624e1d*/
    }
LABEL_25:
    v20 = *(_DWORD *)(a1 + 0x70); /*0x624e1f*/
    if ( v20 != 2 && v20 != 4 /*0x624e39*/
      || a6 != (TESObjectREFR *)CombatController_GetCurrentTarget(a1)
      || CombatController_CanReachCurrentTarget(a1) )
    {
      v21 = sub_6239D0(a1, a3, a4, Distance, 0, 0); /*0x624e4c*/
      CombatController_SetCombatMode(a1, v21); /*0x624e54*/
      sub_619920(a1, 0); /*0x624e5d*/
    }
    return; /*0x624e66*/
  }
  v22 = *(_DWORD *)(a1 + 0x70); /*0x624e69*/
  if ( v22 != 6 && v22 != 5 ) /*0x624e78*/
  {
    if ( (v18 == 0xE || v18 == 0x10) && v22 == 8 ) /*0x624e8b*/
    {
      vtbl = a6[1].vtbl; /*0x624e8d*/
      v24 = 1; /*0x624e92*/
      if ( vtbl /*0x624ea4*/
        && (v25 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x3B))(
                    vtbl,
                    1)) != 0 )
      {
        v26 = *(_DWORD *)(v25 + 8); /*0x624ea6*/
      }
      else
      {
        v26 = 0; /*0x624eab*/
      }
      if ( v26 ) /*0x624eaf*/
      {
        v27 = *(_BYTE *)(v26 + 0x90); /*0x624eb1*/
        if ( v27 == 4 || v27 == 5 ) /*0x624ebd*/
          v24 = 0; /*0x624ebf*/
      }
      if ( (!a7 || *(_DWORD *)(*(_DWORD *)(a7 + 0xC) + 0x10) == 1) /*0x624ee5*/
        && v24
        && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x330))(*(_DWORD *)(a1 + 0x3C)) )
      {
        v28 = (_DWORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x330))( /*0x624efc*/
                          *(_DWORD *)(a1 + 0x3C),
                          Distance,
                          a4,
                          a3);
        sub_612DA0(v28, 9); /*0x624f00*/
        v29 = (Actor **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x330))(*(_DWORD *)(a1 + 0x3C)); /*0x624f10*/
        sub_6160B0(v29); /*0x624f14*/
        v30 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x330))(*(_DWORD *)(a1 + 0x3C)); /*0x624f26*/
        sub_619920(v30, 0); /*0x624f2a*/
        return; /*0x624f33*/
      }
    }
    goto LABEL_25; /*0x624ee9*/
  }
  (*(void (__stdcall **)(TESObjectREFR *, float))(**(_DWORD **)(a1 + 0x3C) + 0x374))( /*0x624f4c*/
    a6,
    g_GameSettingStringPointers_B36CD8[0x27A]);
  if ( *(_DWORD *)(a1 + 0x70) == 6 && *(char *)(a1 + 0x4E) > SLODWORD(g_GameSettingStringPointers_B36CD8[0x28]) ) /*0x624f5e*/
  {
    v31 = sub_6239D0(a1, a3, a4, Distance, 0, 0); /*0x624f66*/
    if ( v31 != 5 ) /*0x624f6e*/
    {
      CombatController_SetCombatMode(a1, v31); /*0x624f73*/
      sub_619920(a1, 0); /*0x624f7c*/
    }
    *(_BYTE *)(a1 + 0x4E) = 0; /*0x624f81*/
  }
}
