void __usercall sub_5BB350(double a1@<st2>, double a2@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // esi
  unsigned __int8 v4; // al
  int v5; // edx
  _DWORD *v6; // eax
  float v7; // ecx
  double v8; // st6
  int v9; // edx
  int v10; // eax
  int v11; // edx
  double v12; // st7
  double v13; // st7
  double v14; // st6
  PlayerCharacter *v15; // eax
  double v16; // st6
  int v17; // ecx
  int v18; // eax
  double v19; // st6
  Tile *v20; // ecx
  double v21; // st7
  bool v22; // al
  TESObjectREFR *v23; // ecx
  UInt32 DwordAtOffset40; // eax
  float z; // ecx
  UInt32 v26; // edi
  double v27; // st7
  PlayerCharacter *v28; // eax
  float v29; // edx
  TESForm::FormFlags v30; // ecx
  float *v31; // eax
  Tile *v32; // ecx
  int a3a; // [esp+8h] [ebp-14h]
  int a3; // [esp+8h] [ebp-14h]
  _DWORD *v35; // [esp+Ch] [ebp-10h]
  _DWORD *v36; // [esp+Ch] [ebp-10h]
  _DWORD *v37; // [esp+Ch] [ebp-10h]
  float v38; // [esp+10h] [ebp-Ch] BYREF
  float v39; // [esp+14h] [ebp-8h] BYREF
  float v40; // [esp+18h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x5bb358*/
  if ( OpenMenuTile ) /*0x5bb362*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5bb370*/
    v4 = InterfaceManager_ConsumeMessageButton(); /*0x5bb377*/
    if ( v4 == 1 ) /*0x5bb37d*/
    {
      if ( *(_BYTE *)(ParentMenu + 0xDC) ) /*0x5bb383*/
      {
        v22 = sub_4D8B90((TESObjectREFR *)reference); /*0x5bb574*/
        v23 = (TESObjectREFR *)reference; /*0x5bb57b*/
        if ( v22 ) /*0x5bb581*/
          DwordAtOffset40 = Shared_GetDwordAtOffset40(v23); /*0x5bb583*/
        else
          DwordAtOffset40 = (UInt32)TESObjectREFR_GetWorldSpace(v23); /*0x5bb58a*/
        z = g_zeroNiPoint3.z; /*0x5bb59b*/
        v26 = DwordAtOffset40; /*0x5bb5a1*/
        v38 = *(float *)(ParentMenu + 0xD4); /*0x5bb5ac*/
        v27 = *(float *)(ParentMenu + 0xD8); /*0x5bb5b0*/
        v39 = *(float *)(ParentMenu + 0xD8); /*0x5bb5be*/
        v40 = z; /*0x5bb5c7*/
        sub_5B7180(&v38, &v39); /*0x5bb5ce*/
        v28 = reference; /*0x5bb5d3*/
        v29 = v39; /*0x5bb5dc*/
        *(float *)&v28->unk62C = v38; /*0x5bb5e0*/
        v30 = LODWORD(v40); /*0x5bb5e6*/
        v28 = (PlayerCharacter *)((char *)v28 + 0x62C); /*0x5bb5ea*/
        *(float *)&v28->super.super.super.super.super.type = v29; /*0x5bb5ef*/
        v28->super.super.super.super.super.flags = v30; /*0x5bb5f2*/
        reference->unk638 = v26; /*0x5bb5fb*/
        sub_663D30((TESObjectREFR *)reference); /*0x5bb607*/
        sub_5BA4D0(a1, a2, 0); /*0x5bb60e*/
        sub_58FBA0(*(_DWORD *)(ParentMenu + 4), a1, a2, v27, 0); /*0x5bb61c*/
      }
      else
      {
        v5 = *(_DWORD *)(ParentMenu + 0x98); /*0x5bb3a1*/
        v38 = *(float *)(ParentMenu + 0xD4); /*0x5bb3ad*/
        v6 = *(_DWORD **)(ParentMenu + 0xA0); /*0x5bb3b7*/
        v39 = *(float *)(ParentMenu + 0xD8); /*0x5bb3c1*/
        v7 = g_zeroNiPoint3.z; /*0x5bb3c9*/
        v8 = (double)*(int *)(ParentMenu + 0x98); /*0x5bb3cf*/
        v35 = v6; /*0x5bb3d5*/
        if ( v5 < 0 ) /*0x5bb3d9*/
          v8 = v8 + flt_A2FC78; /*0x5bb3db*/
        v9 = *(_DWORD *)(ParentMenu + 0xA4) - (_DWORD)v6; /*0x5bb3e9*/
        v10 = *(_DWORD *)(ParentMenu + 0xA8); /*0x5bb3eb*/
        a3a = v9; /*0x5bb3f1*/
        v11 = *(_DWORD *)(ParentMenu + 0x9C); /*0x5bb3f5*/
        v12 = v38 / v8 * (double)a3a; /*0x5bb3fd*/
        a3 = v10; /*0x5bb401*/
        v38 = v12 + (double)(int)v35; /*0x5bb409*/
        v13 = v39; /*0x5bb40d*/
        v14 = (double)*(int *)(ParentMenu + 0x9C); /*0x5bb411*/
        if ( v11 < 0 ) /*0x5bb417*/
          v14 = v14 + flt_A2FC78; /*0x5bb419*/
        v36 = (_DWORD *)(v10 - *(_DWORD *)(ParentMenu + 0xAC)); /*0x5bb42b*/
        v15 = reference; /*0x5bb42f*/
        *(float *)&v15->unk62C = v38; /*0x5bb434*/
        v15 = (PlayerCharacter *)((char *)v15 + 0x62C); /*0x5bb43a*/
        v39 = -(-(v13 / v14 - dbl_A2F928) * (double)(int)v36 - (double)a3); /*0x5bb451*/
        *(float *)&v15->super.super.super.super.super.type = v39; /*0x5bb459*/
        *(float *)&v15->super.super.super.super.super.flags = v7; /*0x5bb45c*/
        reference->unk638 = *(_DWORD *)(ParentMenu + 0xD0); /*0x5bb46b*/
        sub_663D30((TESObjectREFR *)reference); /*0x5bb477*/
        v16 = (double)*(int *)(ParentMenu + 0x98); /*0x5bb4a6*/
        if ( *(int *)(ParentMenu + 0x98) < 0 ) /*0x5bb4ac*/
          v16 = v16 + flt_A2FC78; /*0x5bb4ae*/
        v17 = *(_DWORD *)(ParentMenu + 0x9C); /*0x5bb4bc*/
        v37 = *(_DWORD **)(ParentMenu + 0xA8); /*0x5bb4c2*/
        v18 = (int)v37 - *(_DWORD *)(ParentMenu + 0xAC); /*0x5bb4c6*/
        v38 = (v38 - (double)*(int *)(ParentMenu + 0xA0)) /*0x5bb4cc*/
            / (double)(*(_DWORD *)(ParentMenu + 0xA4) - *(_DWORD *)(ParentMenu + 0xA0))
            * v16;
        v19 = (double)*(int *)(ParentMenu + 0x9C); /*0x5bb4e6*/
        if ( v17 < 0 ) /*0x5bb4ec*/
          v19 = v19 + dbl_A30E60; /*0x5bb4ee*/
        v20 = *(Tile **)(ParentMenu + 0xE0); /*0x5bb4f7*/
        v39 = (1.0 - ((double)(int)v37 - v39) / (double)v18) * v19; /*0x5bb4fd*/
        Tile_SetFloat(v20, 0xFAFu, v38); /*0x5bb50d*/
        Tile_SetFloat(*(Tile **)(ParentMenu + 0xE0), 0xFB0u, v39); /*0x5bb525*/
        Tile_SetFloat(*(Tile **)(ParentMenu + 0xE0), 0xFA7u, flt_A40098); /*0x5bb53f*/
        v21 = fConstant_2; /*0x5bb544*/
        Tile_SetFloat(*(Tile **)(ParentMenu + 0xE0), 0xFB6u, fConstant_2); /*0x5bb559*/
        sub_58FBA0(*(_DWORD *)(ParentMenu + 4), a1, v19, v21, 0); /*0x5bb563*/
      }
    }
    else if ( v4 == 3 ) /*0x5bb629*/
    {
      v31 = (float *)reference; /*0x5bb62f*/
      v31[0x18B] = g_zeroNiPoint3.x; /*0x5bb63a*/
      v31 += 0x18B; /*0x5bb646*/
      v31[1] = g_zeroNiPoint3.y; /*0x5bb64b*/
      v31[2] = g_zeroNiPoint3.z; /*0x5bb654*/
      reference->unk638 = 0; /*0x5bb65d*/
      sub_663D30((TESObjectREFR *)reference); /*0x5bb66d*/
      v32 = *(Tile **)(ParentMenu + 0xE0); /*0x5bb672*/
      if ( v32 ) /*0x5bb67a*/
      {
        Tile_SetFloat(v32, 0xFA7u, 0.0); /*0x5bb687*/
        Tile_SetFloat(*(Tile **)(ParentMenu + 0xE0), 0xFB6u, 1.0); /*0x5bb69d*/
      }
      if ( *(_BYTE *)(ParentMenu + 0xDC) ) /*0x5bb6a2*/
        sub_5BA4D0(a1, a2, 0); /*0x5bb6ad*/
    }
  }
}
