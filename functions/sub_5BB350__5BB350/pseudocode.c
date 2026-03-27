void __usercall sub_5BB350(double a1@<st2>, double a2@<st1>, double st7_0@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // esi
  UInt8 v6; // al
  int v7; // edx
  _DWORD *v8; // eax
  float v9; // ecx
  double v10; // st6
  int v11; // edx
  int v12; // eax
  int v13; // edx
  double v14; // st7
  double v15; // st7
  double v16; // st6
  PlayerCharacter *v17; // eax
  double v18; // st7
  double v19; // st6
  int v20; // ecx
  int v21; // eax
  double v22; // st6
  Tile *v23; // ecx
  double v24; // st7
  bool v25; // al
  TESObjectREFR *v26; // ecx
  void *ParentCell; // eax
  float v28; // ecx
  UInt32 v29; // edi
  double v30; // st7
  PlayerCharacter *v31; // eax
  float v32; // edx
  TESForm::FormFlags v33; // ecx
  double v34; // st7
  float *v35; // eax
  Tile *v36; // ecx
  int a3a; // [esp+8h] [ebp-14h]
  int a3; // [esp+8h] [ebp-14h]
  _DWORD *v39; // [esp+Ch] [ebp-10h]
  _DWORD *v40; // [esp+Ch] [ebp-10h]
  _DWORD *v41; // [esp+Ch] [ebp-10h]
  float v42; // [esp+10h] [ebp-Ch] BYREF
  float v43; // [esp+14h] [ebp-8h] BYREF
  float v44; // [esp+18h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v6 = sub_578D70();
    if ( v6 == 1 )
    {
      if ( *(_BYTE *)(ParentMenu + 0xDC) )
      {
        v25 = sub_4D8B90((TESObjectREFR *)TESDataHandler_g_PlayerRef);
        v26 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
        if ( v25 )
          ParentCell = TESObjectREFR_GetParentCell(v26);
        else
          ParentCell = TESObjectREFR_GetWorldSpace(v26);
        v28 = dword_B3F9B0;
        v29 = (UInt32)ParentCell;
        v42 = *(float *)(ParentMenu + 0xD4);
        v30 = *(float *)(ParentMenu + 0xD8);
        v43 = *(float *)(ParentMenu + 0xD8);
        v44 = v28;
        sub_5B7180(&v42, &v43);
        v31 = TESDataHandler_g_PlayerRef;
        v32 = v43;
        *(float *)&v31->unk62C = v42;
        v33 = LODWORD(v44);
        v31 = (PlayerCharacter *)((char *)v31 + 0x62C);
        *(float *)&v31->super.super.super.super.super.type = v32;
        v31->super.super.super.super.super.flags = v33;
        TESDataHandler_g_PlayerRef->unk638 = v29;
        v34 = sub_663D30((TESObjectREFR *)TESDataHandler_g_PlayerRef, v30);
        sub_5BA4D0(a1, a2, 0);
        sub_58FBA0(*(_DWORD *)(ParentMenu + 4), a1, a2, v34, 0);
      }
      else
      {
        v7 = *(_DWORD *)(ParentMenu + 0x98);
        v42 = *(float *)(ParentMenu + 0xD4);
        v8 = *(_DWORD **)(ParentMenu + 0xA0);
        v43 = *(float *)(ParentMenu + 0xD8);
        v9 = dword_B3F9B0;
        v10 = (double)*(int *)(ParentMenu + 0x98);
        v39 = v8;
        if ( v7 < 0 )
          v10 = v10 + flt_A2FC78;
        v11 = *(_DWORD *)(ParentMenu + 0xA4) - (_DWORD)v8;
        v12 = *(_DWORD *)(ParentMenu + 0xA8);
        a3a = v11;
        v13 = *(_DWORD *)(ParentMenu + 0x9C);
        v14 = v42 / v10 * (double)a3a;
        a3 = v12;
        v42 = v14 + (double)(int)v39;
        v15 = v43;
        v16 = (double)*(int *)(ParentMenu + 0x9C);
        if ( v13 < 0 )
          v16 = v16 + flt_A2FC78;
        v40 = (_DWORD *)(v12 - *(_DWORD *)(ParentMenu + 0xAC));
        v17 = TESDataHandler_g_PlayerRef;
        *(float *)&v17->unk62C = v42;
        v17 = (PlayerCharacter *)((char *)v17 + 0x62C);
        v18 = -(-(v15 / v16 - dbl_A2F928) * (double)(int)v40 - (double)a3);
        v43 = v18;
        *(float *)&v17->super.super.super.super.super.type = v43;
        *(float *)&v17->super.super.super.super.super.flags = v9;
        TESDataHandler_g_PlayerRef->unk638 = *(_DWORD *)(ParentMenu + 0xD0);
        sub_663D30((TESObjectREFR *)TESDataHandler_g_PlayerRef, v18);
        v19 = (double)*(int *)(ParentMenu + 0x98);
        if ( *(int *)(ParentMenu + 0x98) < 0 )
          v19 = v19 + flt_A2FC78;
        v20 = *(_DWORD *)(ParentMenu + 0x9C);
        v41 = *(_DWORD **)(ParentMenu + 0xA8);
        v21 = (int)v41 - *(_DWORD *)(ParentMenu + 0xAC);
        v42 = (v42 - (double)*(int *)(ParentMenu + 0xA0))
            / (double)(*(_DWORD *)(ParentMenu + 0xA4) - *(_DWORD *)(ParentMenu + 0xA0))
            * v19;
        v22 = (double)*(int *)(ParentMenu + 0x9C);
        if ( v20 < 0 )
          v22 = v22 + dbl_A30E60;
        v23 = *(Tile **)(ParentMenu + 0xE0);
        v43 = (1.0 - ((double)(int)v41 - v43) / (double)v21) * v22;
        Tile_SetFloat(v23, (_DWORD *)0xFAF, v42);
        Tile_SetFloat(*(Tile **)(ParentMenu + 0xE0), (_DWORD *)0xFB0, v43);
        Tile_SetFloat(*(Tile **)(ParentMenu + 0xE0), (_DWORD *)0xFA7, flt_A40098);
        v24 = fConstant_2;
        Tile_SetFloat(*(Tile **)(ParentMenu + 0xE0), (_DWORD *)0xFB6, fConstant_2);
        sub_58FBA0(*(_DWORD *)(ParentMenu + 4), a1, v22, v24, 0);
      }
    }
    else if ( v6 == 3 )
    {
      v35 = (float *)TESDataHandler_g_PlayerRef;
      v35[0x18B] = Vector3_InitValue_;
      v35 += 0x18B;
      v35[1] = *(&Vector3_InitValue_ + 1);
      v35[2] = dword_B3F9B0;
      TESDataHandler_g_PlayerRef->unk638 = 0;
      sub_663D30((TESObjectREFR *)TESDataHandler_g_PlayerRef, st7_0);
      v36 = *(Tile **)(ParentMenu + 0xE0);
      if ( v36 )
      {
        Tile_SetFloat(v36, (_DWORD *)0xFA7, 0.0);
        Tile_SetFloat(*(Tile **)(ParentMenu + 0xE0), (_DWORD *)0xFB6, 1.0);
      }
      if ( *(_BYTE *)(ParentMenu + 0xDC) )
        sub_5BA4D0(a1, a2, 0);
    }
  }
}
