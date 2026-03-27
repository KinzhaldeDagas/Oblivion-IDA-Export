void sub_5C7800()
{
  _DWORD *OpenMenuTile; // eax
  TESNPC *v1; // esi
  TESRace *race; // edi
  char *v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st7
  double v8; // st6
  char *v9; // eax
  int *v10; // ecx
  int v11; // eax
  int v12; // eax
  NiNode **v13; // [esp+0h] [ebp-218h]
  float v14; // [esp+8h] [ebp-210h]
  _DWORD **v15; // [esp+Ch] [ebp-20Ch]
  float v16; // [esp+18h] [ebp-200h]
  float v17; // [esp+18h] [ebp-200h]
  float v18; // [esp+18h] [ebp-200h]
  float v19; // [esp+18h] [ebp-200h]
  float v20; // [esp+18h] [ebp-200h]
  double v21; // [esp+20h] [ebp-1F8h]
  int a1[24]; // [esp+28h] [ebp-1F0h] BYREF
  char v23[96]; // [esp+88h] [ebp-190h] BYREF
  int v24[24]; // [esp+E8h] [ebp-130h] BYREF
  unsigned int v25; // [esp+148h] [ebp-D0h] BYREF
  unsigned int v26; // [esp+214h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C);
  if ( OpenMenuTile
    && Tile_GetParentMenu(OpenMenuTile)
    && ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
         TESDataHandler_g_PlayerRef,
         0)
    && ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(
         TESDataHandler_g_PlayerRef,
         0) )
  {
    v1 = (TESNPC *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
    TESDataHandler_g_PlayerRef->super.super.super.process->Unk_17(TESDataHandler_g_PlayerRef->super.super.super.process);
    ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
    v26 = 0;
    ArrayConstructor(v23, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
    race = v1->member.form.race;
    LOBYTE(v26) = 1;
    v3 = (char *)sub_521A10(v1);
    sub_552990((char *)race->unk12, v3, (int)a1, 0, 0.0);
    v21 = 0.0 - 0.0;
    BSFaceGen_GetAge((int)a1, 0, 1);
    v16 = v21 - v21;
    v4 = v16;
    v5 = dbl_A492F0;
    if ( v5 < v16 && flt_A47800 <= v4 )
    {
      v6 = flt_A47800;
    }
    else
    {
      if ( v5 < v4 )
        goto LABEL_11;
      v6 = flt_A468FC;
    }
    v17 = v6;
    v4 = v17;
LABEL_11:
    v14 = v4;
    sub_555A00((int)a1, 0, 1, v14);
    BSFaceGen_GetAge((int)a1, 1, 1);
    v18 = v4 - sub_522230(v1);
    v19 = v18 - v21;
    v7 = flt_A53954;
    v8 = v19;
    if ( v19 > v7 && fConstant_2 <= v8 )
    {
      v19 = fConstant_2;
    }
    else if ( v8 <= v7 )
    {
      v19 = flt_A53954;
    }
    v20 = sub_522230(v1) + v19;
    sub_555A00((int)a1, 1, 1, v20);
    sub_552880(v23);
    ArrayConstructor(v24, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
    LOBYTE(v26) = 2;
    sub_5221C0((int *)v1, v24);
    sub_552C10(v24, (int)a1, (int)v23);
    v13 = sub_521A10(v1);
    v9 = (char *)sub_521A10(v1);
    sub_552990(v23, v9, (int)v13, 0, 0.0);
    FaceGenHeadParameters_Ctor(&v25);
    v10 = (int *)v1->member.form.race;
    LOBYTE(v26) = 3;
    TESRace_GetFaceGenHeadParameters(v10, (int)v1, (int)&v25);
    v11 = ((int (__thiscall *)(PlayerCharacter *, _DWORD, unsigned int *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
            TESDataHandler_g_PlayerRef,
            0,
            &v25);
    BSFaceGen_DoSomethingWithFaceGenNode(v11, v15);
    v12 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(TESDataHandler_g_PlayerRef);
    BSFaceGen_DoSomethingWithFaceGenNode(v12, 0);
    LOBYTE(v26) = 2;
    FaceGenHeadParameters_Dtor(&v25);
    LOBYTE(v26) = 1;
    _LN21(v24, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
    LOBYTE(v26) = 0;
    _LN21(v23, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
    v26 = 0xFFFFFFFF;
    _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  }
}
