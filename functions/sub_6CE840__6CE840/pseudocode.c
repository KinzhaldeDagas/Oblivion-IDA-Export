// Oblivion: blends accumulated transforms from each active item's 0x68-byte state record using item+8 normalized weight. Chooses current sample or accumulated delta state, preserves TRS channel validity independently, hemisphere-corrects/normalizes rotation, composes with the cached blend transform at +0x30, and returns false only when every channel remains invalid.
char __thiscall NiBlendAccumTransformInterpolator_UpdateMultiple(float *this, int a2, int a3, float *a4)
{
  float v4; // eax
  float v5; // edx
  float *v7; // edi
  double v8; // st7
  bool v9; // c3
  double v10; // st7
  unsigned __int8 v11; // dl
  double v12; // st7
  int v13; // ebp
  int v14; // ecx
  const void *v15; // esi
  double v16; // st5
  double v17; // st6
  float *v18; // eax
  float *v19; // eax
  float v20; // edx
  float v21; // edx
  float v22; // ecx
  float v23; // edx
  float v24; // ecx
  float v25; // edx
  float v26; // ecx
  double v27; // st7
  char v29; // [esp+1Eh] [ebp-A2h]
  char v30; // [esp+1Fh] [ebp-A1h]
  char v31; // [esp+20h] [ebp-A0h]
  char v32; // [esp+21h] [ebp-9Fh]
  char v33; // [esp+22h] [ebp-9Eh]
  char v34; // [esp+23h] [ebp-9Dh]
  float v35; // [esp+24h] [ebp-9Ch]
  float v36; // [esp+24h] [ebp-9Ch]
  float v37; // [esp+24h] [ebp-9Ch]
  float v38; // [esp+24h] [ebp-9Ch]
  float v39; // [esp+24h] [ebp-9Ch]
  float v40; // [esp+28h] [ebp-98h]
  float v41; // [esp+28h] [ebp-98h]
  float v42; // [esp+2Ch] [ebp-94h]
  float v43; // [esp+2Ch] [ebp-94h]
  float v44; // [esp+30h] [ebp-90h]
  float v45; // [esp+30h] [ebp-90h]
  float v46; // [esp+34h] [ebp-8Ch] BYREF
  float v47; // [esp+38h] [ebp-88h]
  float v48; // [esp+3Ch] [ebp-84h]
  float v49; // [esp+40h] [ebp-80h] BYREF
  float v50; // [esp+44h] [ebp-7Ch]
  float v51; // [esp+48h] [ebp-78h]
  float v52; // [esp+4Ch] [ebp-74h]
  float *v53; // [esp+50h] [ebp-70h]
  float v54; // [esp+54h] [ebp-6Ch] BYREF
  float v55; // [esp+58h] [ebp-68h]
  float v56; // [esp+5Ch] [ebp-64h]
  float v57; // [esp+60h] [ebp-60h]
  float v58[8]; // [esp+64h] [ebp-5Ch] BYREF
  float v59; // [esp+84h] [ebp-3Ch]
  float v60; // [esp+88h] [ebp-38h]
  float v61; // [esp+8Ch] [ebp-34h]
  float v62[4]; // [esp+90h] [ebp-30h] BYREF
  int v63[8]; // [esp+A0h] [ebp-20h] BYREF

  v4 = g_zeroNiPoint3; /*0x6ce848*/
  v5 = MEMORY[0xB3F9B0][0]; /*0x6ce84d*/
  v42 = 1.0; /*0x6ce853*/
  v44 = 1.0; /*0x6ce858*/
  v47 = *(&g_zeroNiPoint3 + 1); /*0x6ce877*/
  v46 = v4; /*0x6ce882*/
  v48 = v5; /*0x6ce886*/
  sub_714C40(&v54, 0.0, 0.0, 0.0, 0.0); /*0x6ce88a*/
  v40 = 0.0; /*0x6ce891*/
  v7 = this + 0xC; /*0x6ce895*/
  v32 = 0; /*0x6ce89e*/
  v29 = 0; /*0x6ce8a5*/
  v35 = -flt_A7DEB4; /*0x6ce8aa*/
  v30 = 0; /*0x6ce8ae*/
  v8 = *(this + 0x13); /*0x6ce8b3*/
  v53 = this + 0xC; /*0x6ce8b6*/
  v9 = v35 == v8; /*0x6ce8c0*/
  v10 = v35; /*0x6ce8c4*/
  if ( v9 && v10 == *(this + 0x10) && *v7 == v10 ) /*0x6ce8ea*/
  {
    v33 = 1; /*0x6ce8f7*/
    sub_471390((_DWORD *)this + 0xC, &g_zeroNiPoint3); /*0x6ce8fc*/
    sub_471430((_DWORD *)this + 0xC, (float *)&dword_B27110); /*0x6ce908*/
    if ( !_isnan(1.0) ) /*0x6ce915*/
    {
      if ( _finite(1.0) ) /*0x6ce929*/
        *(this + 0x13) = 1.0; /*0x6ce937*/
    }
  }
  else
  {
    v33 = 0; /*0x6cea18*/
  }
  v11 = 0; /*0x6ce93a*/
  v31 = 1; /*0x6ce93f*/
  v34 = 0; /*0x6ce944*/
  if ( !*((_BYTE *)this + 0xD) ) /*0x6ce93c*/
    return 0; /*0x6ce93c*/
  v12 = flt_A7DEB4; /*0x6ce94e*/
  do /*0x6ceb97*/
  {
    v13 = *((_DWORD *)this + 5) + 0x18 * v11; /*0x6ce968*/
    v14 = *((_DWORD *)this + 0x14) + 0x68 * v11; /*0x6ce96b*/
    if ( *(_DWORD *)v13 ) /*0x6ce964*/
    {
      if ( *(float *)(v13 + 8) > 0.0 ) /*0x6ce97d*/
      {
        v15 = (const void *)(v14 + 4); /*0x6ce98c*/
        if ( !v33 ) /*0x6ce98f*/
          v15 = (const void *)(v14 + 0x24); /*0x6ce991*/
        qmemcpy(v58, v15, sizeof(v58)); /*0x6ce99d*/
        v36 = -v12; /*0x6ce99f*/
        v16 = v36; /*0x6ce9b6*/
        if ( v36 == v58[0] ) /*0x6ce9b8*/
        {
          v17 = v36; /*0x6cea22*/
          v42 = v42 - *(float *)(v13 + 8); /*0x6cea2b*/
        }
        else
        {
          v32 = 1; /*0x6ce9bd*/
          v37 = *(float *)(v13 + 8); /*0x6ce9c2*/
          v59 = v58[0] * v37; /*0x6ce9d0*/
          v60 = v58[1] * v37; /*0x6ce9da*/
          v17 = v16; /*0x6ce9e4*/
          v61 = v37 * v58[2]; /*0x6ce9e6*/
          v46 = v59 + v46; /*0x6ce9f5*/
          v47 = v47 + v60; /*0x6cea01*/
          v48 = v48 + v61; /*0x6cea10*/
        }
        if ( v58[4] != v17 ) /*0x6cea3e*/
        {
          v49 = v58[3]; /*0x6cea55*/
          v50 = v58[4]; /*0x6cea5d*/
          v51 = v58[5]; /*0x6cea61*/
          v52 = v58[6]; /*0x6cea65*/
          if ( v31 ) /*0x6cea69*/
          {
            v31 = 0; /*0x6ceacc*/
          }
          else
          {
            v38 = v58[4] * v55 + v58[3] * v54 + v58[5] * v56 + v58[6] * v57; /*0x6cea8d*/
            if ( v38 < 0.0 ) /*0x6cea9a*/
            {
              v18 = sub_714CC0(&v49, v62); /*0x6ceaa8*/
              v49 = *v18; /*0x6ceaaf*/
              v50 = v18[1]; /*0x6ceab6*/
              v51 = v18[2]; /*0x6ceabd*/
              v52 = v18[3]; /*0x6ceac4*/
            }
          }
          v19 = sub_72F930(&v49, (float *)v63, *(float *)(v13 + 8)); /*0x6ceae6*/
          v49 = *v19; /*0x6ceaed*/
          v50 = v19[1]; /*0x6ceafc*/
          v51 = v19[2]; /*0x6ceb03*/
          v20 = v19[3]; /*0x6ceb07*/
          v54 = v49 + v54; /*0x6ceb0a*/
          v52 = v20; /*0x6ceb12*/
          v11 = v34; /*0x6ceb1a*/
          v29 = 1; /*0x6ceb1e*/
          v55 = v55 + v50; /*0x6ceb23*/
          v56 = v56 + v51; /*0x6ceb2f*/
          v57 = v57 + v52; /*0x6ceb3b*/
        }
        v7 = v53; /*0x6ceb49*/
        if ( -flt_A7DEB4 == v58[7] ) /*0x6ceb62*/
        {
          v12 = flt_A7DEB4; /*0x6ceb7c*/
          v44 = v44 - *(float *)(v13 + 8); /*0x6ceb85*/
        }
        else
        {
          v30 = 1; /*0x6ceb67*/
          v12 = flt_A7DEB4; /*0x6ceb74*/
          v40 = v58[7] * *(float *)(v13 + 8) + v40; /*0x6ceb76*/
        }
      }
    }
    v34 = ++v11; /*0x6ceb93*/
  }
  while ( v11 < *((_BYTE *)this + 0xD) ); /*0x6ceb97*/
  if ( !v32 && !v29 && !v30 ) /*0x6cebb2*/
    return 0; /*0x6cebb2*/
  v21 = *(float *)&dword_B24264; /*0x6cebc8*/
  LODWORD(v58[0]) = dword_B24260; /*0x6cebd0*/
  v22 = *(float *)&dword_B24268; /*0x6cebd4*/
  v58[1] = v21; /*0x6cebda*/
  v23 = flt_B3CBA4; /*0x6cebde*/
  v58[2] = v22; /*0x6cebe4*/
  v24 = flt_B3CBA8; /*0x6cebe8*/
  v58[3] = v23; /*0x6cebee*/
  v25 = flt_B3CBAC; /*0x6cebf2*/
  v58[4] = v24; /*0x6cebf8*/
  v26 = flt_B3CBB0; /*0x6cebfc*/
  v58[5] = v25; /*0x6cec02*/
  v58[6] = v26; /*0x6cec06*/
  v43 = 1.0 / v42; /*0x6cec0c*/
  v45 = 1.0 / v44; /*0x6cec14*/
  v58[7] = flt_A79E10; /*0x6cec1e*/
  if ( v32 ) /*0x6cec22*/
  {
    v46 = v46 * v43; /*0x6cec3b*/
    v47 = v47 * v43; /*0x6cec45*/
    v48 = v43 * v48; /*0x6cec4d*/
    sub_471390(v58, &v46); /*0x6cec51*/
  }
  if ( v29 ) /*0x6cec5b*/
  {
    sub_715340(&v54); /*0x6cec61*/
    sub_471430(v58, &v54); /*0x6cec6f*/
  }
  if ( v30 ) /*0x6cec79*/
  {
    v41 = v45 * v40; /*0x6cec86*/
    if ( !_isnan(v41) ) /*0x6cec91*/
    {
      if ( _finite(v41) ) /*0x6ceca7*/
        v58[7] = v41; /*0x6cecb7*/
    }
  }
  qmemcpy(v7, sub_6CB820(v7, (int)v63, v58), 0x20u); /*0x6cecd6*/
  v39 = -flt_A7DEB4; /*0x6cece0*/
  v27 = v39; /*0x6cecf5*/
  if ( v39 == v53[7] && v27 == v53[4] && *v53 == v27 ) /*0x6ced13*/
    return 0; /*0x6ced17*/
  qmemcpy(a4, v53, 0x20u); /*0x6ced31*/
  return 1; /*0x6ced1a*/
}
