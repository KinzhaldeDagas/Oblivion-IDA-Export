char __thiscall sub_5C5F00(_DWORD *this)
{
  const char *value; // eax
  const char *v3; // eax
  Tile *ControlTile; // eax
  double Float; // st7
  int v6; // eax
  double v7; // st7
  const char *v8; // eax
  double v9; // st7
  const char *v10; // eax
  Tile *v11; // ebx
  const char *v12; // eax
  double v13; // st7
  const char *v14; // eax
  Tile *v15; // ebx
  const char *v16; // eax
  double v17; // st7
  const char *v18; // eax
  Tile *v19; // ebx
  TESForm *v20; // eax
  bool v21; // zf
  const char *v22; // eax
  const char *v23; // eax
  Tile *v24; // eax
  double v25; // st7
  const char *v26; // eax
  const char *v27; // eax
  Tile *v28; // eax
  _BYTE v30[24]; // [esp-14h] [ebp-44h] BYREF
  float a3; // [esp+18h] [ebp-18h]
  _DWORD *v32; // [esp+1Ch] [ebp-14h]
  _DWORD *v33; // [esp+20h] [ebp-10h]
  int v34; // [esp+2Ch] [ebp-4h]

  value = stru_B39330.value; /*0x5c5f29*/
  *(_DWORD *)&v30[0x14] = 0xFAE; /*0x5c5f2e*/
  a3 = COERCE_FLOAT(&v30[0xC]); /*0x5c5f3a*/
  *(_DWORD *)&v30[0xC] = 0; /*0x5c5f40*/
  *(_WORD *)&v30[0x10] = 0; /*0x5c5f42*/
  *(_WORD *)&v30[0x12] = 0; /*0x5c5f46*/
  BSStringT_Set((BSStringT *)&v30[0xC], value, 0); /*0x5c5f4a*/
  v3 = g_gameSetting_sHair.value; /*0x5c5f4f*/
  v32 = &v30[4]; /*0x5c5f59*/
  v34 = 0; /*0x5c5f5f*/
  *(_DWORD *)&v30[4] = 0; /*0x5c5f63*/
  *(_WORD *)&v30[8] = 0; /*0x5c5f65*/
  *(_WORD *)&v30[0xA] = 0; /*0x5c5f69*/
  BSStringT_Set((BSStringT *)&v30[4], v3, 0); /*0x5c5f6d*/
  v34 = 0xFFFFFFFF; /*0x5c5f77*/
  ControlTile = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v30[4], *(BSStringT *)&v30[0xC]); /*0x5c5f7b*/
  Float = Tile_GetFloat(ControlTile, *(int *)&v30[0x14]); /*0x5c5f82*/
  v6 = *(this + Double_To_SInt32(Float) + 0x23C); /*0x5c5f8c*/
  LODWORD(a3) = (unsigned __int8)v6; /*0x5c5f96*/
  v7 = (double)(unsigned __int8)v6; /*0x5c5f9d*/
  *(this + 0x21E) = v6; /*0x5c5fa3*/
  v8 = stru_B38FC0.value; /*0x5c5fa9*/
  v9 = v7 / dbl_A3DDD8; /*0x5c5fae*/
  v32 = &v30[0x10]; /*0x5c5fb4*/
  *(_QWORD *)&v30[0x10] = 0; /*0x5c5fba*/
  a3 = v9; /*0x5c5fc4*/
  BSStringT_Set((BSStringT *)&v30[0x10], v8, 0); /*0x5c5fc8*/
  v10 = g_gameSetting_sHair.value; /*0x5c5fcd*/
  v33 = &v30[8]; /*0x5c5fd7*/
  v34 = 1; /*0x5c5fdd*/
  *(_DWORD *)&v30[8] = 0; /*0x5c5fe5*/
  *(_WORD *)&v30[0xC] = 0; /*0x5c5fe7*/
  *(_WORD *)&v30[0xE] = 0; /*0x5c5feb*/
  BSStringT_Set((BSStringT *)&v30[8], v10, 0); /*0x5c5fef*/
  v34 = 0xFFFFFFFF; /*0x5c5ff6*/
  v11 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v30[8], *(BSStringT *)&v30[0x10]); /*0x5c6006*/
  Tile_SetFloat(v11, 0xFB1u, flt_A6D2D8); /*0x5c6012*/
  Tile_SetFloat(v11, 0xFB1u, a3); /*0x5c6026*/
  Tile_SetFloat(v11, 0xFB1u, 0.0); /*0x5c6038*/
  LODWORD(a3) = *((unsigned __int8 *)this + 0x879); /*0x5c6044*/
  v12 = stru_B38FC8.value; /*0x5c6048*/
  v33 = &v30[0x10]; /*0x5c6056*/
  v13 = (double)SLODWORD(a3) / dbl_A3DDD8; /*0x5c605a*/
  *(_QWORD *)&v30[0x10] = 0; /*0x5c6062*/
  a3 = v13; /*0x5c606c*/
  BSStringT_Set((BSStringT *)&v30[0x10], v12, 0); /*0x5c6070*/
  v14 = g_gameSetting_sHair.value; /*0x5c6075*/
  v32 = &v30[8]; /*0x5c607f*/
  v34 = 2; /*0x5c6085*/
  *(_DWORD *)&v30[8] = 0; /*0x5c608d*/
  *(_WORD *)&v30[0xC] = 0; /*0x5c608f*/
  *(_WORD *)&v30[0xE] = 0; /*0x5c6093*/
  BSStringT_Set((BSStringT *)&v30[8], v14, 0); /*0x5c6097*/
  v34 = 0xFFFFFFFF; /*0x5c609e*/
  v15 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v30[8], *(BSStringT *)&v30[0x10]); /*0x5c60ae*/
  Tile_SetFloat(v15, 0xFB1u, flt_A6D2D8); /*0x5c60ba*/
  Tile_SetFloat(v15, 0xFB1u, a3); /*0x5c60ce*/
  Tile_SetFloat(v15, 0xFB1u, 0.0); /*0x5c60e0*/
  LODWORD(a3) = *((unsigned __int8 *)this + 0x87A); /*0x5c60ec*/
  v16 = stru_B38FD0.value; /*0x5c60f0*/
  v33 = &v30[0x10]; /*0x5c60fe*/
  v17 = (double)SLODWORD(a3) / dbl_A3DDD8; /*0x5c6102*/
  *(_QWORD *)&v30[0x10] = 0; /*0x5c610a*/
  a3 = v17; /*0x5c6114*/
  BSStringT_Set((BSStringT *)&v30[0x10], v16, 0); /*0x5c6118*/
  v18 = g_gameSetting_sHair.value; /*0x5c611d*/
  v32 = &v30[8]; /*0x5c6127*/
  v34 = 3; /*0x5c612d*/
  *(_DWORD *)&v30[8] = 0; /*0x5c6135*/
  *(_WORD *)&v30[0xC] = 0; /*0x5c6137*/
  *(_WORD *)&v30[0xE] = 0; /*0x5c613b*/
  BSStringT_Set((BSStringT *)&v30[8], v18, 0); /*0x5c613f*/
  v34 = 0xFFFFFFFF; /*0x5c6146*/
  v19 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v30[8], *(BSStringT *)&v30[0x10]); /*0x5c614f*/
  Tile_SetFloat(v19, 0xFB1u, flt_A6D2D8); /*0x5c6162*/
  Tile_SetFloat(v19, 0xFB1u, a3); /*0x5c6176*/
  Tile_SetFloat(v19, 0xFB1u, 0.0); /*0x5c6188*/
  v20 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c619b*/
  v21 = !sub_51FE90(v20[0x13].vtbl); /*0x5c61a8*/
  v22 = stru_B39330.value; /*0x5c61aa*/
  if ( v21 ) /*0x5c61af*/
  {
    *(_DWORD *)&v30[0x14] = 0xFAE; /*0x5c61b5*/
    v33 = &v30[0xC]; /*0x5c61bf*/
    *(_DWORD *)&v30[0xC] = 0; /*0x5c61c5*/
    *(_WORD *)&v30[0x10] = 0; /*0x5c61c7*/
    *(_WORD *)&v30[0x12] = 0; /*0x5c61cb*/
    BSStringT_Set((BSStringT *)&v30[0xC], v22, 0); /*0x5c61cf*/
    v23 = g_gameSetting_sHair.value; /*0x5c61d4*/
    v32 = &v30[4]; /*0x5c61de*/
    v34 = 4; /*0x5c61e4*/
    *(_DWORD *)&v30[4] = 0; /*0x5c61ec*/
    *(_WORD *)&v30[8] = 0; /*0x5c61ee*/
    *(_WORD *)&v30[0xA] = 0; /*0x5c61f2*/
    BSStringT_Set((BSStringT *)&v30[4], v23, 0); /*0x5c61f6*/
    v34 = 0xFFFFFFFF; /*0x5c61fd*/
    v24 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v30[4], *(BSStringT *)&v30[0xC]); /*0x5c6201*/
    v25 = Tile_GetFloat(v24, *(int *)&v30[0x14]); /*0x5c6208*/
    *(_DWORD *)&v30[0x14] = *(this + 2 * Double_To_SInt32(v25) + 0x24C); /*0x5c621b*/
    v26 = stru_B39330.value; /*0x5c621c*/
    *(_DWORD *)&v30[0x10] = 0xFB4; /*0x5c6221*/
    v33 = &v30[8]; /*0x5c622b*/
    *(_DWORD *)&v30[8] = 0; /*0x5c6231*/
    *(_WORD *)&v30[0xC] = 0; /*0x5c6233*/
    *(_WORD *)&v30[0xE] = 0; /*0x5c6237*/
    BSStringT_Set((BSStringT *)&v30[8], v26, 0); /*0x5c623b*/
    v34 = 5; /*0x5c6240*/
  }
  else
  {
    *(_DWORD *)&v30[0x14] = EmptyString; /*0x5c624a*/
    *(_DWORD *)&v30[0x10] = 0xFB4; /*0x5c624f*/
    v33 = &v30[8]; /*0x5c6259*/
    *(_DWORD *)&v30[8] = 0; /*0x5c625f*/
    *(_WORD *)&v30[0xC] = 0; /*0x5c6261*/
    *(_WORD *)&v30[0xE] = 0; /*0x5c6265*/
    BSStringT_Set((BSStringT *)&v30[8], v22, 0); /*0x5c6269*/
    v34 = 6; /*0x5c626e*/
  }
  v27 = g_gameSetting_sHair.value; /*0x5c6276*/
  v32 = v30; /*0x5c6280*/
  *(_DWORD *)v30 = 0; /*0x5c6285*/
  *(_WORD *)&v30[4] = 0; /*0x5c6287*/
  *(_WORD *)&v30[6] = 0; /*0x5c628c*/
  BSStringT_Set((BSStringT *)v30, v27, 0); /*0x5c6290*/
  v34 = 0xFFFFFFFF; /*0x5c6297*/
  v28 = RaceSexMenu_FindControlTile(this, *(BSStringT *)v30, *(BSStringT *)&v30[8]); /*0x5c629b*/
  Tile_SetString(v28, *(_DWORD **)&v30[0x10], *(char **)&v30[0x14]); /*0x5c62a2*/
  return sub_5C5C30(this, 0); /*0x5c62af*/
}
