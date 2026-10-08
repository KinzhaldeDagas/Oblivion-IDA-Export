char __thiscall sub_5C5C30(_DWORD *this, char a2)
{
  const char *value; // eax
  const char *v4; // eax
  Tile *ControlTile; // eax
  const char *v6; // eax
  const char *v7; // eax
  Tile *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  Tile *v11; // eax
  double v12; // rt0
  unsigned __int16 v13; // cx
  TESForm *v14; // eax
  TESForm *v15; // ebp
  const char *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  Tile *v19; // eax
  _BYTE v21[20]; // [esp-18h] [ebp-48h] BYREF
  int v22; // [esp-4h] [ebp-34h]
  float v23; // [esp+14h] [ebp-1Ch]
  _BYTE *v24; // [esp+18h] [ebp-18h]
  float v25; // [esp+1Ch] [ebp-14h]
  float Float; // [esp+20h] [ebp-10h]
  int v27; // [esp+2Ch] [ebp-4h]

  value = stru_B38FC0.value; /*0x5c5c59*/
  v22 = 0xFAE; /*0x5c5c5e*/
  Float = COERCE_FLOAT(&v21[0xC]); /*0x5c5c6a*/
  *(_DWORD *)&v21[0xC] = 0; /*0x5c5c70*/
  *(_WORD *)&v21[0x10] = 0; /*0x5c5c72*/
  *(_WORD *)&v21[0x12] = 0; /*0x5c5c76*/
  BSStringT_Set((BSStringT *)&v21[0xC], value, 0); /*0x5c5c7a*/
  v4 = g_gameSetting_sHair.value; /*0x5c5c7f*/
  v25 = COERCE_FLOAT(&v21[4]); /*0x5c5c89*/
  v27 = 0; /*0x5c5c8f*/
  *(_DWORD *)&v21[4] = 0; /*0x5c5c93*/
  *(_WORD *)&v21[8] = 0; /*0x5c5c95*/
  *(_WORD *)&v21[0xA] = 0; /*0x5c5c99*/
  BSStringT_Set((BSStringT *)&v21[4], v4, 0); /*0x5c5c9d*/
  v27 = 0xFFFFFFFF; /*0x5c5ca7*/
  ControlTile = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v21[4], *(BSStringT *)&v21[0xC]); /*0x5c5cab*/
  Float = Tile_GetFloat(ControlTile, v22); /*0x5c5cb7*/
  v6 = stru_B38FC8.value; /*0x5c5cbb*/
  v22 = 0xFAE; /*0x5c5cc0*/
  v25 = COERCE_FLOAT(&v21[0xC]); /*0x5c5cca*/
  *(_DWORD *)&v21[0xC] = 0; /*0x5c5cd0*/
  *(_WORD *)&v21[0x10] = 0; /*0x5c5cd2*/
  *(_WORD *)&v21[0x12] = 0; /*0x5c5cd6*/
  BSStringT_Set((BSStringT *)&v21[0xC], v6, 0); /*0x5c5cda*/
  v7 = g_gameSetting_sHair.value; /*0x5c5cdf*/
  v24 = &v21[4]; /*0x5c5ce9*/
  v27 = 1; /*0x5c5cef*/
  *(_DWORD *)&v21[4] = 0; /*0x5c5cf7*/
  *(_WORD *)&v21[8] = 0; /*0x5c5cf9*/
  *(_WORD *)&v21[0xA] = 0; /*0x5c5cfd*/
  BSStringT_Set((BSStringT *)&v21[4], v7, 0); /*0x5c5d01*/
  v27 = 0xFFFFFFFF; /*0x5c5d08*/
  v8 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v21[4], *(BSStringT *)&v21[0xC]); /*0x5c5d0c*/
  v25 = Tile_GetFloat(v8, v22); /*0x5c5d18*/
  v9 = stru_B38FD0.value; /*0x5c5d1c*/
  v22 = 0xFAE; /*0x5c5d21*/
  v24 = &v21[0xC]; /*0x5c5d2b*/
  *(_DWORD *)&v21[0xC] = 0; /*0x5c5d31*/
  *(_WORD *)&v21[0x10] = 0; /*0x5c5d33*/
  *(_WORD *)&v21[0x12] = 0; /*0x5c5d37*/
  BSStringT_Set((BSStringT *)&v21[0xC], v9, 0); /*0x5c5d3b*/
  v10 = g_gameSetting_sHair.value; /*0x5c5d40*/
  v23 = COERCE_FLOAT(&v21[4]); /*0x5c5d4a*/
  v27 = 2; /*0x5c5d4e*/
  *(_DWORD *)&v21[4] = 0; /*0x5c5d56*/
  *(_WORD *)&v21[8] = 0; /*0x5c5d58*/
  *(_WORD *)&v21[0xA] = 0; /*0x5c5d5c*/
  BSStringT_Set((BSStringT *)&v21[4], v10, 0); /*0x5c5d62*/
  v27 = 0xFFFFFFFF; /*0x5c5d69*/
  v11 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v21[4], *(BSStringT *)&v21[0xC]); /*0x5c5d6d*/
  v23 = Tile_GetFloat(v11, v22); /*0x5c5d79*/
  v12 = dbl_A3DDD8; /*0x5c5d99*/
  v24 = (_BYTE *)(int)(v23 * v12); /*0x5c5da3*/
  HIBYTE(v13) = (_BYTE)v24; /*0x5c5dac*/
  LODWORD(v25) = (int)(v25 * v12); /*0x5c5dce*/
  LOBYTE(v13) = LOBYTE(v25); /*0x5c5dd6*/
  LODWORD(Float) = (unsigned __int8)(int)(v12 * Float) | (v13 << 8); /*0x5c5e0b*/
  v14 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c5e1d*/
  v15 = v14; /*0x5c5e23*/
  if ( a2 ) /*0x5c5e25*/
  {
    if ( sub_51FE90(v14[0x13].vtbl) ) /*0x5c5e31*/
    {
      v17 = stru_B39330.value; /*0x5c5e6e*/
      v22 = (int)EmptyString; /*0x5c5e73*/
      *(_DWORD *)&v21[0x10] = 0xFB4; /*0x5c5e78*/
      *(_DWORD *)&v21[8] = 0; /*0x5c5e88*/
      *(_WORD *)&v21[0xC] = 0; /*0x5c5e8a*/
      *(_WORD *)&v21[0xE] = 0; /*0x5c5e8e*/
      BSStringT_Set((BSStringT *)&v21[8], v17, 0); /*0x5c5e92*/
      v27 = 4; /*0x5c5e97*/
    }
    else
    {
      v22 = (int)stru_B394D8.value; /*0x5c5e3f*/
      v16 = stru_B39330.value; /*0x5c5e40*/
      *(_DWORD *)&v21[0x10] = 0xFB4; /*0x5c5e45*/
      *(_DWORD *)&v21[8] = 0; /*0x5c5e55*/
      *(_WORD *)&v21[0xC] = 0; /*0x5c5e57*/
      *(_WORD *)&v21[0xE] = 0; /*0x5c5e5b*/
      BSStringT_Set((BSStringT *)&v21[8], v16, 0); /*0x5c5e5f*/
      v27 = 3; /*0x5c5e64*/
    }
    v18 = g_gameSetting_sHair.value; /*0x5c5e9f*/
    v25 = COERCE_FLOAT(v21); /*0x5c5ea9*/
    *(_DWORD *)v21 = 0; /*0x5c5eae*/
    *(_WORD *)&v21[4] = 0; /*0x5c5eb0*/
    *(_WORD *)&v21[6] = 0; /*0x5c5eb5*/
    BSStringT_Set((BSStringT *)v21, v18, 0); /*0x5c5eb9*/
    v27 = 0xFFFFFFFF; /*0x5c5ec0*/
    v19 = RaceSexMenu_FindControlTile(this, *(BSStringT *)v21, *(BSStringT *)&v21[8]); /*0x5c5ec4*/
    Tile_SetString(v19, *(_DWORD **)&v21[0x10], (char *)v22); /*0x5c5ecb*/
  }
  *(float *)&v15[0x14].member.flags = Float; /*0x5c5ed4*/
  return sub_5C50A0(this, 0); /*0x5c5ee2*/
}
