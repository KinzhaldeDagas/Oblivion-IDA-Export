unsigned int __thiscall sub_6B3AE0(unsigned int **this)
{
  int v3; // ebp
  int v4; // esi
  int v5; // eax
  unsigned int *v6; // ecx
  int v7; // edi
  int v8; // eax
  unsigned int *v9; // eax
  char *v10; // esi
  _DWORD *v11; // ecx
  int v12; // edi
  unsigned int **v13; // esi
  _DWORD *v14; // ebp
  unsigned int **v15; // eax
  int v16; // edx
  int v17; // ecx
  double v18; // st7
  unsigned int **v19; // ecx
  unsigned int **v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  float *v25; // ecx
  float *v26; // eax
  int v27; // edi
  int v28; // edi
  double v29; // st7
  int v30; // edx
  int v31; // ecx
  unsigned int v32; // ebp
  unsigned int **v33; // eax
  int v34; // edx
  int v35; // eax
  bool v36; // cc
  int v37; // eax
  unsigned int **v38; // ecx
  int v39; // edx
  unsigned int **v40; // ecx
  unsigned int **v41; // eax
  int v42; // edx
  int v43; // eax
  float *v44; // ecx
  unsigned int v45; // edx
  double v46; // st7
  double v47; // st6
  double v48; // st7
  double v49; // st6
  double v50; // st7
  double v51; // st6
  double v52; // st7
  double v53; // st6
  double v54; // st7
  double v55; // st6
  double v56; // st7
  double v57; // st6
  double v58; // st7
  double v59; // st6
  float *v60; // edi
  int v61; // eax
  double v62; // st7
  unsigned int **v63; // edx
  int v64; // edi
  float *v65; // eax
  int v66; // ecx
  double v67; // st7
  unsigned int **v68; // edi
  int v69; // eax
  unsigned int *v70; // ecx
  int v71; // edx
  int v72; // [esp+4h] [ebp-B8h]
  float v73; // [esp+4h] [ebp-B8h]
  unsigned int v74; // [esp+8h] [ebp-B4h]
  float v75; // [esp+8h] [ebp-B4h]
  int v76; // [esp+Ch] [ebp-B0h]
  int v77; // [esp+Ch] [ebp-B0h]
  _DWORD *v78; // [esp+10h] [ebp-ACh]
  int v79; // [esp+10h] [ebp-ACh]
  int v80; // [esp+14h] [ebp-A8h]
  int v81; // [esp+14h] [ebp-A8h]
  int v82; // [esp+18h] [ebp-A4h]
  int v83; // [esp+1Ch] [ebp-A0h]
  int v84; // [esp+20h] [ebp-9Ch]
  unsigned int v85; // [esp+24h] [ebp-98h]
  int v86; // [esp+28h] [ebp-94h]
  float v87[36]; // [esp+2Ch] [ebp-90h] BYREF

  if ( !*((_BYTE *)*this + 0x18) ) /*0x6b3aeb*/
    return 0; /*0x6b3afa*/
  v3 = *(_DWORD *)((*this)[1] + 0x10); /*0x6b3b05*/
  _memset((*(this + 3))[1], 0, 0x900u); /*0x6b3b11*/
  if ( v3 > 0 ) /*0x6b3b1b*/
  {
    v4 = v3; /*0x6b3b1d*/
    do /*0x6b3b35*/
    {
      v5 = sub_6B3240(*this, 8); /*0x6b3b24*/
      sub_6AF790((int *)*(this + 1), v5); /*0x6b3b2d*/
      --v4; /*0x6b3b32*/
    }
    while ( v4 ); /*0x6b3b35*/
  }
  v6 = *(this + 1); /*0x6b3b37*/
  v7 = v6[1] >> 3; /*0x6b3b40*/
  v8 = v6[1] & 7; /*0x6b3b43*/
  if ( v8 ) /*0x6b3b46*/
  {
    sub_6AF6F0(v6, 8 - v8); /*0x6b3b50*/
    ++v7; /*0x6b3b55*/
  }
  v9 = (unsigned int *)((char *)*(this + 0x1049) + v3); /*0x6b3b68*/
  v10 = (char *)*(this + 0x1049) - *(_DWORD *)((*this)[1] + 0x14) - v7; /*0x6b3b6b*/
  *(this + 0x1049) = v9; /*0x6b3b6d*/
  if ( (int)v10 < 0 ) /*0x6b3b73*/
    return 0; /*0x6b44d7*/
  if ( v7 > 0x1000 ) /*0x6b3b7f*/
  {
    v11 = *(this + 1); /*0x6b3b81*/
    *(this + 0x1049) = v9 + 0xFFFFFC00; /*0x6b3b8e*/
    sub_6AF7E0(v11, 0x1000); /*0x6b3b94*/
  }
  for ( ; (int)v10 > 0; --v10 ) /*0x6b3b9b*/
    sub_6AF6F0(*(this + 1), 8u); /*0x6b3ba5*/
  v12 = 0; /*0x6b3bb1*/
  v82 = 0; /*0x6b3bb9*/
  if ( (int)*(this + 0x1048) > 0 )
  {
    v13 = this + 0x48B; /*0x6b3bc3*/
    v83 = 0; /*0x6b3bc9*/
    while ( 1 )
    {
      v14 = (_DWORD *)((*this)[1] + v83 + 0x2C); /*0x6b3be0*/
      *(this + 0x104A) = (unsigned int *)(*(this + 1))[1]; /*0x6b3be7*/
      v78 = v14; /*0x6b3bf0*/
      sub_6B2A30(this, v12); /*0x6b3bf4*/
      sub_6B3560(this, v12); /*0x6b3bfc*/
      sub_6B2F30((int *)this, (int)(this + 0x24B), v12); /*0x6b3c0b*/
      v15 = this + 0x48B; /*0x6b3c10*/
      v16 = 0x20; /*0x6b3c12*/
      do /*0x6b3c56*/
      {
        v17 = 6; /*0x6b3c20*/
        do /*0x6b3c51*/
        {
          v18 = *((float *)v15 + 0xFFFFFDC0); /*0x6b3c30*/
          v15 += 3; /*0x6b3c36*/
          --v17; /*0x6b3c39*/
          *((float *)v15 + 0xFFFFFFFD) = v18; /*0x6b3c3c*/
          v15[0xFFFFFFFE] = v15[0xFFFFFDBE]; /*0x6b3c45*/
          v15[0xFFFFFFFF] = v15[0xFFFFFDBF]; /*0x6b3c4e*/
        }
        while ( v17 ); /*0x6b3c51*/
        --v16; /*0x6b3c53*/
      }
      while ( v16 ); /*0x6b3c56*/
      if ( v14[4] && v14[5] == 2 ) /*0x6b3c66*/
      {
        memset(this + 0x6CB, 0, 0x900u); /*0x6b3c79*/
        if ( v14[6] ) /*0x6b3c7b*/
        {
          v19 = this + 0x48D; /*0x6b3c84*/
          v20 = this + 0x6CC; /*0x6b3c87*/
          v21 = 4; /*0x6b3c8d*/
          do /*0x6b3cd1*/
          {
            v20 += 9; /*0x6b3c95*/
            v20[0xFFFFFFF6] = v19[0xFFFFFFFE]; /*0x6b3c98*/
            v19 += 9; /*0x6b3c9b*/
            --v21; /*0x6b3c9e*/
            v20[0xFFFFFFF7] = v19[0xFFFFFFF6]; /*0x6b3ca4*/
            v20[0xFFFFFFF8] = v19[0xFFFFFFF7]; /*0x6b3caa*/
            v20[0xFFFFFFF9] = v19[0xFFFFFFF8]; /*0x6b3cb0*/
            v20[0xFFFFFFFA] = v19[0xFFFFFFF9]; /*0x6b3cb6*/
            v20[0xFFFFFFFB] = v19[0xFFFFFFFA]; /*0x6b3cbc*/
            v20[0xFFFFFFFC] = v19[0xFFFFFFFB]; /*0x6b3cc2*/
            v20[0xFFFFFFFD] = v19[0xFFFFFFFC]; /*0x6b3cc8*/
            v20[0xFFFFFFFE] = v19[0xFFFFFFFD]; /*0x6b3cce*/
          }
          while ( v21 ); /*0x6b3cd1*/
          v22 = 0x25 * (_DWORD)*(this + 0x104E); /*0x6b3cd9*/
          v23 = dword_B17FC0[v22]; /*0x6b3cdf*/
          v86 = 3; /*0x6b3ced*/
          v72 = dword_B17FC4[v22] - v23; /*0x6b3cf5*/
          do /*0x6b3e78*/
          {
            v80 = 3 * v23; /*0x6b3d0a*/
            v74 = 0; /*0x6b3d0e*/
            v85 = 0; /*0x6b3d12*/
            if ( v72 >= 4 ) /*0x6b3d16*/
            {
              v24 = v72; /*0x6b3d2d*/
              v84 = v80 + v72 + 1; /*0x6b3d3e*/
              v76 = 0xC * v23 + 4; /*0x6b3d4f*/
              v25 = (float *)&v13[3 * v23 + 1]; /*0x6b3d55*/
              v26 = (float *)(this + v80 + 0x6CD); /*0x6b3d59*/
              v85 = 0xC * (((unsigned int)(v72 - 4) >> 2) + 1); /*0x6b3d60*/
              do /*0x6b3dea*/
              {
                v26[0xFFFFFFFE] = v25[0xFFFFFFFF]; /*0x6b3d6b*/
                v26[0xFFFFFFFF] = v25[0xFFFFFFFF + v24]; /*0x6b3d75*/
                v74 += 4; /*0x6b3d78*/
                *v26 = v25[0xFFFFFFFF + v24 + v24]; /*0x6b3d84*/
                v27 = v24 * 4 + v76; /*0x6b3d86*/
                v76 += 0x10; /*0x6b3d8a*/
                v26[1] = *v25; /*0x6b3d8f*/
                v84 += 4; /*0x6b3d92*/
                v26[2] = *(float *)((char *)v13 + v27); /*0x6b3d9c*/
                v26 += 0xC; /*0x6b3d9f*/
                v26[0xFFFFFFF7] = *(float *)((char *)&v13[v24] + v27); /*0x6b3da9*/
                v26[0xFFFFFFF8] = v25[1]; /*0x6b3db1*/
                v26[0xFFFFFFF9] = v25[v24 + 1]; /*0x6b3db9*/
                v26[0xFFFFFFFA] = v25[v24 + 1 + v24]; /*0x6b3dc3*/
                v28 = v24 * 4 + (char *)v25 - (char *)v13 + 8; /*0x6b3dc6*/
                v29 = v25[2]; /*0x6b3dc8*/
                v25 += 4; /*0x6b3dcb*/
                v26[0xFFFFFFFB] = v29; /*0x6b3dce*/
                v26[0xFFFFFFFC] = *(float *)((char *)v13 + v28); /*0x6b3dd6*/
                v26[0xFFFFFFFD] = *(float *)((char *)&v13[v24] + v28); /*0x6b3de0*/
              }
              while ( v74 < v72 - 3 ); /*0x6b3dea*/
            }
            if ( v74 < v72 ) /*0x6b3dfa*/
            {
              v30 = v80; /*0x6b3dfc*/
              v81 = v80 + v74; /*0x6b3e02*/
              v31 = v81; /*0x6b3e06*/
              v32 = v72 - v74; /*0x6b3e15*/
              v33 = this + v30 + v85 + 0x6CD; /*0x6b3e19*/
              do /*0x6b3e46*/
              {
                ++v81; /*0x6b3e23*/
                v33[0xFFFFFFFE] = v13[v31]; /*0x6b3e28*/
                v34 = v31 * 4 + 4 * v72; /*0x6b3e2b*/
                v33[0xFFFFFFFF] = *(unsigned int **)((char *)v13 + v34); /*0x6b3e34*/
                v33 += 3; /*0x6b3e37*/
                ++v31; /*0x6b3e3d*/
                --v32; /*0x6b3e40*/
                v33[0xFFFFFFFD] = *(unsigned int **)((char *)&v13[v72] + v34); /*0x6b3e43*/
              }
              while ( v32 ); /*0x6b3e46*/
            }
            v23 = dword_B17FB4[0x25 * (_DWORD)*(this + 0x104E) + 1 + v86]; /*0x6b3e5c*/
            v35 = dword_B17FB8[0x25 * (_DWORD)*(this + 0x104E) + 1 + v86] - v23; /*0x6b3e6b*/
            v36 = ++v86 < 0xD; /*0x6b3e6d*/
            v72 = v35; /*0x6b3e74*/
          }
          while ( v36 ); /*0x6b3e78*/
          v14 = v78; /*0x6b3e7e*/
        }
        else
        {
          v37 = 0; /*0x6b3e87*/
          v38 = this + 0x6CC; /*0x6b3e89*/
          do /*0x6b3f8e*/
          {
            v38 += 9; /*0x6b3ea8*/
            v38[0xFFFFFFF6] = v13[*(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18650)]; /*0x6b3eab*/
            v38[0xFFFFFFF7] = v13[*(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18654)]; /*0x6b3ec6*/
            v38[0xFFFFFFF8] = v13[*(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18658)]; /*0x6b3ee1*/
            v38[0xFFFFFFF9] = v13[*(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB1865C)]; /*0x6b3efc*/
            v38[0xFFFFFFFA] = v13[*(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18660)]; /*0x6b3f17*/
            v38[0xFFFFFFFB] = v13[*(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18664)]; /*0x6b3f32*/
            v38[0xFFFFFFFC] = v13[*(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18668)]; /*0x6b3f4d*/
            v38[0xFFFFFFFD] = v13[*(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB1866C)]; /*0x6b3f68*/
            v39 = *(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18670); /*0x6b3f79*/
            v37 += 9; /*0x6b3f83*/
            v38[0xFFFFFFFE] = v13[v39]; /*0x6b3f8b*/
          }
          while ( v37 < 0x240 ); /*0x6b3f8e*/
        }
      }
      else
      {
        v40 = this + 0x48D; /*0x6b3f96*/
        v41 = this + 0x6CC; /*0x6b3f99*/
        v42 = 0x40; /*0x6b3f9f*/
        do /*0x6b3fe3*/
        {
          v41 += 9; /*0x6b3fa7*/
          v41[0xFFFFFFF6] = v40[0xFFFFFFFE]; /*0x6b3faa*/
          v40 += 9; /*0x6b3fad*/
          --v42; /*0x6b3fb0*/
          v41[0xFFFFFFF7] = v40[0xFFFFFFF6]; /*0x6b3fb6*/
          v41[0xFFFFFFF8] = v40[0xFFFFFFF7]; /*0x6b3fbc*/
          v41[0xFFFFFFF9] = v40[0xFFFFFFF8]; /*0x6b3fc2*/
          v41[0xFFFFFFFA] = v40[0xFFFFFFF9]; /*0x6b3fc8*/
          v41[0xFFFFFFFB] = v40[0xFFFFFFFA]; /*0x6b3fce*/
          v41[0xFFFFFFFC] = v40[0xFFFFFFFB]; /*0x6b3fd4*/
          v41[0xFFFFFFFD] = v40[0xFFFFFFFC]; /*0x6b3fda*/
          v41[0xFFFFFFFE] = v40[0xFFFFFFFD]; /*0x6b3fe0*/
        }
        while ( v42 ); /*0x6b3fe3*/
      }
      if ( !v14[4] ) /*0x6b3fe5*/
        break; /*0x6b3fe5*/
      if ( !v14[6] ) /*0x6b3fff*/
        goto LABEL_45; /*0x6b3fff*/
      v43 = 0x12; /*0x6b4009*/
      if ( v14[5] != 2 ) /*0x6b400e*/
        goto LABEL_45; /*0x6b400e*/
LABEL_46:
      v44 = (float *)(this + 0x6DD); /*0x6b4015*/
      v45 = (v43 - 1) / 0x12u + 1; /*0x6b4028*/
      do /*0x6b4224*/
      {
        v46 = v44[0xFFFFFFFF]; /*0x6b403d*/
        v47 = *v44; /*0x6b4041*/
        v44[0xFFFFFFFF] = flt_B18610 * v46 - flt_B18630 * v47; /*0x6b4057*/
        *v44 = v46 * flt_B18630 + v47 * flt_B18610; /*0x6b406a*/
        v48 = v44[0xFFFFFFFE]; /*0x6b407a*/
        v49 = v44[1]; /*0x6b407e*/
        v44[0xFFFFFFFE] = flt_B18614 * v48 - flt_B18634 * v49; /*0x6b4094*/
        v44[1] = v48 * flt_B18634 + v49 * flt_B18614; /*0x6b40a7*/
        v50 = v44[0xFFFFFFFD]; /*0x6b40b8*/
        v51 = v44[2]; /*0x6b40bc*/
        v44[0xFFFFFFFD] = flt_B18618 * v50 - flt_B18638 * v51; /*0x6b40d2*/
        v44[2] = v50 * flt_B18638 + v51 * flt_B18618; /*0x6b40e5*/
        v52 = v44[0xFFFFFFFC]; /*0x6b40f6*/
        v53 = v44[3]; /*0x6b40fa*/
        v44[0xFFFFFFFC] = flt_B1861C * v52 - flt_B1863C * v53; /*0x6b4110*/
        v44[3] = v52 * flt_B1863C + v53 * flt_B1861C; /*0x6b4123*/
        v54 = v44[0xFFFFFFFB]; /*0x6b4134*/
        v55 = v44[4]; /*0x6b4138*/
        v44[0xFFFFFFFB] = flt_B18620 * v54 - flt_B18640 * v55; /*0x6b414e*/
        v44 += 0x12; /*0x6b415d*/
        --v45; /*0x6b4160*/
        v44[0xFFFFFFF2] = v54 * flt_B18640 + v55 * flt_B18620; /*0x6b4167*/
        v56 = v44[0xFFFFFFE8]; /*0x6b4178*/
        v57 = v44[0xFFFFFFF3]; /*0x6b417c*/
        v44[0xFFFFFFE8] = flt_B18624 * v56 - flt_B18644 * v57; /*0x6b4192*/
        v44[0xFFFFFFF3] = v56 * flt_B18644 + v57 * flt_B18624; /*0x6b41a5*/
        v58 = v44[0xFFFFFFE7]; /*0x6b41b6*/
        v59 = v44[0xFFFFFFF4]; /*0x6b41ba*/
        v44[0xFFFFFFE7] = flt_B18628 * v58 - flt_B18648 * v59; /*0x6b41d0*/
        v44[0xFFFFFFF4] = v58 * flt_B18648 + v59 * flt_B18628; /*0x6b41e3*/
        v73 = v44[0xFFFFFFE6]; /*0x6b41e9*/
        v75 = v44[0xFFFFFFF5]; /*0x6b41f0*/
        v44[0xFFFFFFE6] = flt_B1862C * v73 - flt_B1864C * v75; /*0x6b420e*/
        v44[0xFFFFFFF5] = v73 * flt_B1864C + v75 * flt_B1862C; /*0x6b4221*/
      }
      while ( v45 ); /*0x6b4224*/
      v77 = 0; /*0x6b422a*/
      v60 = (float *)(this + 0x90C); /*0x6b4232*/
      while ( 1 )
      {
        v61 = v14[4] && v14[6] && v77 < 0x24 ? 0 : v14[5];
        sub_6B1EA0(v60 + 0xFFFFFDBF, v87, v61); /*0x6b426d*/
        v60[0xFFFFFDBF] = v60[0xFFFFFFFF] + v87[0]; /*0x6b4279*/
        v60[0xFFFFFFFF] = v87[0x12]; /*0x6b4283*/
        v60[0xFFFFFDC0] = *v60 + v87[1]; /*0x6b428c*/
        *v60 = v87[0x13]; /*0x6b4299*/
        v60[0xFFFFFDC1] = v60[1] + v87[2]; /*0x6b42a2*/
        v60[1] = v87[0x14]; /*0x6b42af*/
        v60[0xFFFFFDC2] = v60[2] + v87[3]; /*0x6b42b9*/
        v60[2] = v87[0x15]; /*0x6b42c6*/
        v60[0xFFFFFDC3] = v60[3] + v87[4]; /*0x6b42d0*/
        v60[3] = v87[0x16]; /*0x6b42dd*/
        v60[0xFFFFFDC4] = v60[4] + v87[5]; /*0x6b42e7*/
        v60[4] = v87[0x17]; /*0x6b42f4*/
        v60[0xFFFFFDC5] = v60[5] + v87[6]; /*0x6b42fe*/
        v60[5] = v87[0x18]; /*0x6b430b*/
        v60[0xFFFFFDC6] = v60[6] + v87[7]; /*0x6b4315*/
        v60[6] = v87[0x19]; /*0x6b4322*/
        v60[0xFFFFFDC7] = v60[7] + v87[8]; /*0x6b432c*/
        v60[7] = v87[0x1A]; /*0x6b4339*/
        v60[0xFFFFFDC8] = v60[8] + v87[9]; /*0x6b4343*/
        v60[8] = v87[0x1B]; /*0x6b4350*/
        v60[0xFFFFFDC9] = v60[9] + v87[0xA]; /*0x6b435a*/
        v60[9] = v87[0x1C]; /*0x6b4367*/
        v60[0xFFFFFDCA] = v60[0xA] + v87[0xB]; /*0x6b4371*/
        v60[0xA] = v87[0x1D]; /*0x6b437e*/
        v60[0xFFFFFDCB] = v60[0xB] + v87[0xC]; /*0x6b4388*/
        v60[0xB] = v87[0x1E]; /*0x6b4395*/
        v60[0xFFFFFDCC] = v60[0xC] + v87[0xD]; /*0x6b439f*/
        v60[0xC] = v87[0x1F]; /*0x6b43ac*/
        v60[0xFFFFFDCD] = v60[0xD] + v87[0xE]; /*0x6b43b6*/
        v60[0xD] = v87[0x20]; /*0x6b43c3*/
        v62 = v60[0xE] + v87[0xF]; /*0x6b43d0*/
        v60 += 0x12; /*0x6b43d4*/
        v36 = v77 + 0x12 < 0x240; /*0x6b43d7*/
        v77 += 0x12; /*0x6b43dc*/
        v60[0xFFFFFDBC] = v62; /*0x6b43e0*/
        v60[0xFFFFFFFC] = v87[0x21]; /*0x6b43ed*/
        v60[0xFFFFFDBD] = v60[0xFFFFFFFD] + v87[0x10]; /*0x6b43f7*/
        v60[0xFFFFFFFD] = v87[0x22]; /*0x6b4404*/
        v60[0xFFFFFDBE] = v87[0x11] + v60[0xFFFFFFFE]; /*0x6b440e*/
        v60[0xFFFFFFFE] = v87[0x23]; /*0x6b441b*/
        if ( !v36 ) /*0x6b441e*/
          break; /*0x6b441e*/
        v14 = v78; /*0x6b4240*/
      }
      v63 = this + 0x6DE; /*0x6b4424*/
      v64 = 0x10; /*0x6b442a*/
      do /*0x6b444f*/
      {
        v65 = (float *)v63; /*0x6b4430*/
        v66 = 9; /*0x6b4432*/
        do /*0x6b4444*/
        {
          v67 = *v65; /*0x6b4437*/
          v65 += 2; /*0x6b4439*/
          --v66; /*0x6b443c*/
          v65[0xFFFFFFFE] = -v67; /*0x6b4441*/
        }
        while ( v66 ); /*0x6b4444*/
        v63 += 0x24; /*0x6b4446*/
        --v64; /*0x6b444c*/
      }
      while ( v64 ); /*0x6b444f*/
      v68 = this + 0x6CB; /*0x6b4451*/
      v79 = 0x12; /*0x6b4457*/
      do /*0x6b4497*/
      {
        v69 = 0x402; /*0x6b4460*/
        v70 = (unsigned int *)v68; /*0x6b4465*/
        v71 = 0x20; /*0x6b4467*/
        do /*0x6b4481*/
        {
          (*(this + 2))[v69++] = *v70; /*0x6b4475*/
          v70 += 0x12; /*0x6b447b*/
          --v71; /*0x6b447e*/
        }
        while ( v71 ); /*0x6b4481*/
        sub_6B66A0((float *)*(this + 2), (int *)*(this + 3)); /*0x6b448a*/
        ++v68; /*0x6b448f*/
        --v79; /*0x6b4492*/
      }
      while ( v79 ); /*0x6b4497*/
      v83 += 0x48; /*0x6b449d*/
      if ( ++v82 >= (int)*(this + 0x1048) ) /*0x6b44af*/
        goto LABEL_65; /*0x6b44af*/
      v12 = v82; /*0x6b3bd0*/
    }
    if ( !v14[6] && v14[5] == 2 ) /*0x6b3ff5*/
      return 0; /*0x6b3ff5*/
LABEL_45:
    v43 = 0x22E; /*0x6b4010*/
    goto LABEL_46; /*0x6b4010*/
  }
LABEL_65:
  if ( sub_6B3790(*this) ) /*0x6b44b7*/
    *((_BYTE *)*this + 0x18) = 1; /*0x6b44c4*/
  else
    *((_BYTE *)*this + 0x18) = 0; /*0x6b44e8*/
  return (*(this + 3))[1]; /*0x6b3af3*/
}
