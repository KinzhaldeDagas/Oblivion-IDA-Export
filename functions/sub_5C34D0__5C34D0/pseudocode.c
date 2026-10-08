void __thiscall sub_5C34D0(_DWORD *this)
{
  TESForm *v2; // eax
  const char *value; // eax
  const char *v4; // eax
  Tile *ControlTile; // eax
  const char *v6; // eax
  const char *v7; // eax
  Tile *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  Tile *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  Tile *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  Tile *v17; // eax
  double v18; // st7
  const char *v19; // eax
  const char *v20; // eax
  Tile *v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  Tile *v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  Tile *v27; // eax
  double v28; // rt0
  unsigned __int16 v29; // cx
  const char *v30; // eax
  int v31; // ebp
  const char *v32; // eax
  Tile *v33; // eax
  const char *v34; // eax
  const char *v35; // eax
  Tile *v36; // eax
  double v37; // st7
  const char *v38; // eax
  const char *v39; // eax
  Tile *v40; // eax
  double v41; // st7
  const char *v42; // eax
  const char *v43; // eax
  const char *v44; // eax
  Tile *v45; // eax
  const char *v46; // eax
  const char *v47; // eax
  Tile *v48; // eax
  const char *v49; // eax
  const char *v50; // eax
  Tile *v51; // eax
  const char *v52; // eax
  const char *v53; // eax
  _BYTE v54[24]; // [esp-14h] [ebp-48h] BYREF
  float v55; // [esp+18h] [ebp-1Ch]
  _BYTE *v56; // [esp+1Ch] [ebp-18h]
  float v57; // [esp+20h] [ebp-14h]
  float Float; // [esp+24h] [ebp-10h]
  int v59; // [esp+30h] [ebp-4h]

  v2 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c3507*/
  if ( sub_51FE90(v2[0x13].vtbl) ) /*0x5c350f*/
  {
    value = stru_B39330.value; /*0x5c351e*/
    Float = COERCE_FLOAT(&v54[0x10]); /*0x5c3528*/
    *(_QWORD *)&v54[0x10] = 0; /*0x5c352e*/
    BSStringT_Set((BSStringT *)&v54[0x10], value, 0); /*0x5c3538*/
    v4 = g_gameSetting_sHair.value; /*0x5c353d*/
    v57 = COERCE_FLOAT(&v54[8]); /*0x5c3547*/
    v59 = 0; /*0x5c354d*/
    *(_DWORD *)&v54[8] = 0; /*0x5c3551*/
    *(_WORD *)&v54[0xC] = 0; /*0x5c3553*/
    *(_WORD *)&v54[0xE] = 0; /*0x5c3557*/
    BSStringT_Set((BSStringT *)&v54[8], v4, 0); /*0x5c355b*/
    v59 = 0xFFFFFFFF; /*0x5c3565*/
    ControlTile = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[8], *(BSStringT *)&v54[0x10]); /*0x5c3569*/
    Tile_SetFloat(ControlTile, 0xFBBu, 1.0); /*0x5c357b*/
    v6 = stru_B39330.value; /*0x5c3580*/
    *(_DWORD *)&v54[0x14] = word_A36430; /*0x5c3585*/
    *(_DWORD *)&v54[0x10] = 0xFB4; /*0x5c358a*/
    Float = COERCE_FLOAT(&v54[8]); /*0x5c3594*/
    *(_DWORD *)&v54[8] = 0; /*0x5c359a*/
    *(_WORD *)&v54[0xC] = 0; /*0x5c359c*/
    *(_WORD *)&v54[0xE] = 0; /*0x5c35a0*/
    BSStringT_Set((BSStringT *)&v54[8], v6, 0); /*0x5c35a4*/
    v7 = g_gameSetting_sHair.value; /*0x5c35a9*/
    v57 = COERCE_FLOAT(v54); /*0x5c35b3*/
    v59 = 1; /*0x5c35b9*/
    *(_DWORD *)v54 = 0; /*0x5c35c1*/
    *(_WORD *)&v54[4] = 0; /*0x5c35c3*/
    *(_WORD *)&v54[6] = 0; /*0x5c35c7*/
    BSStringT_Set((BSStringT *)v54, v7, 0); /*0x5c35cb*/
    v59 = 0xFFFFFFFF; /*0x5c35d2*/
    v8 = RaceSexMenu_FindControlTile(this, *(BSStringT *)v54, *(BSStringT *)&v54[8]); /*0x5c35d6*/
    Tile_SetString(v8, *(_DWORD **)&v54[0x10], *(char **)&v54[0x14]); /*0x5c35dd*/
    v9 = stru_B38FC0.value; /*0x5c35e2*/
    Float = COERCE_FLOAT(&v54[0x10]); /*0x5c35ec*/
    *(_QWORD *)&v54[0x10] = 0; /*0x5c35f2*/
    BSStringT_Set((BSStringT *)&v54[0x10], v9, 0); /*0x5c35fc*/
    v10 = g_gameSetting_sHair.value; /*0x5c3601*/
    v57 = COERCE_FLOAT(&v54[8]); /*0x5c360b*/
    v59 = 2; /*0x5c360f*/
    *(_DWORD *)&v54[8] = 0; /*0x5c3617*/
    *(_WORD *)&v54[0xC] = 0; /*0x5c3619*/
    *(_WORD *)&v54[0xE] = 0; /*0x5c361d*/
    BSStringT_Set((BSStringT *)&v54[8], v10, 0); /*0x5c3623*/
    v59 = 0xFFFFFFFF; /*0x5c362a*/
    v11 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[8], *(BSStringT *)&v54[0x10]); /*0x5c362e*/
    Tile_SetFloat(v11, 0xFBBu, 1.0); /*0x5c3640*/
    v12 = stru_B38FC8.value; /*0x5c3645*/
    Float = COERCE_FLOAT(&v54[0x10]); /*0x5c364f*/
    *(_QWORD *)&v54[0x10] = 0; /*0x5c3655*/
    BSStringT_Set((BSStringT *)&v54[0x10], v12, 0); /*0x5c365f*/
    v13 = g_gameSetting_sHair.value; /*0x5c3664*/
    v57 = COERCE_FLOAT(&v54[8]); /*0x5c366e*/
    v59 = 3; /*0x5c3674*/
    *(_DWORD *)&v54[8] = 0; /*0x5c367c*/
    *(_WORD *)&v54[0xC] = 0; /*0x5c367e*/
    *(_WORD *)&v54[0xE] = 0; /*0x5c3682*/
    BSStringT_Set((BSStringT *)&v54[8], v13, 0); /*0x5c3686*/
    v59 = 0xFFFFFFFF; /*0x5c368d*/
    v14 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[8], *(BSStringT *)&v54[0x10]); /*0x5c3691*/
    Tile_SetFloat(v14, 0xFBBu, 1.0); /*0x5c36a3*/
    v15 = stru_B38FD0.value; /*0x5c36a8*/
    Float = COERCE_FLOAT(&v54[0x10]); /*0x5c36b2*/
    *(_QWORD *)&v54[0x10] = 0; /*0x5c36b8*/
    BSStringT_Set((BSStringT *)&v54[0x10], v15, 0); /*0x5c36c2*/
    v16 = g_gameSetting_sHair.value; /*0x5c36c7*/
    v57 = COERCE_FLOAT(&v54[8]); /*0x5c36d1*/
    v59 = 4; /*0x5c36d7*/
    *(_DWORD *)&v54[8] = 0; /*0x5c36df*/
    *(_WORD *)&v54[0xC] = 0; /*0x5c36e1*/
    *(_WORD *)&v54[0xE] = 0; /*0x5c36e5*/
    BSStringT_Set((BSStringT *)&v54[8], v16, 0); /*0x5c36e9*/
    v59 = 0xFFFFFFFF; /*0x5c36f0*/
    v17 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[8], *(BSStringT *)&v54[0x10]); /*0x5c36f4*/
    v18 = 1.0; /*0x5c36f9*/
  }
  else
  {
    v19 = stru_B38FC0.value; /*0x5c3700*/
    *(_DWORD *)&v54[0x14] = 0xFAE; /*0x5c3705*/
    Float = COERCE_FLOAT(&v54[0xC]); /*0x5c370f*/
    *(_DWORD *)&v54[0xC] = 0; /*0x5c3715*/
    *(_WORD *)&v54[0x10] = 0; /*0x5c3717*/
    *(_WORD *)&v54[0x12] = 0; /*0x5c371b*/
    BSStringT_Set((BSStringT *)&v54[0xC], v19, 0); /*0x5c371f*/
    v20 = g_gameSetting_sHair.value; /*0x5c3724*/
    v57 = COERCE_FLOAT(&v54[4]); /*0x5c372e*/
    v59 = 5; /*0x5c3734*/
    *(_DWORD *)&v54[4] = 0; /*0x5c373c*/
    *(_WORD *)&v54[8] = 0; /*0x5c373e*/
    *(_WORD *)&v54[0xA] = 0; /*0x5c3742*/
    BSStringT_Set((BSStringT *)&v54[4], v20, 0); /*0x5c3746*/
    v59 = 0xFFFFFFFF; /*0x5c3750*/
    v21 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[4], *(BSStringT *)&v54[0xC]); /*0x5c3754*/
    Float = Tile_GetFloat(v21, *(int *)&v54[0x14]); /*0x5c3760*/
    v22 = stru_B38FC8.value; /*0x5c3764*/
    *(_DWORD *)&v54[0x14] = 0xFAE; /*0x5c3769*/
    v57 = COERCE_FLOAT(&v54[0xC]); /*0x5c3773*/
    *(_DWORD *)&v54[0xC] = 0; /*0x5c3779*/
    *(_WORD *)&v54[0x10] = 0; /*0x5c377b*/
    *(_WORD *)&v54[0x12] = 0; /*0x5c377f*/
    BSStringT_Set((BSStringT *)&v54[0xC], v22, 0); /*0x5c3783*/
    v23 = g_gameSetting_sHair.value; /*0x5c3788*/
    v56 = &v54[4]; /*0x5c3792*/
    v59 = 6; /*0x5c3798*/
    *(_DWORD *)&v54[4] = 0; /*0x5c37a0*/
    *(_WORD *)&v54[8] = 0; /*0x5c37a2*/
    *(_WORD *)&v54[0xA] = 0; /*0x5c37a6*/
    BSStringT_Set((BSStringT *)&v54[4], v23, 0); /*0x5c37aa*/
    v59 = 0xFFFFFFFF; /*0x5c37b1*/
    v24 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[4], *(BSStringT *)&v54[0xC]); /*0x5c37b5*/
    v57 = Tile_GetFloat(v24, *(int *)&v54[0x14]); /*0x5c37c1*/
    v25 = stru_B38FD0.value; /*0x5c37c5*/
    *(_DWORD *)&v54[0x14] = 0xFAE; /*0x5c37ca*/
    v56 = &v54[0xC]; /*0x5c37d4*/
    *(_DWORD *)&v54[0xC] = 0; /*0x5c37da*/
    *(_WORD *)&v54[0x10] = 0; /*0x5c37dc*/
    *(_WORD *)&v54[0x12] = 0; /*0x5c37e0*/
    BSStringT_Set((BSStringT *)&v54[0xC], v25, 0); /*0x5c37e4*/
    v26 = g_gameSetting_sHair.value; /*0x5c37e9*/
    v55 = COERCE_FLOAT(&v54[4]); /*0x5c37f3*/
    v59 = 7; /*0x5c37f8*/
    *(_DWORD *)&v54[4] = 0; /*0x5c3800*/
    *(_WORD *)&v54[8] = 0; /*0x5c3802*/
    *(_WORD *)&v54[0xA] = 0; /*0x5c3806*/
    BSStringT_Set((BSStringT *)&v54[4], v26, 0); /*0x5c380b*/
    v59 = 0xFFFFFFFF; /*0x5c3812*/
    v27 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[4], *(BSStringT *)&v54[0xC]); /*0x5c3816*/
    v55 = Tile_GetFloat(v27, *(int *)&v54[0x14]); /*0x5c3822*/
    v28 = dbl_A3DDD8; /*0x5c3845*/
    v56 = (_BYTE *)(int)(v55 * v28); /*0x5c384f*/
    HIBYTE(v29) = (_BYTE)v56; /*0x5c3858*/
    LODWORD(v57) = (int)(v57 * v28); /*0x5c387a*/
    LOBYTE(v29) = LOBYTE(v57); /*0x5c3882*/
    LODWORD(Float) = (int)(v28 * Float); /*0x5c38a5*/
    v30 = stru_B39330.value; /*0x5c38b1*/
    v31 = LOBYTE(Float) | (v29 << 8); /*0x5c38bc*/
    Float = COERCE_FLOAT(&v54[0x10]); /*0x5c38c0*/
    *(_QWORD *)&v54[0x10] = 0; /*0x5c38c6*/
    BSStringT_Set((BSStringT *)&v54[0x10], v30, 0); /*0x5c38d0*/
    v32 = g_gameSetting_sHair.value; /*0x5c38d5*/
    v57 = COERCE_FLOAT(&v54[8]); /*0x5c38df*/
    v59 = 8; /*0x5c38e5*/
    *(_DWORD *)&v54[8] = 0; /*0x5c38ed*/
    *(_WORD *)&v54[0xC] = 0; /*0x5c38ef*/
    *(_WORD *)&v54[0xE] = 0; /*0x5c38f3*/
    BSStringT_Set((BSStringT *)&v54[8], v32, 0); /*0x5c38f7*/
    v59 = 0xFFFFFFFF; /*0x5c38fe*/
    v33 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[8], *(BSStringT *)&v54[0x10]); /*0x5c3902*/
    Tile_SetFloat(v33, 0xFBBu, fConstant_2); /*0x5c3918*/
    v34 = stru_B39330.value; /*0x5c391d*/
    *(_DWORD *)&v54[0x14] = 0xFAE; /*0x5c3922*/
    Float = COERCE_FLOAT(&v54[0xC]); /*0x5c392a*/
    *(_DWORD *)&v54[0xC] = 0; /*0x5c3932*/
    *(_WORD *)&v54[0x10] = 0; /*0x5c3934*/
    *(_WORD *)&v54[0x12] = 0; /*0x5c3938*/
    BSStringT_Set((BSStringT *)&v54[0xC], v34, 0); /*0x5c393c*/
    v35 = g_gameSetting_sHair.value; /*0x5c3941*/
    v57 = COERCE_FLOAT(&v54[4]); /*0x5c394b*/
    v59 = 9; /*0x5c3951*/
    *(_DWORD *)&v54[4] = 0; /*0x5c3959*/
    *(_WORD *)&v54[8] = 0; /*0x5c395b*/
    *(_WORD *)&v54[0xA] = 0; /*0x5c395f*/
    BSStringT_Set((BSStringT *)&v54[4], v35, 0); /*0x5c3963*/
    v59 = 0xFFFFFFFF; /*0x5c396a*/
    v36 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[4], *(BSStringT *)&v54[0xC]); /*0x5c396e*/
    v37 = Tile_GetFloat(v36, *(int *)&v54[0x14]); /*0x5c3975*/
    if ( v31 == *(this + Double_To_SInt32(v37) + 0x23C) ) /*0x5c3986*/
    {
      v38 = stru_B39330.value; /*0x5c398c*/
      *(_DWORD *)&v54[0x14] = 0xFAE; /*0x5c3991*/
      Float = COERCE_FLOAT(&v54[0xC]); /*0x5c399b*/
      *(_DWORD *)&v54[0xC] = 0; /*0x5c39a1*/
      *(_WORD *)&v54[0x10] = 0; /*0x5c39a3*/
      *(_WORD *)&v54[0x12] = 0; /*0x5c39a7*/
      BSStringT_Set((BSStringT *)&v54[0xC], v38, 0); /*0x5c39ab*/
      v39 = g_gameSetting_sHair.value; /*0x5c39b0*/
      v57 = COERCE_FLOAT(&v54[4]); /*0x5c39ba*/
      v59 = 0xA; /*0x5c39c0*/
      *(_DWORD *)&v54[4] = 0; /*0x5c39c8*/
      *(_WORD *)&v54[8] = 0; /*0x5c39ca*/
      *(_WORD *)&v54[0xA] = 0; /*0x5c39ce*/
      BSStringT_Set((BSStringT *)&v54[4], v39, 0); /*0x5c39d2*/
      v59 = 0xFFFFFFFF; /*0x5c39d9*/
      v40 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[4], *(BSStringT *)&v54[0xC]); /*0x5c39dd*/
      v41 = Tile_GetFloat(v40, *(int *)&v54[0x14]); /*0x5c39e4*/
      *(_DWORD *)&v54[0x14] = *(this + 2 * Double_To_SInt32(v41) + 0x24C); /*0x5c39f7*/
      v42 = stru_B39330.value; /*0x5c39f8*/
      *(_DWORD *)&v54[0x10] = 0xFB4; /*0x5c39fd*/
      Float = COERCE_FLOAT(&v54[8]); /*0x5c3a07*/
      *(_DWORD *)&v54[8] = 0; /*0x5c3a0d*/
      *(_WORD *)&v54[0xC] = 0; /*0x5c3a0f*/
      *(_WORD *)&v54[0xE] = 0; /*0x5c3a13*/
      BSStringT_Set((BSStringT *)&v54[8], v42, 0); /*0x5c3a17*/
      v59 = 0xB; /*0x5c3a1c*/
    }
    else
    {
      *(_DWORD *)&v54[0x14] = stru_B394D8.value; /*0x5c3a2b*/
      v43 = stru_B39330.value; /*0x5c3a2c*/
      *(_DWORD *)&v54[0x10] = 0xFB4; /*0x5c3a31*/
      Float = COERCE_FLOAT(&v54[8]); /*0x5c3a3b*/
      *(_DWORD *)&v54[8] = 0; /*0x5c3a41*/
      *(_WORD *)&v54[0xC] = 0; /*0x5c3a43*/
      *(_WORD *)&v54[0xE] = 0; /*0x5c3a47*/
      BSStringT_Set((BSStringT *)&v54[8], v43, 0); /*0x5c3a4b*/
      v59 = 0xC; /*0x5c3a50*/
    }
    v44 = g_gameSetting_sHair.value; /*0x5c3a58*/
    v57 = COERCE_FLOAT(v54); /*0x5c3a62*/
    *(_DWORD *)v54 = 0; /*0x5c3a67*/
    *(_WORD *)&v54[4] = 0; /*0x5c3a69*/
    *(_WORD *)&v54[6] = 0; /*0x5c3a6e*/
    BSStringT_Set((BSStringT *)v54, v44, 0); /*0x5c3a72*/
    v59 = 0xFFFFFFFF; /*0x5c3a79*/
    v45 = RaceSexMenu_FindControlTile(this, *(BSStringT *)v54, *(BSStringT *)&v54[8]); /*0x5c3a7d*/
    Tile_SetString(v45, *(_DWORD **)&v54[0x10], *(char **)&v54[0x14]); /*0x5c3a84*/
    v46 = stru_B38FC0.value; /*0x5c3a89*/
    Float = COERCE_FLOAT(&v54[0x10]); /*0x5c3a93*/
    *(_QWORD *)&v54[0x10] = 0; /*0x5c3a99*/
    BSStringT_Set((BSStringT *)&v54[0x10], v46, 0); /*0x5c3aa3*/
    v47 = g_gameSetting_sHair.value; /*0x5c3aa8*/
    v57 = COERCE_FLOAT(&v54[8]); /*0x5c3ab2*/
    v59 = 0xD; /*0x5c3ab8*/
    *(_DWORD *)&v54[8] = 0; /*0x5c3ac0*/
    *(_WORD *)&v54[0xC] = 0; /*0x5c3ac2*/
    *(_WORD *)&v54[0xE] = 0; /*0x5c3ac6*/
    BSStringT_Set((BSStringT *)&v54[8], v47, 0); /*0x5c3aca*/
    v59 = 0xFFFFFFFF; /*0x5c3ad1*/
    v48 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[8], *(BSStringT *)&v54[0x10]); /*0x5c3ad5*/
    Tile_SetFloat(v48, 0xFBBu, fConstant_2); /*0x5c3aeb*/
    v49 = stru_B38FC8.value; /*0x5c3af0*/
    Float = COERCE_FLOAT(&v54[0x10]); /*0x5c3afa*/
    *(_QWORD *)&v54[0x10] = 0; /*0x5c3b00*/
    BSStringT_Set((BSStringT *)&v54[0x10], v49, 0); /*0x5c3b0a*/
    v50 = g_gameSetting_sHair.value; /*0x5c3b0f*/
    v57 = COERCE_FLOAT(&v54[8]); /*0x5c3b19*/
    v59 = 0xE; /*0x5c3b1f*/
    *(_DWORD *)&v54[8] = 0; /*0x5c3b27*/
    *(_WORD *)&v54[0xC] = 0; /*0x5c3b29*/
    *(_WORD *)&v54[0xE] = 0; /*0x5c3b2d*/
    BSStringT_Set((BSStringT *)&v54[8], v50, 0); /*0x5c3b31*/
    v59 = 0xFFFFFFFF; /*0x5c3b38*/
    v51 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[8], *(BSStringT *)&v54[0x10]); /*0x5c3b3c*/
    Tile_SetFloat(v51, 0xFBBu, fConstant_2); /*0x5c3b52*/
    v52 = stru_B38FD0.value; /*0x5c3b57*/
    Float = COERCE_FLOAT(&v54[0x10]); /*0x5c3b5f*/
    *(_QWORD *)&v54[0x10] = 0; /*0x5c3b67*/
    BSStringT_Set((BSStringT *)&v54[0x10], v52, 0); /*0x5c3b71*/
    v53 = g_gameSetting_sHair.value; /*0x5c3b76*/
    v57 = COERCE_FLOAT(&v54[8]); /*0x5c3b80*/
    v59 = 0xF; /*0x5c3b86*/
    *(_DWORD *)&v54[8] = 0; /*0x5c3b8e*/
    *(_WORD *)&v54[0xC] = 0; /*0x5c3b90*/
    *(_WORD *)&v54[0xE] = 0; /*0x5c3b94*/
    BSStringT_Set((BSStringT *)&v54[8], v53, 0); /*0x5c3b98*/
    v59 = 0xFFFFFFFF; /*0x5c3b9f*/
    v17 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&v54[8], *(BSStringT *)&v54[0x10]); /*0x5c3ba3*/
    v18 = fConstant_2; /*0x5c3ba8*/
  }
  *(float *)&v54[0x14] = v18; /*0x5c3baf*/
  Tile_SetFloat(v17, 0xFBBu, *(float *)&v54[0x14]); /*0x5c3bb9*/
}
