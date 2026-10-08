char __usercall sub_5CDEF0@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st0>, double a4@<st1>)
{
  int v5; // eax
  int v6; // ebp
  const char *value; // eax
  const char *v8; // eax
  Tile *ControlTile; // eax
  const char *v10; // eax
  const char *v11; // eax
  Tile *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  Tile *v15; // eax
  double v16; // rt0
  unsigned __int16 v17; // cx
  const char *v18; // eax
  const char *v19; // eax
  Tile *v20; // eax
  double v21; // st7
  const char *v22; // eax
  const char *v23; // eax
  Tile *v24; // eax
  double v25; // st7
  double v26; // st6
  const char *v27; // eax
  const char *v28; // eax
  Tile *v29; // eax
  double v30; // st7
  const char *v31; // eax
  const char *v32; // eax
  Tile *v33; // eax
  double v34; // st7
  int v35; // ebp
  const char *v36; // eax
  const char *v37; // eax
  Tile *v38; // eax
  double v39; // st7
  int v40; // ebp
  const char *v41; // eax
  const char *v42; // eax
  Tile *v43; // eax
  const char *v44; // eax
  const char *v45; // eax
  Tile *v46; // eax
  double v47; // st5
  double v48; // st6
  double v49; // st7
  const char *v50; // eax
  const char *v51; // eax
  Tile *v52; // eax
  double v53; // st7
  int v54; // eax
  const char *v55; // eax
  const char *v56; // eax
  Tile *v57; // eax
  double v58; // st7
  int v59; // eax
  BSStringT v61; // [esp-14h] [ebp-44h] BYREF
  BSStringT v62; // [esp-Ch] [ebp-3Ch] BYREF
  int v63; // [esp-4h] [ebp-34h]
  float v64; // [esp+14h] [ebp-1Ch]
  BSStringT *v65; // [esp+18h] [ebp-18h]
  float v66; // [esp+1Ch] [ebp-14h]
  float Float; // [esp+20h] [ebp-10h]
  int v68; // [esp+2Ch] [ebp-4h]

  v5 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))reference->vtbl->super.super.super.GetBaseForm)( /*0x5cdf27*/
         reference,
         a3,
         a4,
         a2);
  v63 = 0xFAE; /*0x5cdf29*/
  Float = COERCE_FLOAT(&v62); /*0x5cdf35*/
  v6 = v5; /*0x5cdf39*/
  value = stru_B38FC0.value; /*0x5cdf3b*/
  v62.m_data = 0; /*0x5cdf42*/
  v62.m_dataLen = 0; /*0x5cdf44*/
  v62.m_bufLen = 0; /*0x5cdf48*/
  BSStringT_Set(&v62, value, 0); /*0x5cdf4c*/
  v8 = g_gameSetting_sHair.value; /*0x5cdf51*/
  v66 = COERCE_FLOAT(&v61); /*0x5cdf5b*/
  v68 = 0; /*0x5cdf61*/
  v61.m_data = 0; /*0x5cdf65*/
  v61.m_dataLen = 0; /*0x5cdf67*/
  v61.m_bufLen = 0; /*0x5cdf6b*/
  BSStringT_Set(&v61, v8, 0); /*0x5cdf6f*/
  v68 = 0xFFFFFFFF; /*0x5cdf79*/
  ControlTile = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5cdf7d*/
  Float = Tile_GetFloat(ControlTile, v63); /*0x5cdf89*/
  v10 = stru_B38FC8.value; /*0x5cdf8d*/
  v63 = 0xFAE; /*0x5cdf92*/
  v66 = COERCE_FLOAT(&v62); /*0x5cdf9c*/
  v62.m_data = 0; /*0x5cdfa2*/
  v62.m_dataLen = 0; /*0x5cdfa4*/
  v62.m_bufLen = 0; /*0x5cdfa8*/
  BSStringT_Set(&v62, v10, 0); /*0x5cdfac*/
  v11 = g_gameSetting_sHair.value; /*0x5cdfb1*/
  v65 = &v61; /*0x5cdfbb*/
  v68 = 1; /*0x5cdfc1*/
  v61.m_data = 0; /*0x5cdfc9*/
  v61.m_dataLen = 0; /*0x5cdfcb*/
  v61.m_bufLen = 0; /*0x5cdfcf*/
  BSStringT_Set(&v61, v11, 0); /*0x5cdfd3*/
  v68 = 0xFFFFFFFF; /*0x5cdfda*/
  v12 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5cdfde*/
  v66 = Tile_GetFloat(v12, v63); /*0x5cdfea*/
  v13 = stru_B38FD0.value; /*0x5cdfee*/
  v63 = 0xFAE; /*0x5cdff3*/
  v65 = &v62; /*0x5cdffd*/
  v62.m_data = 0; /*0x5ce003*/
  v62.m_dataLen = 0; /*0x5ce005*/
  v62.m_bufLen = 0; /*0x5ce009*/
  BSStringT_Set(&v62, v13, 0); /*0x5ce00d*/
  v14 = g_gameSetting_sHair.value; /*0x5ce012*/
  v68 = 2; /*0x5ce01a*/
  v64 = COERCE_FLOAT(&v61); /*0x5ce022*/
  v61.m_data = 0; /*0x5ce02a*/
  v61.m_dataLen = 0; /*0x5ce02c*/
  v61.m_bufLen = 0; /*0x5ce030*/
  BSStringT_Set(&v61, v14, 0); /*0x5ce034*/
  v68 = 0xFFFFFFFF; /*0x5ce03b*/
  v15 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5ce03f*/
  v64 = Tile_GetFloat(v15, v63); /*0x5ce04b*/
  v16 = dbl_A3DDD8; /*0x5ce06b*/
  v65 = (BSStringT *)(int)(v64 * v16); /*0x5ce075*/
  HIBYTE(v17) = (_BYTE)v65; /*0x5ce07e*/
  LODWORD(v66) = (int)(v66 * v16); /*0x5ce0a0*/
  LOBYTE(v17) = LOBYTE(v66); /*0x5ce0a8*/
  LODWORD(Float) = (int)(v16 * Float); /*0x5ce0cb*/
  if ( (LOBYTE(Float) | (v17 << 8)) != *(_DWORD *)(v6 + 0x1E8) ) /*0x5ce0e5*/
    sub_5C5C30((_DWORD *)a1, 1); /*0x5ce0eb*/
  v18 = g_gameSetting_sLength.value; /*0x5ce0f0*/
  v63 = 0xFAE; /*0x5ce0f5*/
  Float = COERCE_FLOAT(&v62); /*0x5ce0ff*/
  v62.m_data = 0; /*0x5ce105*/
  v62.m_dataLen = 0; /*0x5ce107*/
  v62.m_bufLen = 0; /*0x5ce10b*/
  BSStringT_Set(&v62, v18, 0); /*0x5ce10f*/
  v19 = g_gameSetting_sHair.value; /*0x5ce114*/
  v66 = COERCE_FLOAT(&v61); /*0x5ce11e*/
  v68 = 3; /*0x5ce124*/
  v61.m_data = 0; /*0x5ce12c*/
  v61.m_dataLen = 0; /*0x5ce12e*/
  v61.m_bufLen = 0; /*0x5ce132*/
  BSStringT_Set(&v61, v19, 0); /*0x5ce136*/
  v68 = 0xFFFFFFFF; /*0x5ce13d*/
  v20 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5ce141*/
  Float = *(float *)(v6 + 0x1CC); /*0x5ce14e*/
  v21 = Tile_GetFloat(v20, v63); /*0x5ce152*/
  if ( Float != v21 ) /*0x5ce162*/
    RaceSexMenu_CommitHairLengthSlider((void *)a1); /*0x5ce166*/
  v22 = stru_B39330.value; /*0x5ce16b*/
  v63 = 0xFAE; /*0x5ce170*/
  Float = COERCE_FLOAT(&v62); /*0x5ce17a*/
  v62.m_data = 0; /*0x5ce180*/
  v62.m_dataLen = 0; /*0x5ce182*/
  v62.m_bufLen = 0; /*0x5ce186*/
  BSStringT_Set(&v62, v22, 0); /*0x5ce18a*/
  v23 = g_gameSetting_sHair.value; /*0x5ce18f*/
  v66 = COERCE_FLOAT(&v61); /*0x5ce199*/
  v68 = 4; /*0x5ce19f*/
  v61.m_data = 0; /*0x5ce1a7*/
  v61.m_dataLen = 0; /*0x5ce1a9*/
  v61.m_bufLen = 0; /*0x5ce1ad*/
  BSStringT_Set(&v61, v23, 0); /*0x5ce1b1*/
  v68 = 0xFFFFFFFF; /*0x5ce1b8*/
  v24 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5ce1bc*/
  v25 = Tile_GetFloat(v24, v63); /*0x5ce1c3*/
  v26 = (double)*(int *)(a1 + 0x88C); /*0x5ce1c8*/
  if ( v26 != v25 ) /*0x5ce1d5*/
  {
    sub_5C5F00((_DWORD *)a1); /*0x5ce1d9*/
    v27 = stru_B39330.value; /*0x5ce1de*/
    v63 = 0xFAE; /*0x5ce1e3*/
    Float = COERCE_FLOAT(&v62); /*0x5ce1ed*/
    v62.m_data = 0; /*0x5ce1f3*/
    v62.m_dataLen = 0; /*0x5ce1f5*/
    v62.m_bufLen = 0; /*0x5ce1f9*/
    BSStringT_Set(&v62, v27, 0); /*0x5ce1fd*/
    v28 = g_gameSetting_sHair.value; /*0x5ce202*/
    v66 = COERCE_FLOAT(&v61); /*0x5ce20c*/
    v68 = 5; /*0x5ce212*/
    v61.m_data = 0; /*0x5ce21a*/
    v61.m_dataLen = 0; /*0x5ce21c*/
    v61.m_bufLen = 0; /*0x5ce220*/
    BSStringT_Set(&v61, v28, 0); /*0x5ce224*/
    v68 = 0xFFFFFFFF; /*0x5ce22b*/
    v29 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5ce22f*/
    v30 = Tile_GetFloat(v29, v63); /*0x5ce236*/
    *(_DWORD *)(a1 + 0x88C) = Double_To_SInt32(v30); /*0x5ce240*/
  }
  v31 = stru_B38F78.value; /*0x5ce246*/
  v63 = 0xFAE; /*0x5ce24b*/
  Float = COERCE_FLOAT(&v62); /*0x5ce255*/
  v62.m_data = 0; /*0x5ce25b*/
  v62.m_dataLen = 0; /*0x5ce25d*/
  v62.m_bufLen = 0; /*0x5ce261*/
  BSStringT_Set(&v62, v31, 0); /*0x5ce265*/
  v32 = stru_B38F78.value; /*0x5ce26a*/
  v66 = COERCE_FLOAT(&v61); /*0x5ce274*/
  v68 = 6; /*0x5ce27a*/
  v61.m_data = 0; /*0x5ce282*/
  v61.m_dataLen = 0; /*0x5ce284*/
  v61.m_bufLen = 0; /*0x5ce288*/
  BSStringT_Set(&v61, v32, 0); /*0x5ce28c*/
  v68 = 0xFFFFFFFF; /*0x5ce293*/
  v33 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5ce297*/
  v34 = Tile_GetFloat(v33, v63); /*0x5ce29e*/
  v35 = Double_To_SInt32(v34); /*0x5ce2a8*/
  if ( v35 != *(_DWORD *)(a1 + 0x86C) ) /*0x5ce2b0*/
  {
    sub_5CDA30((float *)a1, a2, v26, v34); /*0x5ce2b4*/
    *(_DWORD *)(a1 + 0x86C) = v35; /*0x5ce2b9*/
  }
  v36 = stru_B38FA8.value; /*0x5ce2bf*/
  v63 = 0xFAE; /*0x5ce2c4*/
  Float = COERCE_FLOAT(&v62); /*0x5ce2ce*/
  v62.m_data = 0; /*0x5ce2d4*/
  v62.m_dataLen = 0; /*0x5ce2d6*/
  v62.m_bufLen = 0; /*0x5ce2da*/
  BSStringT_Set(&v62, v36, 0); /*0x5ce2de*/
  v37 = stru_B38F78.value; /*0x5ce2e3*/
  v66 = COERCE_FLOAT(&v61); /*0x5ce2ed*/
  v68 = 7; /*0x5ce2f3*/
  v61.m_data = 0; /*0x5ce2fb*/
  v61.m_dataLen = 0; /*0x5ce2fd*/
  v61.m_bufLen = 0; /*0x5ce301*/
  BSStringT_Set(&v61, v37, 0); /*0x5ce305*/
  v68 = 0xFFFFFFFF; /*0x5ce30c*/
  v38 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5ce310*/
  v39 = Tile_GetFloat(v38, v63); /*0x5ce317*/
  v40 = Double_To_SInt32(v39); /*0x5ce321*/
  if ( v40 != *(unsigned __int8 *)(a1 + 0x868) ) /*0x5ce32c*/
  {
    sub_5C9770((float *)a1, a2, v26, v39); /*0x5ce330*/
    *(_BYTE *)(a1 + 0x868) = v40 > 0; /*0x5ce33a*/
  }
  v41 = g_gameSetting_sAge.value; /*0x5ce340*/
  v63 = 0xFAE; /*0x5ce345*/
  Float = COERCE_FLOAT(&v62); /*0x5ce34f*/
  v62.m_data = 0; /*0x5ce355*/
  v62.m_dataLen = 0; /*0x5ce357*/
  v62.m_bufLen = 0; /*0x5ce35b*/
  BSStringT_Set(&v62, v41, 0); /*0x5ce35f*/
  v42 = g_gameSetting_sMain.value; /*0x5ce364*/
  v66 = COERCE_FLOAT(&v61); /*0x5ce36e*/
  v68 = 8; /*0x5ce374*/
  v61.m_data = 0; /*0x5ce37c*/
  v61.m_dataLen = 0; /*0x5ce37e*/
  v61.m_bufLen = 0; /*0x5ce382*/
  BSStringT_Set(&v61, v42, 0); /*0x5ce386*/
  v68 = 0xFFFFFFFF; /*0x5ce38d*/
  v43 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5ce391*/
  Float = Tile_GetFloat(v43, v63); /*0x5ce39d*/
  v44 = g_gameSetting_sComplexion.value; /*0x5ce3a1*/
  v63 = 0xFAE; /*0x5ce3a6*/
  v66 = COERCE_FLOAT(&v62); /*0x5ce3b0*/
  v62.m_data = 0; /*0x5ce3b6*/
  v62.m_dataLen = 0; /*0x5ce3b8*/
  v62.m_bufLen = 0; /*0x5ce3bc*/
  BSStringT_Set(&v62, v44, 0); /*0x5ce3c0*/
  v45 = g_gameSetting_sMain.value; /*0x5ce3c5*/
  v65 = &v61; /*0x5ce3cf*/
  v68 = 9; /*0x5ce3d5*/
  v61.m_data = 0; /*0x5ce3dd*/
  v61.m_dataLen = 0; /*0x5ce3df*/
  v61.m_bufLen = 0; /*0x5ce3e3*/
  BSStringT_Set(&v61, v45, 0); /*0x5ce3e7*/
  v68 = 0xFFFFFFFF; /*0x5ce3ee*/
  v46 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5ce3f2*/
  v66 = Tile_GetFloat(v46, v63); /*0x5ce3fe*/
  v47 = *(float *)(a1 + 0x880); /*0x5ce408*/
  v48 = v66; /*0x5ce412*/
  if ( v47 != Float || (v47 = v66, *(float *)(a1 + 0x884) != v48) ) /*0x5ce42a*/
  {
    v48 = Float; /*0x5ce42c*/
    v49 = v66; /*0x5ce42c*/
    LOBYTE(v63) = 0; /*0x5ce42e*/
    *(float *)(a1 + 0x880) = Float; /*0x5ce42f*/
    *(float *)(a1 + 0x884) = v49; /*0x5ce437*/
    sub_5C50A0((_DWORD *)a1, v63); /*0x5ce43d*/
    sub_5C7070(1); /*0x5ce444*/
    UpdatePlayerHead(v47, v48, v49); /*0x5ce44c*/
  }
  v50 = stru_B38F90.value; /*0x5ce457*/
  v63 = 0xFAE; /*0x5ce45c*/
  Float = COERCE_FLOAT(&v62); /*0x5ce466*/
  v62.m_data = 0; /*0x5ce46c*/
  v62.m_dataLen = 0; /*0x5ce46e*/
  v62.m_bufLen = 0; /*0x5ce472*/
  BSStringT_Set(&v62, v50, 0); /*0x5ce476*/
  v51 = g_gameSetting_sMain.value; /*0x5ce47b*/
  v66 = COERCE_FLOAT(&v61); /*0x5ce485*/
  v68 = 0xA; /*0x5ce48b*/
  v61.m_data = 0; /*0x5ce493*/
  v61.m_dataLen = 0; /*0x5ce495*/
  v61.m_bufLen = 0; /*0x5ce499*/
  BSStringT_Set(&v61, v51, 0); /*0x5ce49d*/
  v68 = 0xFFFFFFFF; /*0x5ce4a4*/
  v52 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5ce4a8*/
  v53 = Tile_GetFloat(v52, v63); /*0x5ce4af*/
  v54 = Double_To_SInt32(v53); /*0x5ce4b4*/
  if ( v54 != *(_DWORD *)(a1 + 0x87C) ) /*0x5ce4bf*/
  {
    LOBYTE(v63) = 1; /*0x5ce4c1*/
    *(_DWORD *)(a1 + 0x87C) = v54; /*0x5ce4c5*/
    sub_5C9980((_DWORD *)a1, v63); /*0x5ce4cb*/
  }
  v55 = stru_B38FB8.value; /*0x5ce4d0*/
  v63 = 0xFAE; /*0x5ce4d5*/
  Float = COERCE_FLOAT(&v62); /*0x5ce4df*/
  v62.m_data = 0; /*0x5ce4e5*/
  v62.m_dataLen = 0; /*0x5ce4e7*/
  v62.m_bufLen = 0; /*0x5ce4eb*/
  BSStringT_Set(&v62, v55, 0); /*0x5ce4ef*/
  v56 = g_gameSetting_sHair.value; /*0x5ce4f4*/
  v66 = COERCE_FLOAT(&v61); /*0x5ce4fe*/
  v68 = 0xB; /*0x5ce504*/
  v61.m_data = 0; /*0x5ce50c*/
  v61.m_dataLen = 0; /*0x5ce50e*/
  v61.m_bufLen = 0; /*0x5ce512*/
  BSStringT_Set(&v61, v56, 0); /*0x5ce516*/
  v68 = 0xFFFFFFFF; /*0x5ce51d*/
  v57 = RaceSexMenu_FindControlTile((void *)a1, v61, v62); /*0x5ce521*/
  v58 = Tile_GetFloat(v57, v63); /*0x5ce528*/
  v59 = Double_To_SInt32(v58); /*0x5ce52d*/
  if ( v59 != *(_DWORD *)(a1 + 0x870) ) /*0x5ce538*/
  {
    *(_DWORD *)(a1 + 0x870) = v59; /*0x5ce53c*/
    sub_5C5B00((_DWORD *)a1); /*0x5ce542*/
  }
  return sub_5C9BA0((_DWORD *)a1, v48, v58); /*0x5ce54e*/
}
