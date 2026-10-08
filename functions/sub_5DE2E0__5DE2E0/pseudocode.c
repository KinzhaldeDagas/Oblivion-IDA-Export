void __thiscall sub_5DE2E0(int this)
{
  char **v2; // eax
  char *v3; // eax
  char **v4; // eax
  char *v5; // eax
  char **v6; // eax
  char *v7; // eax
  char **v8; // eax
  char *v9; // eax
  double v10; // st6
  double v11; // st7
  double v12; // rt2
  double v13; // st6
  double v14; // st7
  double v15; // st5
  double v16; // st6
  double v17; // st7
  double v18; // rt0
  double v19; // st5
  double v20; // rt2
  double v21; // st6
  double v22; // st7
  double v23; // st5
  double v24; // st6
  double v25; // st7
  double v26; // rt0
  double v27; // st5
  double v28; // rt2
  double v29; // st6
  double v30; // st7
  double v31; // st5
  double v32; // st6
  double v33; // st7
  double v34; // rt0
  double v35; // st5
  double v36; // rt2
  double v37; // st6
  double v38; // st7
  double v39; // st5
  double v40; // st7
  double v41; // st6
  double v42; // rtt
  double v43; // st5
  double v44; // st7
  double v45; // st6
  double v46; // st5
  double v47; // st6
  double v48; // st7
  double v49; // rt2
  double v50; // st6
  double v51; // st7
  double v52; // st5
  double v53; // rtt
  double v54; // st5
  float a2; // [esp+0h] [ebp-Ch]
  float a2a; // [esp+0h] [ebp-Ch]
  float v57; // [esp+8h] [ebp-4h]
  float v58; // [esp+8h] [ebp-4h]
  float v59; // [esp+8h] [ebp-4h]
  float v60; // [esp+8h] [ebp-4h]
  float v61; // [esp+8h] [ebp-4h]
  float v62; // [esp+8h] [ebp-4h]
  float v63; // [esp+8h] [ebp-4h]
  float v64; // [esp+8h] [ebp-4h]
  float v65; // [esp+8h] [ebp-4h]
  float v66; // [esp+8h] [ebp-4h]
  float v67; // [esp+8h] [ebp-4h]
  float v68; // [esp+8h] [ebp-4h]
  float v69; // [esp+8h] [ebp-4h]
  float v70; // [esp+8h] [ebp-4h]
  float v71; // [esp+8h] [ebp-4h]
  float v72; // [esp+8h] [ebp-4h]
  float v73; // [esp+8h] [ebp-4h]
  float v74; // [esp+8h] [ebp-4h]
  float v75; // [esp+8h] [ebp-4h]
  float v76; // [esp+8h] [ebp-4h]

  v2 = *(char ***)(4 * *(_DWORD *)(this + 0xEC) + 0xB147D8); /*0x5de2ea*/
  if ( v2 ) /*0x5de2f3*/
    v3 = *v2; /*0x5de2f5*/
  else
    v3 = 0; /*0x5de2f9*/
  Tile_SetString(*(_DWORD **)(this + 0x74), (_DWORD *)0xFDE, v3); /*0x5de304*/
  v4 = *(char ***)(4 * *(_DWORD *)(this + 0xF0) + 0xB147E4); /*0x5de30f*/
  if ( v4 ) /*0x5de318*/
    v5 = *v4; /*0x5de31a*/
  else
    v5 = 0; /*0x5de31e*/
  Tile_SetString(*(_DWORD **)(this + 0xD0), (_DWORD *)0xFDE, v5); /*0x5de32c*/
  v6 = *(char ***)(4 * *(_DWORD *)(this + 0xF8) + 0xB147F0); /*0x5de337*/
  if ( v6 ) /*0x5de340*/
    v7 = *v6; /*0x5de342*/
  else
    v7 = 0; /*0x5de346*/
  Tile_SetString(*(_DWORD **)(this + 0xC0), (_DWORD *)0xFDE, v7); /*0x5de354*/
  v8 = *(char ***)(4 * *(_DWORD *)(this + 0xF4) + 0xB147E4); /*0x5de35f*/
  if ( v8 ) /*0x5de368*/
    v9 = *v8; /*0x5de36a*/
  else
    v9 = 0; /*0x5de36e*/
  Tile_SetString(*(_DWORD **)(this + 0xE4), (_DWORD *)0xFDE, v9); /*0x5de37c*/
  Tile_SetFloat(*(Tile **)(this + 0x54), 0xFB3u, flt_A6B328); /*0x5de393*/
  if ( flt_B0760C >= (double)aGIJ ) /*0x5de3ab*/
  {
    v57 = flt_B0760C; /*0x5de3b5*/
    v10 = aGIJ; /*0x5de3b9*/
    v11 = v57; /*0x5de3b9*/
  }
  else
  {
    v10 = aGIJ; /*0x5de3ad*/
    v11 = flt_B0760C; /*0x5de3ad*/
    v57 = aGIJ; /*0x5de3af*/
  }
  if ( v57 <= (double)flt_B1480C ) /*0x5de3cc*/
  {
    v15 = v10; /*0x5de3d8*/
    v13 = flt_B1480C; /*0x5de3d8*/
    if ( v15 <= v11 ) /*0x5de3e1*/
    {
      v18 = v15; /*0x5de45f*/
      v19 = v11; /*0x5de45f*/
      v14 = v18; /*0x5de45f*/
      v58 = v19; /*0x5de461*/
    }
    else
    {
      v58 = v15; /*0x5de3e7*/
      v14 = v15; /*0x5de3eb*/
    }
  }
  else
  {
    v12 = v10; /*0x5de3d0*/
    v13 = flt_B1480C; /*0x5de3d0*/
    v14 = v12; /*0x5de3d0*/
    v58 = flt_B1480C; /*0x5de3d2*/
  }
  v59 = (v58 - v14) / (v13 - v14) * fCostant_100; /*0x5de403*/
  Tile_SetFloat(*(Tile **)(this + 0x54), 0xFB3u, v59); /*0x5de413*/
  Tile_SetFloat(*(Tile **)(this + 0x54), 0xFB3u, 0.0); /*0x5de426*/
  Tile_SetFloat(*(Tile **)(this + 0x5C), 0xFB3u, flt_A6B328); /*0x5de43d*/
  if ( SettingLODFadeOutMultActors >= (double)flt_B1481C ) /*0x5de455*/
  {
    v60 = SettingLODFadeOutMultActors; /*0x5de467*/
    v16 = flt_B1481C; /*0x5de46b*/
    v17 = v60; /*0x5de46b*/
  }
  else
  {
    v16 = flt_B1481C; /*0x5de457*/
    v17 = SettingLODFadeOutMultActors; /*0x5de457*/
    v60 = flt_B1481C; /*0x5de459*/
  }
  if ( v60 <= (double)flt_B14824 ) /*0x5de47e*/
  {
    v23 = v16; /*0x5de48a*/
    v21 = flt_B14824; /*0x5de48a*/
    if ( v23 <= v17 ) /*0x5de493*/
    {
      v26 = v23; /*0x5de511*/
      v27 = v17; /*0x5de511*/
      v22 = v26; /*0x5de511*/
      v61 = v27; /*0x5de513*/
    }
    else
    {
      v61 = v23; /*0x5de499*/
      v22 = v23; /*0x5de49d*/
    }
  }
  else
  {
    v20 = v16; /*0x5de482*/
    v21 = flt_B14824; /*0x5de482*/
    v22 = v20; /*0x5de482*/
    v61 = flt_B14824; /*0x5de484*/
  }
  v62 = (v61 - v22) / (v21 - v22) * fCostant_100; /*0x5de4b5*/
  Tile_SetFloat(*(Tile **)(this + 0x5C), 0xFB3u, v62); /*0x5de4c5*/
  Tile_SetFloat(*(Tile **)(this + 0x5C), 0xFB3u, 0.0); /*0x5de4d8*/
  Tile_SetFloat(*(Tile **)(this + 0x64), 0xFB3u, flt_A6B328); /*0x5de4ef*/
  if ( SettingLODFadeOutMultItems >= (double)flt_B14834 ) /*0x5de507*/
  {
    v63 = SettingLODFadeOutMultItems; /*0x5de519*/
    v24 = flt_B14834; /*0x5de51d*/
    v25 = v63; /*0x5de51d*/
  }
  else
  {
    v24 = flt_B14834; /*0x5de509*/
    v25 = SettingLODFadeOutMultItems; /*0x5de509*/
    v63 = flt_B14834; /*0x5de50b*/
  }
  if ( v63 <= (double)flt_B1483C ) /*0x5de530*/
  {
    v31 = v24; /*0x5de53c*/
    v29 = flt_B1483C; /*0x5de53c*/
    if ( v31 <= v25 ) /*0x5de545*/
    {
      v34 = v31; /*0x5de5c3*/
      v35 = v25; /*0x5de5c3*/
      v30 = v34; /*0x5de5c3*/
      v64 = v35; /*0x5de5c5*/
    }
    else
    {
      v64 = v31; /*0x5de54b*/
      v30 = v31; /*0x5de54f*/
    }
  }
  else
  {
    v28 = v24; /*0x5de534*/
    v29 = flt_B1483C; /*0x5de534*/
    v30 = v28; /*0x5de534*/
    v64 = flt_B1483C; /*0x5de536*/
  }
  v65 = (v64 - v30) / (v29 - v30) * fCostant_100; /*0x5de567*/
  Tile_SetFloat(*(Tile **)(this + 0x64), 0xFB3u, v65); /*0x5de577*/
  Tile_SetFloat(*(Tile **)(this + 0x64), 0xFB3u, 0.0); /*0x5de58a*/
  Tile_SetFloat(*(Tile **)(this + 0x6C), 0xFB3u, flt_A6B328); /*0x5de5a1*/
  if ( SettingLODFadeOutMultObjects >= (double)flt_B1484C ) /*0x5de5b9*/
  {
    v66 = SettingLODFadeOutMultObjects; /*0x5de5cb*/
    v32 = flt_B1484C; /*0x5de5cf*/
    v33 = v66; /*0x5de5cf*/
  }
  else
  {
    v32 = flt_B1484C; /*0x5de5bb*/
    v33 = SettingLODFadeOutMultObjects; /*0x5de5bb*/
    v66 = flt_B1484C; /*0x5de5bd*/
  }
  if ( v66 <= (double)flt_B14854 ) /*0x5de5e2*/
  {
    v39 = v32; /*0x5de5ee*/
    v37 = flt_B14854; /*0x5de5ee*/
    if ( v39 <= v33 ) /*0x5de5f7*/
    {
      v42 = v39; /*0x5de67d*/
      v43 = v33; /*0x5de67d*/
      v38 = v42; /*0x5de67d*/
      v67 = v43; /*0x5de67f*/
    }
    else
    {
      v67 = v39; /*0x5de601*/
      v38 = v39; /*0x5de605*/
    }
  }
  else
  {
    v36 = v32; /*0x5de5e6*/
    v37 = flt_B14854; /*0x5de5e6*/
    v38 = v36; /*0x5de5e6*/
    v67 = flt_B14854; /*0x5de5e8*/
  }
  v68 = (v67 - v38) / (v37 - v38) * fCostant_100; /*0x5de61d*/
  Tile_SetFloat(*(Tile **)(this + 0x6C), 0xFB3u, v68); /*0x5de62d*/
  Tile_SetFloat(*(Tile **)(this + 0x6C), 0xFB3u, 0.0); /*0x5de640*/
  Tile_SetFloat(*(Tile **)(this + 0x7C), 0xFB3u, flt_A6B328); /*0x5de657*/
  v40 = SettingGrassEndDistance; /*0x5de65c*/
  v41 = dbl_A6BEA0; /*0x5de662*/
  if ( v41 <= v40 ) /*0x5de675*/
    v69 = SettingGrassEndDistance; /*0x5de687*/
  else
    v69 = flt_A57A64; /*0x5de677*/
  if ( v69 <= dbl_A6DD18 ) /*0x5de69c*/
  {
    v46 = v41; /*0x5de6aa*/
    v45 = flt_A57A64; /*0x5de6aa*/
    if ( v46 <= v40 ) /*0x5de6b3*/
      v45 = SettingGrassEndDistance; /*0x5de6bb*/
    v44 = v46; /*0x5de6b5*/
  }
  else
  {
    v44 = v41; /*0x5de6a0*/
    v45 = flt_A6DD10; /*0x5de6a2*/
  }
  v70 = v45; /*0x5de6bd*/
  v71 = (v70 - v44) / dbl_A6DD08 * fCostant_100; /*0x5de6d5*/
  Tile_SetFloat(*(Tile **)(this + 0x7C), 0xFB3u, v71); /*0x5de6e5*/
  Tile_SetFloat(*(Tile **)(this + 0x7C), 0xFB3u, 0.0); /*0x5de6f8*/
  Tile_SetFloat(*(Tile **)(this + 0xA4), 0xFB3u, flt_A6B328); /*0x5de712*/
  a2 = (float)(int)g_iActorShadowCountInteriorSetting; /*0x5de724*/
  Tile_SetFloat(*(Tile **)(this + 0xA4), 0xFB3u, a2); /*0x5de72c*/
  Tile_SetFloat(*(Tile **)(this + 0xA4), 0xFB3u, 0.0); /*0x5de742*/
  Tile_SetFloat(*(Tile **)(this + 0xAC), 0xFB3u, flt_A6B328); /*0x5de75c*/
  a2a = (float)(int)g_iActorShadowCountExteriorSetting; /*0x5de76e*/
  Tile_SetFloat(*(Tile **)(this + 0xAC), 0xFB3u, a2a); /*0x5de776*/
  Tile_SetFloat(*(Tile **)(this + 0xAC), 0xFB3u, 0.0); /*0x5de78c*/
  Tile_SetFloat(*(Tile **)(this + 0xB4), 0xFB3u, flt_A6B328); /*0x5de7a6*/
  if ( *(float *)&OB_RendererGlobalState_010201A0[0x1F3] >= (double)flt_B1488C ) /*0x5de7be*/
  {
    v72 = *(float *)&OB_RendererGlobalState_010201A0[0x1F3]; /*0x5de7c8*/
    v47 = flt_B1488C; /*0x5de7cc*/
    v48 = v72; /*0x5de7cc*/
  }
  else
  {
    v47 = flt_B1488C; /*0x5de7c0*/
    v48 = *(float *)&OB_RendererGlobalState_010201A0[0x1F3]; /*0x5de7c0*/
    v72 = flt_B1488C; /*0x5de7c2*/
  }
  if ( v72 <= (double)flt_B14894 ) /*0x5de7df*/
  {
    v52 = v47; /*0x5de7eb*/
    v50 = flt_B14894; /*0x5de7eb*/
    if ( v52 <= v48 ) /*0x5de7f4*/
    {
      v53 = v52; /*0x5de90a*/
      v54 = v48; /*0x5de90a*/
      v51 = v53; /*0x5de90a*/
      v73 = v54; /*0x5de90c*/
    }
    else
    {
      v73 = v52; /*0x5de7fe*/
      v51 = v52; /*0x5de802*/
    }
  }
  else
  {
    v49 = v47; /*0x5de7e3*/
    v50 = flt_B14894; /*0x5de7e3*/
    v51 = v49; /*0x5de7e3*/
    v73 = flt_B14894; /*0x5de7e5*/
  }
  v74 = (v73 - v51) / (v50 - v51) * fCostant_100; /*0x5de81d*/
  Tile_SetFloat(*(Tile **)(this + 0xB4), 0xFB3u, v74); /*0x5de82d*/
  Tile_SetFloat(*(Tile **)(this + 0xB4), 0xFB3u, 0.0); /*0x5de843*/
  Tile_SetFloat(*(Tile **)(this + 0x94), 0xFB3u, flt_A6B328); /*0x5de85d*/
  v75 = (flt_B0312C - dbl_A2FC68) * fCostant_100; /*0x5de87b*/
  Tile_SetFloat(*(Tile **)(this + 0x94), 0xFB3u, v75); /*0x5de88b*/
  Tile_SetFloat(*(Tile **)(this + 0x94), 0xFB3u, 0.0); /*0x5de8a1*/
  Tile_SetFloat(*(Tile **)(this + 0x38), 0xFB3u, flt_A6B328); /*0x5de8b8*/
  v76 = (flt_B06F64 - flt_B1485C) / (flt_B14864 - flt_B1485C) * fCostant_100; /*0x5de8df*/
  Tile_SetFloat(*(Tile **)(this + 0x38), 0xFB3u, v76); /*0x5de8ef*/
  Tile_SetFloat(*(Tile **)(this + 0x38), 0xFB3u, 0.0); /*0x5de902*/
}
