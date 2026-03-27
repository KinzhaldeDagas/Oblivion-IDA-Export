unsigned int __thiscall sub_6B3AE0(unsigned int **this)
{
  int v3; // ebp
  int v4; // esi
  int v5; // eax
  unsigned int *v6; // ecx
  int v7; // edi
  int v8; // eax
  unsigned int *v9; // eax
  int v10; // esi
  _DWORD *v11; // ecx
  int v12; // edi
  char *v13; // esi
  _DWORD *v14; // ebp
  float *v15; // eax
  int v16; // edx
  int v17; // ecx
  double v18; // st7
  float *v19; // ecx
  float *v20; // eax
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
  float *v33; // eax
  int v34; // edx
  int v35; // eax
  bool v36; // cc
  int v37; // eax
  float *v38; // ecx
  int v39; // edx
  float *v40; // ecx
  float *v41; // eax
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
  float *v63; // edx
  int v64; // edi
  float *v65; // eax
  int v66; // ecx
  double v67; // st7
  float *v68; // edi
  int v69; // eax
  float *v70; // ecx
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

  if ( !*((_BYTE *)*this + 0x18) )
    return 0;
  v3 = *(_DWORD *)((*this)[1] + 0x10);
  _memset((*(this + 3))[1], 0, 0x900);
  if ( v3 > 0 )
  {
    v4 = v3;
    do
    {
      v5 = sub_6B3240(*this, 8);
      sub_6AF790((int *)*(this + 1), v5);
      --v4;
    }
    while ( v4 );
  }
  v6 = *(this + 1);
  v7 = v6[1] >> 3;
  v8 = v6[1] & 7;
  if ( v8 )
  {
    sub_6AF6F0(v6, 8 - v8);
    ++v7;
  }
  v9 = (unsigned int *)((char *)*(this + 0x1049) + v3);
  v10 = (int)*(this + 0x1049) - *(_DWORD *)((*this)[1] + 0x14) - v7;
  *(this + 0x1049) = v9;
  if ( v10 < 0 )
    return 0;
  if ( v7 > 0x1000 )
  {
    v11 = *(this + 1);
    *(this + 0x1049) = v9 + 0xFFFFFC00;
    sub_6AF7E0(v11, 0x1000);
  }
  for ( ; v10 > 0; --v10 )
    sub_6AF6F0(*(this + 1), 8u);
  v12 = 0;
  v82 = 0;
  if ( (int)*(this + 0x1048) > 0 )
  {
    v13 = (char *)(this + 0x48B);
    v83 = 0;
    while ( 1 )
    {
      v14 = (_DWORD *)((*this)[1] + v83 + 0x2C);
      *(this + 0x104A) = (unsigned int *)(*(this + 1))[1];
      v78 = v14;
      sub_6B2A30(this, v12);
      sub_6B3560(this, v12);
      sub_6B2F30((int *)this, (int)(this + 0x24B), v12);
      v15 = (float *)(this + 0x48B);
      v16 = 0x20;
      do
      {
        v17 = 6;
        do
        {
          v18 = v15[0xFFFFFDC0];
          v15 += 3;
          --v17;
          v15[0xFFFFFFFD] = v18;
          v15[0xFFFFFFFE] = v15[0xFFFFFDBE];
          v15[0xFFFFFFFF] = v15[0xFFFFFDBF];
        }
        while ( v17 );
        --v16;
      }
      while ( v16 );
      if ( v14[4] && v14[5] == 2 )
      {
        memset(this + 0x6CB, 0, 0x900u);
        if ( v14[6] )
        {
          v19 = (float *)(this + 0x48D);
          v20 = (float *)(this + 0x6CC);
          v21 = 4;
          do
          {
            v20 += 9;
            v20[0xFFFFFFF6] = v19[0xFFFFFFFE];
            v19 += 9;
            --v21;
            v20[0xFFFFFFF7] = v19[0xFFFFFFF6];
            v20[0xFFFFFFF8] = v19[0xFFFFFFF7];
            v20[0xFFFFFFF9] = v19[0xFFFFFFF8];
            v20[0xFFFFFFFA] = v19[0xFFFFFFF9];
            v20[0xFFFFFFFB] = v19[0xFFFFFFFA];
            v20[0xFFFFFFFC] = v19[0xFFFFFFFB];
            v20[0xFFFFFFFD] = v19[0xFFFFFFFC];
            v20[0xFFFFFFFE] = v19[0xFFFFFFFD];
          }
          while ( v21 );
          v22 = 0x25 * (_DWORD)*(this + 0x104E);
          v23 = dword_B17FC0[v22];
          v86 = 3;
          v72 = dword_B17FC4[v22] - v23;
          do
          {
            v80 = 3 * v23;
            v74 = 0;
            v85 = 0;
            if ( v72 >= 4 )
            {
              v24 = v72;
              v84 = v80 + v72 + 1;
              v76 = 0xC * v23 + 4;
              v25 = (float *)&v13[0xC * v23 + 4];
              v26 = (float *)(this + v80 + 0x6CD);
              v85 = 0xC * (((unsigned int)(v72 - 4) >> 2) + 1);
              do
              {
                v26[0xFFFFFFFE] = v25[0xFFFFFFFF];
                v26[0xFFFFFFFF] = v25[0xFFFFFFFF + v24];
                v74 += 4;
                *v26 = v25[0xFFFFFFFF + v24 + v24];
                v27 = v24 * 4 + v76;
                v76 += 0x10;
                v26[1] = *v25;
                v84 += 4;
                v26[2] = *(float *)&v13[v27];
                v26 += 0xC;
                v26[0xFFFFFFF7] = *(float *)&v13[v24 * 4 + v27];
                v26[0xFFFFFFF8] = v25[1];
                v26[0xFFFFFFF9] = v25[v24 + 1];
                v26[0xFFFFFFFA] = v25[v24 + 1 + v24];
                v28 = v24 * 4 + (char *)v25 - v13 + 8;
                v29 = v25[2];
                v25 += 4;
                v26[0xFFFFFFFB] = v29;
                v26[0xFFFFFFFC] = *(float *)&v13[v28];
                v26[0xFFFFFFFD] = *(float *)&v13[v24 * 4 + v28];
              }
              while ( v74 < v72 - 3 );
            }
            if ( v74 < v72 )
            {
              v30 = v80;
              v81 = v80 + v74;
              v31 = 4 * v81;
              v32 = v72 - v74;
              v33 = (float *)(this + v30 + v85 + 0x6CD);
              do
              {
                ++v81;
                v33[0xFFFFFFFE] = *(float *)&v13[v31];
                v34 = v31 + 4 * v72;
                v33[0xFFFFFFFF] = *(float *)&v13[v34];
                v33 += 3;
                v31 += 4;
                --v32;
                v33[0xFFFFFFFD] = *(float *)&v13[4 * v72 + v34];
              }
              while ( v32 );
            }
            v23 = dword_B17FB4[0x25 * (_DWORD)*(this + 0x104E) + 1 + v86];
            v35 = dword_B17FB8[0x25 * (_DWORD)*(this + 0x104E) + 1 + v86] - v23;
            v36 = ++v86 < 0xD;
            v72 = v35;
          }
          while ( v36 );
          v14 = v78;
        }
        else
        {
          v37 = 0;
          v38 = (float *)(this + 0x6CC);
          do
          {
            v38 += 9;
            v38[0xFFFFFFF6] = *(float *)&v13[4 * *(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18650)];
            v38[0xFFFFFFF7] = *(float *)&v13[4 * *(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18654)];
            v38[0xFFFFFFF8] = *(float *)&v13[4 * *(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18658)];
            v38[0xFFFFFFF9] = *(float *)&v13[4 * *(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB1865C)];
            v38[0xFFFFFFFA] = *(float *)&v13[4 * *(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18660)];
            v38[0xFFFFFFFB] = *(float *)&v13[4 * *(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18664)];
            v38[0xFFFFFFFC] = *(float *)&v13[4 * *(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18668)];
            v38[0xFFFFFFFD] = *(float *)&v13[4 * *(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB1866C)];
            v39 = *(_DWORD *)(4 * (v37 + 0x240 * (_DWORD)*(this + 0x104E)) + 0xB18670);
            v37 += 9;
            v38[0xFFFFFFFE] = *(float *)&v13[4 * v39];
          }
          while ( v37 < 0x240 );
        }
      }
      else
      {
        v40 = (float *)(this + 0x48D);
        v41 = (float *)(this + 0x6CC);
        v42 = 0x40;
        do
        {
          v41 += 9;
          v41[0xFFFFFFF6] = v40[0xFFFFFFFE];
          v40 += 9;
          --v42;
          v41[0xFFFFFFF7] = v40[0xFFFFFFF6];
          v41[0xFFFFFFF8] = v40[0xFFFFFFF7];
          v41[0xFFFFFFF9] = v40[0xFFFFFFF8];
          v41[0xFFFFFFFA] = v40[0xFFFFFFF9];
          v41[0xFFFFFFFB] = v40[0xFFFFFFFA];
          v41[0xFFFFFFFC] = v40[0xFFFFFFFB];
          v41[0xFFFFFFFD] = v40[0xFFFFFFFC];
          v41[0xFFFFFFFE] = v40[0xFFFFFFFD];
        }
        while ( v42 );
      }
      if ( !v14[4] )
        break;
      if ( !v14[6] )
        goto LABEL_45;
      v43 = 0x12;
      if ( v14[5] != 2 )
        goto LABEL_45;
LABEL_46:
      v44 = (float *)(this + 0x6DD);
      v45 = (v43 - 1) / 0x12u + 1;
      do
      {
        v46 = v44[0xFFFFFFFF];
        v47 = *v44;
        v44[0xFFFFFFFF] = flt_B18610 * v46 - flt_B18630 * v47;
        *v44 = v46 * flt_B18630 + v47 * flt_B18610;
        v48 = v44[0xFFFFFFFE];
        v49 = v44[1];
        v44[0xFFFFFFFE] = flt_B18614 * v48 - flt_B18634 * v49;
        v44[1] = v48 * flt_B18634 + v49 * flt_B18614;
        v50 = v44[0xFFFFFFFD];
        v51 = v44[2];
        v44[0xFFFFFFFD] = flt_B18618 * v50 - flt_B18638 * v51;
        v44[2] = v50 * flt_B18638 + v51 * flt_B18618;
        v52 = v44[0xFFFFFFFC];
        v53 = v44[3];
        v44[0xFFFFFFFC] = flt_B1861C * v52 - flt_B1863C * v53;
        v44[3] = v52 * flt_B1863C + v53 * flt_B1861C;
        v54 = v44[0xFFFFFFFB];
        v55 = v44[4];
        v44[0xFFFFFFFB] = flt_B18620 * v54 - flt_B18640 * v55;
        v44 += 0x12;
        --v45;
        v44[0xFFFFFFF2] = v54 * flt_B18640 + v55 * flt_B18620;
        v56 = v44[0xFFFFFFE8];
        v57 = v44[0xFFFFFFF3];
        v44[0xFFFFFFE8] = flt_B18624 * v56 - flt_B18644 * v57;
        v44[0xFFFFFFF3] = v56 * flt_B18644 + v57 * flt_B18624;
        v58 = v44[0xFFFFFFE7];
        v59 = v44[0xFFFFFFF4];
        v44[0xFFFFFFE7] = flt_B18628 * v58 - flt_B18648 * v59;
        v44[0xFFFFFFF4] = v58 * flt_B18648 + v59 * flt_B18628;
        v73 = v44[0xFFFFFFE6];
        v75 = v44[0xFFFFFFF5];
        v44[0xFFFFFFE6] = flt_B1862C * v73 - flt_B1864C * v75;
        v44[0xFFFFFFF5] = v73 * flt_B1864C + v75 * flt_B1862C;
      }
      while ( v45 );
      v77 = 0;
      v60 = (float *)(this + 0x90C);
      while ( 1 )
      {
        v61 = v14[4] && v14[6] && v77 < 0x24 ? 0 : v14[5];
        sub_6B1EA0(v60 + 0xFFFFFDBF, v87, v61);
        v60[0xFFFFFDBF] = v60[0xFFFFFFFF] + v87[0];
        v60[0xFFFFFFFF] = v87[0x12];
        v60[0xFFFFFDC0] = *v60 + v87[1];
        *v60 = v87[0x13];
        v60[0xFFFFFDC1] = v60[1] + v87[2];
        v60[1] = v87[0x14];
        v60[0xFFFFFDC2] = v60[2] + v87[3];
        v60[2] = v87[0x15];
        v60[0xFFFFFDC3] = v60[3] + v87[4];
        v60[3] = v87[0x16];
        v60[0xFFFFFDC4] = v60[4] + v87[5];
        v60[4] = v87[0x17];
        v60[0xFFFFFDC5] = v60[5] + v87[6];
        v60[5] = v87[0x18];
        v60[0xFFFFFDC6] = v60[6] + v87[7];
        v60[6] = v87[0x19];
        v60[0xFFFFFDC7] = v60[7] + v87[8];
        v60[7] = v87[0x1A];
        v60[0xFFFFFDC8] = v60[8] + v87[9];
        v60[8] = v87[0x1B];
        v60[0xFFFFFDC9] = v60[9] + v87[0xA];
        v60[9] = v87[0x1C];
        v60[0xFFFFFDCA] = v60[0xA] + v87[0xB];
        v60[0xA] = v87[0x1D];
        v60[0xFFFFFDCB] = v60[0xB] + v87[0xC];
        v60[0xB] = v87[0x1E];
        v60[0xFFFFFDCC] = v60[0xC] + v87[0xD];
        v60[0xC] = v87[0x1F];
        v60[0xFFFFFDCD] = v60[0xD] + v87[0xE];
        v60[0xD] = v87[0x20];
        v62 = v60[0xE] + v87[0xF];
        v60 += 0x12;
        v36 = v77 + 0x12 < 0x240;
        v77 += 0x12;
        v60[0xFFFFFDBC] = v62;
        v60[0xFFFFFFFC] = v87[0x21];
        v60[0xFFFFFDBD] = v60[0xFFFFFFFD] + v87[0x10];
        v60[0xFFFFFFFD] = v87[0x22];
        v60[0xFFFFFDBE] = v87[0x11] + v60[0xFFFFFFFE];
        v60[0xFFFFFFFE] = v87[0x23];
        if ( !v36 )
          break;
        v14 = v78;
      }
      v63 = (float *)(this + 0x6DE);
      v64 = 0x10;
      do
      {
        v65 = v63;
        v66 = 9;
        do
        {
          v67 = *v65;
          v65 += 2;
          --v66;
          v65[0xFFFFFFFE] = -v67;
        }
        while ( v66 );
        v63 += 0x24;
        --v64;
      }
      while ( v64 );
      v68 = (float *)(this + 0x6CB);
      v79 = 0x12;
      do
      {
        v69 = 0x402;
        v70 = v68;
        v71 = 0x20;
        do
        {
          (*(this + 2))[v69++] = *(unsigned int *)v70;
          v70 += 0x12;
          --v71;
        }
        while ( v71 );
        sub_6B66A0((float *)*(this + 2), (int *)*(this + 3));
        ++v68;
        --v79;
      }
      while ( v79 );
      v83 += 0x48;
      if ( ++v82 >= (int)*(this + 0x1048) )
        goto LABEL_65;
      v12 = v82;
    }
    if ( !v14[6] && v14[5] == 2 )
      return 0;
LABEL_45:
    v43 = 0x22E;
    goto LABEL_46;
  }
LABEL_65:
  if ( sub_6B3790(*this) )
    *((_BYTE *)*this + 0x18) = 1;
  else
    *((_BYTE *)*this + 0x18) = 0;
  return (*(this + 3))[1];
}
