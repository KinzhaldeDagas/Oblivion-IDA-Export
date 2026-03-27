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

  v2 = *(char ***)(4 * *(_DWORD *)(this + 0xEC) + 0xB147D8);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  Tile_SetString(*(_DWORD **)(this + 0x74), (_DWORD *)0xFDE, v3);
  v4 = *(char ***)(4 * *(_DWORD *)(this + 0xF0) + 0xB147E4);
  if ( v4 )
    v5 = *v4;
  else
    v5 = 0;
  Tile_SetString(*(_DWORD **)(this + 0xD0), (_DWORD *)0xFDE, v5);
  v6 = *(char ***)(4 * *(_DWORD *)(this + 0xF8) + 0xB147F0);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0;
  Tile_SetString(*(_DWORD **)(this + 0xC0), (_DWORD *)0xFDE, v7);
  v8 = *(char ***)(4 * *(_DWORD *)(this + 0xF4) + 0xB147E4);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0;
  Tile_SetString(*(_DWORD **)(this + 0xE4), (_DWORD *)0xFDE, v9);
  Tile_SetFloat(*(Tile **)(this + 0x54), (_DWORD *)0xFB3, flt_A6B328);
  if ( flt_B0760C >= (double)aGIJ )
  {
    v57 = flt_B0760C;
    v10 = aGIJ;
    v11 = v57;
  }
  else
  {
    v10 = aGIJ;
    v11 = flt_B0760C;
    v57 = aGIJ;
  }
  if ( v57 <= (double)flt_B1480C )
  {
    v15 = v10;
    v13 = flt_B1480C;
    if ( v15 <= v11 )
    {
      v18 = v15;
      v19 = v11;
      v14 = v18;
      v58 = v19;
    }
    else
    {
      v58 = v15;
      v14 = v15;
    }
  }
  else
  {
    v12 = v10;
    v13 = flt_B1480C;
    v14 = v12;
    v58 = flt_B1480C;
  }
  v59 = (v58 - v14) / (v13 - v14) * fCostant_100;
  Tile_SetFloat(*(Tile **)(this + 0x54), (_DWORD *)0xFB3, v59);
  Tile_SetFloat(*(Tile **)(this + 0x54), (_DWORD *)0xFB3, 0.0);
  Tile_SetFloat(*(Tile **)(this + 0x5C), (_DWORD *)0xFB3, flt_A6B328);
  if ( SettingLODFadeOutMultActors >= (double)flt_B1481C )
  {
    v60 = SettingLODFadeOutMultActors;
    v16 = flt_B1481C;
    v17 = v60;
  }
  else
  {
    v16 = flt_B1481C;
    v17 = SettingLODFadeOutMultActors;
    v60 = flt_B1481C;
  }
  if ( v60 <= (double)flt_B14824 )
  {
    v23 = v16;
    v21 = flt_B14824;
    if ( v23 <= v17 )
    {
      v26 = v23;
      v27 = v17;
      v22 = v26;
      v61 = v27;
    }
    else
    {
      v61 = v23;
      v22 = v23;
    }
  }
  else
  {
    v20 = v16;
    v21 = flt_B14824;
    v22 = v20;
    v61 = flt_B14824;
  }
  v62 = (v61 - v22) / (v21 - v22) * fCostant_100;
  Tile_SetFloat(*(Tile **)(this + 0x5C), (_DWORD *)0xFB3, v62);
  Tile_SetFloat(*(Tile **)(this + 0x5C), (_DWORD *)0xFB3, 0.0);
  Tile_SetFloat(*(Tile **)(this + 0x64), (_DWORD *)0xFB3, flt_A6B328);
  if ( SettingLODFadeOutMultItems >= (double)flt_B14834 )
  {
    v63 = SettingLODFadeOutMultItems;
    v24 = flt_B14834;
    v25 = v63;
  }
  else
  {
    v24 = flt_B14834;
    v25 = SettingLODFadeOutMultItems;
    v63 = flt_B14834;
  }
  if ( v63 <= (double)flt_B1483C )
  {
    v31 = v24;
    v29 = flt_B1483C;
    if ( v31 <= v25 )
    {
      v34 = v31;
      v35 = v25;
      v30 = v34;
      v64 = v35;
    }
    else
    {
      v64 = v31;
      v30 = v31;
    }
  }
  else
  {
    v28 = v24;
    v29 = flt_B1483C;
    v30 = v28;
    v64 = flt_B1483C;
  }
  v65 = (v64 - v30) / (v29 - v30) * fCostant_100;
  Tile_SetFloat(*(Tile **)(this + 0x64), (_DWORD *)0xFB3, v65);
  Tile_SetFloat(*(Tile **)(this + 0x64), (_DWORD *)0xFB3, 0.0);
  Tile_SetFloat(*(Tile **)(this + 0x6C), (_DWORD *)0xFB3, flt_A6B328);
  if ( SettingLODFadeOutMultObjects >= (double)flt_B1484C )
  {
    v66 = SettingLODFadeOutMultObjects;
    v32 = flt_B1484C;
    v33 = v66;
  }
  else
  {
    v32 = flt_B1484C;
    v33 = SettingLODFadeOutMultObjects;
    v66 = flt_B1484C;
  }
  if ( v66 <= (double)flt_B14854 )
  {
    v39 = v32;
    v37 = flt_B14854;
    if ( v39 <= v33 )
    {
      v42 = v39;
      v43 = v33;
      v38 = v42;
      v67 = v43;
    }
    else
    {
      v67 = v39;
      v38 = v39;
    }
  }
  else
  {
    v36 = v32;
    v37 = flt_B14854;
    v38 = v36;
    v67 = flt_B14854;
  }
  v68 = (v67 - v38) / (v37 - v38) * fCostant_100;
  Tile_SetFloat(*(Tile **)(this + 0x6C), (_DWORD *)0xFB3, v68);
  Tile_SetFloat(*(Tile **)(this + 0x6C), (_DWORD *)0xFB3, 0.0);
  Tile_SetFloat(*(Tile **)(this + 0x7C), (_DWORD *)0xFB3, flt_A6B328);
  v40 = SettingGrassEndDistance;
  v41 = dbl_A6BEA0;
  if ( v41 <= v40 )
    v69 = SettingGrassEndDistance;
  else
    v69 = flt_A57A64;
  if ( v69 <= dbl_A6DD18 )
  {
    v46 = v41;
    v45 = flt_A57A64;
    if ( v46 <= v40 )
      v45 = SettingGrassEndDistance;
    v44 = v46;
  }
  else
  {
    v44 = v41;
    v45 = flt_A6DD10;
  }
  v70 = v45;
  v71 = (v70 - v44) / dbl_A6DD08 * fCostant_100;
  Tile_SetFloat(*(Tile **)(this + 0x7C), (_DWORD *)0xFB3, v71);
  Tile_SetFloat(*(Tile **)(this + 0x7C), (_DWORD *)0xFB3, 0.0);
  Tile_SetFloat(*(Tile **)(this + 0xA4), (_DWORD *)0xFB3, flt_A6B328);
  a2 = (float)dword_B06F04;
  Tile_SetFloat(*(Tile **)(this + 0xA4), (_DWORD *)0xFB3, a2);
  Tile_SetFloat(*(Tile **)(this + 0xA4), (_DWORD *)0xFB3, 0.0);
  Tile_SetFloat(*(Tile **)(this + 0xAC), (_DWORD *)0xFB3, flt_A6B328);
  a2a = (float)dword_B06EFC;
  Tile_SetFloat(*(Tile **)(this + 0xAC), (_DWORD *)0xFB3, a2a);
  Tile_SetFloat(*(Tile **)(this + 0xAC), (_DWORD *)0xFB3, 0.0);
  Tile_SetFloat(*(Tile **)(this + 0xB4), (_DWORD *)0xFB3, flt_A6B328);
  if ( flt_B4308C >= (double)flt_B1488C )
  {
    v72 = flt_B4308C;
    v47 = flt_B1488C;
    v48 = v72;
  }
  else
  {
    v47 = flt_B1488C;
    v48 = flt_B4308C;
    v72 = flt_B1488C;
  }
  if ( v72 <= (double)flt_B14894 )
  {
    v52 = v47;
    v50 = flt_B14894;
    if ( v52 <= v48 )
    {
      v53 = v52;
      v54 = v48;
      v51 = v53;
      v73 = v54;
    }
    else
    {
      v73 = v52;
      v51 = v52;
    }
  }
  else
  {
    v49 = v47;
    v50 = flt_B14894;
    v51 = v49;
    v73 = flt_B14894;
  }
  v74 = (v73 - v51) / (v50 - v51) * fCostant_100;
  Tile_SetFloat(*(Tile **)(this + 0xB4), (_DWORD *)0xFB3, v74);
  Tile_SetFloat(*(Tile **)(this + 0xB4), (_DWORD *)0xFB3, 0.0);
  Tile_SetFloat(*(Tile **)(this + 0x94), (_DWORD *)0xFB3, flt_A6B328);
  v75 = (flt_B0312C - dbl_A2FC68) * fCostant_100;
  Tile_SetFloat(*(Tile **)(this + 0x94), (_DWORD *)0xFB3, v75);
  Tile_SetFloat(*(Tile **)(this + 0x94), (_DWORD *)0xFB3, 0.0);
  Tile_SetFloat(*(Tile **)(this + 0x38), (_DWORD *)0xFB3, flt_A6B328);
  v76 = (flt_B06F64 - flt_B1485C) / (flt_B14864 - flt_B1485C) * fCostant_100;
  Tile_SetFloat(*(Tile **)(this + 0x38), (_DWORD *)0xFB3, v76);
  Tile_SetFloat(*(Tile **)(this + 0x38), (_DWORD *)0xFB3, 0.0);
}
