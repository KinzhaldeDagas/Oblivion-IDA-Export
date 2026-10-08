double __thiscall sub_5C6860(_DWORD *this, int a2)
{
  PlayerCharacter *v3; // ecx
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  TESNPC *v5; // edi
  TESRace *race; // ebx
  char *v7; // eax
  const char *v8; // eax
  _DWORD *v9; // ebx
  double v10; // st7
  TESRace *v11; // edi
  double v12; // st7
  double v13; // st7
  int v14; // eax
  _DWORD *v15; // esi
  double v16; // st7
  int v17; // eax
  double v18; // st7
  double v19; // st7
  int v20; // eax
  BSStringT v22; // [esp-8h] [ebp-94h] BYREF
  int v23; // [esp+0h] [ebp-8Ch]
  float v24; // [esp+14h] [ebp-78h]
  double Float; // [esp+18h] [ebp-74h]
  unsigned __int8 a1[96]; // [esp+20h] [ebp-6Ch] BYREF
  unsigned int v27; // [esp+88h] [ebp-4h]
  float v28; // [esp+90h] [ebp+4h]
  float v29; // [esp+90h] [ebp+4h]
  float v30; // [esp+90h] [ebp+4h]

  ArrayConstructor( /*0x5c689b*/
    (char *)a1,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  v3 = reference; /*0x5c68a0*/
  GetBaseForm = reference->vtbl->super.super.super.GetBaseForm; /*0x5c68a8*/
  v27 = 0; /*0x5c68ae*/
  *(float *)&v23 = 0.0; /*0x5c68be*/
  v5 = (TESNPC *)GetBaseForm((TESObjectREFR *)v3); /*0x5c68c1*/
  race = v5->member.form.race; /*0x5c68c3*/
  v7 = (char *)TESNPC_GetActiveFaceGenDeltaParameters(v5); /*0x5c68d2*/
  FaceGenHeadParameters_Combine((char *)race->unk12, v7, (int)a1, 0, 0.0); /*0x5c68df*/
  v8 = (const char *)stru_B39000; /*0x5c68e4*/
  v23 = 0xFA8; /*0x5c68ec*/
  LODWORD(Float) = &v22; /*0x5c68f6*/
  v22.m_data = 0; /*0x5c68fd*/
  v22.m_dataLen = 0; /*0x5c6903*/
  v22.m_bufLen = 0; /*0x5c6909*/
  BSStringT_Set(&v22, v8, 0); /*0x5c690f*/
  v9 = (_DWORD *)RaceSexMenu_GetCategoryTileByName(this, (unsigned __int8 *)v22.m_data, *(int *)&v22.m_dataLen); /*0x5c6923*/
  Float = Tile_GetFloat((_DWORD *)*(this + 1), 0xFAE); /*0x5c692a*/
  v10 = Tile_GetFloat(v9, v23); /*0x5c6930*/
  v11 = v5->member.form.race; /*0x5c6939*/
  if ( v10 == Float ) /*0x5c6946*/
  {
    if ( *(float *)&v11->unk09C[2] <= 0.0 ) /*0x5c6953*/
      v12 = *(float *)&dword_A46C30; /*0x5c695d*/
    else
      v12 = *(float *)&v11->unk09C[2]; /*0x5c6955*/
  }
  else if ( *(float *)&v11->unk09C[1] <= 0.0 ) /*0x5c6970*/
  {
    v12 = flt_A31E2C; /*0x5c697a*/
  }
  else
  {
    v12 = *(float *)&v11->unk09C[1]; /*0x5c6972*/
  }
  v24 = v12; /*0x5c6987*/
  v13 = Tile_GetFloat((_DWORD *)*(this + a2 + 0x25), 0xFB6); /*0x5c6997*/
  v14 = Double_To_SInt32(v13); /*0x5c699c*/
  v15 = (_DWORD *)*(this + a2 + 0x25); /*0x5c69a3*/
  v23 = 0xFB5; /*0x5c69aa*/
  if ( v14 ) /*0x5c69b1*/
  {
    *(_QWORD *)&Float = (__int64)(Tile_GetFloat(v15, v23) - dbl_A2F928); /*0x5c6a59*/
    v23 = SLODWORD(Float); /*0x5c6a61*/
    *(_DWORD *)&v22.m_dataLen = 0; /*0x5c6a62*/
    v19 = Tile_GetFloat(v15, 0xFB6); /*0x5c6a70*/
    v20 = Double_To_SInt32(v19); /*0x5c6a75*/
    v29 = FaceGenHeadParameters_GetSliderValue((int)a1, v20, *(int *)&v22.m_dataLen, v23); /*0x5c6a85*/
    v18 = (v29 - dbl_A6D3C8) / dbl_A46E48; /*0x5c6a99*/
  }
  else
  {
    *(_QWORD *)&Float = (__int64)(Tile_GetFloat(v15, v23) - dbl_A2F928); /*0x5c69dc*/
    v23 = SLODWORD(Float); /*0x5c69e4*/
    *(_DWORD *)&v22.m_dataLen = 0; /*0x5c69e5*/
    v16 = Tile_GetFloat(v15, 0xFB6); /*0x5c69f3*/
    v17 = Double_To_SInt32(v16); /*0x5c69f8*/
    v28 = FaceGenHeadParameters_GetSliderValue((int)a1, v17, *(int *)&v22.m_dataLen, v23); /*0x5c6a08*/
    *(float *)&Float = -v24; /*0x5c6a17*/
    v18 = (v28 - *(float *)&Float) / (v24 - *(float *)&Float); /*0x5c6a2c*/
  }
  v27 = 0xFFFFFFFF; /*0x5c6ab8*/
  v30 = (1.0 - 0.0) * v18 + 0.0; /*0x5c6ac7*/
  _LN21((char *)a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c6ace*/
  return v30; /*0x5c6ada*/
}
