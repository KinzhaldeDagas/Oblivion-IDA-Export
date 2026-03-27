char __thiscall sub_7920A0(
        void *this,
        _DWORD *a2,
        float a3,
        unsigned int a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        int a9,
        float a10,
        int a11)
{
  _BYTE *v12; // ecx
  int v13; // esi
  double v14; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st4
  float v20; // edx
  float v21; // eax
  double v22; // st3
  double v23; // st7
  double v24; // st6
  double v25; // st7
  double v26; // st6
  double v27; // st5
  _DWORD *v28; // eax
  float *v29; // ecx
  int v30; // edx
  int v31; // edx
  float v32; // ecx
  int v33; // edx
  int v34; // ecx
  float *v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // edx
  float v38; // eax
  float v39; // eax
  double v40; // kr00_8
  float v42; // [esp+2Ch] [ebp-F0h]
  float v43; // [esp+2Ch] [ebp-F0h]
  float v44; // [esp+2Ch] [ebp-F0h]
  float v45; // [esp+2Ch] [ebp-F0h]
  float v46; // [esp+2Ch] [ebp-F0h]
  float v47; // [esp+2Ch] [ebp-F0h]
  float v48; // [esp+2Ch] [ebp-F0h]
  double v49; // [esp+30h] [ebp-ECh] BYREF
  float v50; // [esp+38h] [ebp-E4h]
  double v51; // [esp+3Ch] [ebp-E0h] BYREF
  float v52; // [esp+44h] [ebp-D8h]
  double v53; // [esp+4Ch] [ebp-D0h]
  float v54; // [esp+54h] [ebp-C8h]
  double v55; // [esp+5Ch] [ebp-C0h]
  float v56; // [esp+64h] [ebp-B8h]
  double v57; // [esp+6Ch] [ebp-B0h]
  float v58; // [esp+74h] [ebp-A8h]
  double v59; // [esp+7Ch] [ebp-A0h]
  double v60; // [esp+84h] [ebp-98h]
  float v61; // [esp+8Ch] [ebp-90h]
  float v62; // [esp+90h] [ebp-8Ch]
  float v63; // [esp+94h] [ebp-88h]
  float v64; // [esp+98h] [ebp-84h]
  float v65[14]; // [esp+A0h] [ebp-7Ch] BYREF
  double v66; // [esp+D8h] [ebp-44h] BYREF
  float v67; // [esp+E0h] [ebp-3Ch]
  float v68; // [esp+E8h] [ebp-34h]
  float v69; // [esp+ECh] [ebp-30h]
  float v70; // [esp+F0h] [ebp-2Ch]
  float v71; // [esp+F4h] [ebp-28h]
  float v72; // [esp+F8h] [ebp-24h]
  float v73; // [esp+FCh] [ebp-20h]
  float v74; // [esp+100h] [ebp-1Ch]
  float v75; // [esp+104h] [ebp-18h]
  float v76; // [esp+108h] [ebp-14h]
  double v77; // [esp+114h] [ebp-8h]

  v12 = dword_B429E0;
  if ( !dword_B429E0 || a4 >= ((_BYTE *)dword_B429E4 - v12) >> 2 )
  {
    _invalid_parameter_noinfo();
    v12 = dword_B429E0;
  }
  v13 = *(_DWORD *)&v12[4 * a4];
  v61 = 0.0;
  *((float *)&v60 + 1) = 0.0;
  *(float *)&v60 = 0.0;
  v64 = 0.0;
  v63 = 0.0;
  v62 = 0.0;
  v65[0] = 1.0;
  v65[4] = 1.0;
  v65[8] = 1.0;
  v68 = 1.0;
  v72 = 1.0;
  v76 = 1.0;
  v65[1] = 0.0;
  v65[2] = 0.0;
  v65[3] = 0.0;
  v65[5] = 0.0;
  v65[6] = 0.0;
  v65[7] = 0.0;
  v65[0xD] = 0.0;
  v65[0xC] = 0.0;
  v65[0xB] = 0.0;
  v67 = 0.0;
  *((float *)&v66 + 1) = 0.0;
  *(float *)&v66 = 0.0;
  v69 = 0.0;
  v70 = 0.0;
  v71 = 0.0;
  v73 = 0.0;
  v74 = 0.0;
  v75 = 0.0;
  *(float *)&v59 = sub_784210((float *)*(_DWORD *)(v13 + 0x60), a6) * a3;
  v14 = *(float *)&v59 / (double)*(int *)(v13 + 4);
  v15 = dbl_A3D8E8;
  if ( v15 >= v14 )
    v14 = v15;
  v42 = v14;
  *(float *)&v59 = sub_78EA00(flt_A8C694, flt_A3F420);
  v16 = a8[1];
  v17 = *a8;
  v18 = a8[2];
  v19 = a7[1] * v16;
  v20 = a5[1];
  v21 = a5[2];
  v22 = *a7 * v17;
  v62 = *a5;
  v63 = v20;
  v64 = v21;
  *(float *)&v49 = v19 + v22 + a7[2] * v18;
  *((float *)&v49 + 1) = a7[3] * v17 + a7[4] * v16 + a7[5] * v18;
  v23 = v16 * a7[7] + v17 * a7[6];
  v24 = v18 * a7[8];
  qmemcpy(v65, a7, 0x24u);
  v50 = v23 + v24;
  sub_78F050(v65, *(float *)&v59, v49, v50);
  sub_78EEC0(v65, flt_A5793C);
  v25 = flt_B2B71C;
  v26 = flt_B2B718;
  v27 = flt_B2B720;
  *(float *)&v49 = v65[0] * v26 + v65[3] * v25 + v65[6] * v27;
  *((float *)&v49 + 1) = v65[1] * v26 + v65[4] * v25 + v65[7] * v27;
  v60 = v49;
  v50 = v25 * v65[5] + v26 * v65[2] + v27 * v65[8];
  v61 = v50;
  *(float *)&v57 = *(float *)&v49 * v42;
  *((float *)&v57 + 1) = *((float *)&v49 + 1) * v42;
  v58 = v42 * v50;
  *(float *)&v53 = *(float *)&v57 + v62;
  *((float *)&v53 + 1) = *((float *)&v57 + 1) + v63;
  v66 = v53;
  v54 = v58 + v64;
  v67 = v54;
  v55 = *(float *)&v53;
  *(float *)&v49 = *(float *)&v53 - v62;
  v57 = *((float *)&v53 + 1);
  *((float *)&v49 + 1) = *((float *)&v53 + 1) - v63;
  v53 = v54;
  v50 = v54 - v64;
  v77 = *((float *)&v49 + 1);
  v59 = *(float *)&v49;
  v51 = v50;
  v43 = *((float *)&v49 + 1) * *((float *)&v49 + 1) + *(float *)&v49 * *(float *)&v49 + v50 * v50;
  v44 = sqrt(v43);
  v28 = a2;
  v45 = 1.0 / v44;
  *(float *)&v49 = *(float *)&v49 * v45;
  *((float *)&v49 + 1) = *((float *)&v49 + 1) * v45;
  v50 = v45 * v50;
  if ( a2 && a2[7] )
  {
    v29 = (float *)a2[6];
    v30 = *((_DWORD *)v29 + 3);
    v29 += 3;
    LODWORD(v51) = v30;
    v31 = *((_DWORD *)v29 + 1);
    v32 = v29[2];
    HIDWORD(v51) = v31;
    v33 = *(_DWORD *)(dword_B429B8 + 0x2C);
    v52 = v32;
    if ( v33 )
    {
      v34 = 0;
      while ( v34 < v33 )
      {
        v28 = (_DWORD *)*v28;
        ++v34;
        if ( !v28 )
          goto LABEL_15;
      }
      if ( v28 )
      {
        v35 = (float *)v28[6];
        v36 = *((_DWORD *)v35 + 3);
        v37 = *((_DWORD *)v35 + 4);
        v38 = v35[5];
        v51 = COERCE_DOUBLE(__PAIR64__(v37, v36));
        v52 = v38;
      }
    }
LABEL_15:
    *(float *)&v55 = v55 - *(float *)&v51;
    *((float *)&v55 + 1) = v57 - *((float *)&v51 + 1);
    v56 = v53 - v52;
    v39 = v56;
    v40 = v55;
  }
  else
  {
    v40 = v49;
    v39 = v50;
  }
  v57 = *((float *)&v40 + 1);
  v53 = *(float *)&v40;
  v55 = v39;
  v46 = *((float *)&v40 + 1) * *((float *)&v40 + 1) + *(float *)&v40 * *(float *)&v40 + v39 * v39;
  v47 = sqrt(v46);
  v48 = 1.0 / v47;
  *(float *)&v51 = *(float *)&v40 * v48;
  *((float *)&v51 + 1) = *((float *)&v40 + 1) * v48;
  v52 = v48 * v39;
  return sub_7919D0((float *)&v66, a6, (int)this, (float *)&v49, (float *)&v51, a10, a11, a9);
}
