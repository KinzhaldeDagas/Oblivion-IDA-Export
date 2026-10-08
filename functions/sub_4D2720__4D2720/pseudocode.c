void __thiscall sub_4D2720(ExtraDataList *this, float *a2)
{
  int v3; // eax
  float v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  float *v9; // esi
  BSExtraDataVtbl *i; // eax
  double v11; // st7
  double v12; // st7
  int v13; // esi
  float *v14; // edi
  _DWORD *v15; // ecx
  int v16; // esi
  int v17; // ebp
  int v18; // edi
  double v19; // st7
  double v20; // st6
  double v21; // st4
  double v22; // st4
  bool v23; // c0
  bool v24; // c3
  float *v25; // eax
  int v26; // esi
  int v27; // edi
  float *v28; // eax
  int v29; // esi
  float *v30; // edi
  _DWORD *v31; // ecx
  BSExtraDataVtbl *SeenData; // esi
  _DWORD *v33; // eax
  BSExtraDataVtbl *v34; // eax
  int v35; // eax
  int v36; // ecx
  int *v37; // eax
  int v38; // eax
  void (__thiscall *v39)(ExtraDataList *, int); // eax
  void (__thiscall *v40)(ExtraDataList *, int); // eax
  int v41; // [esp+14h] [ebp-F8h]
  float v42; // [esp+14h] [ebp-F8h]
  float NorthRotation; // [esp+18h] [ebp-F4h]
  int v44; // [esp+18h] [ebp-F4h]
  float v45; // [esp+18h] [ebp-F4h]
  int v46; // [esp+1Ch] [ebp-F0h]
  float v47; // [esp+20h] [ebp-ECh]
  float v48; // [esp+20h] [ebp-ECh]
  float v49; // [esp+20h] [ebp-ECh]
  float v50; // [esp+20h] [ebp-ECh]
  float v51; // [esp+24h] [ebp-E8h]
  float v52; // [esp+24h] [ebp-E8h]
  float v53; // [esp+24h] [ebp-E8h]
  float v54; // [esp+28h] [ebp-E4h]
  float v55; // [esp+28h] [ebp-E4h]
  float v56; // [esp+28h] [ebp-E4h]
  unsigned int v57; // [esp+2Ch] [ebp-E0h]
  unsigned int v58; // [esp+2Ch] [ebp-E0h]
  int v59; // [esp+30h] [ebp-DCh]
  int v60; // [esp+30h] [ebp-DCh]
  int v61; // [esp+34h] [ebp-D8h] BYREF
  float v62; // [esp+38h] [ebp-D4h]
  float v63; // [esp+3Ch] [ebp-D0h]
  float v64; // [esp+40h] [ebp-CCh] BYREF
  float v65; // [esp+44h] [ebp-C8h]
  float v66; // [esp+48h] [ebp-C4h]
  float v67; // [esp+4Ch] [ebp-C0h]
  float v68; // [esp+50h] [ebp-BCh]
  BSExtraDataVtbl *v69; // [esp+54h] [ebp-B8h]
  BSExtraDataVtbl *v70; // [esp+58h] [ebp-B4h]
  int v71; // [esp+5Ch] [ebp-B0h]
  int v72; // [esp+60h] [ebp-ACh]
  _DWORD v73[12]; // [esp+64h] [ebp-A8h] BYREF
  char v74[108]; // [esp+94h] [ebp-78h] BYREF
  unsigned int v75; // [esp+108h] [ebp-4h]

  if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4d2753*/
  {
    v3 = *(int *)a2; /*0x4d2763*/
    v4 = a2[2]; /*0x4d2765*/
    v62 = a2[1]; /*0x4d2768*/
    v61 = v3; /*0x4d276f*/
    v63 = v4; /*0x4d2773*/
    NorthRotation = ExtraDataList_GetNorthRotation(this + 2); /*0x4d277c*/
    if ( 0.0 == NorthRotation ) /*0x4d278b*/
    {
      v70 = 0; /*0x4d2920*/
      v71 = 0; /*0x4d2924*/
      v72 = 0; /*0x4d2928*/
      _memset((int)v73, 0, sizeof(v73)); /*0x4d2931*/
      v16 = ((int)*(float *)&v61 - 0x800) >> 0xC; /*0x4d294b*/
      v17 = 1; /*0x4d2960*/
      v18 = ((int)v62 - 0x800) >> 0xC; /*0x4d2966*/
      v69 = sub_4CCEE0(this, v16, v18, 1); /*0x4d2972*/
      v45 = (float)((v16 << 0xC) + 0x800); /*0x4d298e*/
      *(float *)v73 = v45; /*0x4d29b7*/
      v42 = (float)((v18 << 0xC) + 0x800); /*0x4d29bb*/
      v19 = v63; /*0x4d29dd*/
      v60 = 0; /*0x4d29df*/
      v64 = v45; /*0x4d29e3*/
      *(float *)&v73[1] = v42; /*0x4d29e7*/
      v20 = v45; /*0x4d29eb*/
      v65 = v42; /*0x4d29f1*/
      *(float *)&v73[2] = v63; /*0x4d29f5*/
      v67 = (float)((v16 << 0xC) + 0x1000800); /*0x4d2a01*/
      v68 = (float)((v18 << 0xC) + 0x1000800); /*0x4d2a09*/
      if ( v45 < *(float *)&v61 - MEMORY[0xB35C14][0] ) /*0x4d2a2a*/
      {
        v22 = *(float *)&v61 + MEMORY[0xB35C14][0]; /*0x4d2a3a*/
        v23 = v67 < v22; /*0x4d2a40*/
        v24 = v67 == v22; /*0x4d2a40*/
        v21 = MEMORY[0xB35C14][0]; /*0x4d2a44*/
        v58 = v23 || v24; /*0x4d2a4b*/
      }
      else
      {
        v21 = MEMORY[0xB35C14][0]; /*0x4d2a2c*/
        v58 = 0xFFFFFFFF; /*0x4d2a2e*/
      }
      if ( v65 < v62 - v21 ) /*0x4d2a62*/
      {
        if ( v68 <= v21 + v62 ) /*0x4d2a7f*/
          v60 = 1; /*0x4d2a81*/
      }
      else
      {
        v60 = 0xFFFFFFFF; /*0x4d2a66*/
      }
      if ( v58 ) /*0x4d2a8b*/
      {
        v48 = (float)(int)(((v16 + v58) << 0xC) + 0x800); /*0x4d2aa7*/
        *(float *)&v73[3] = v48; /*0x4d2aaf*/
        *(float *)&v73[4] = (float)((v18 << 0xC) + 0x800); /*0x4d2abb*/
        *(float *)&v73[5] = v63; /*0x4d2aca*/
        v19 = v63; /*0x4d2ad6*/
        v20 = v45; /*0x4d2ada*/
        v70 = sub_4CCEE0(this, v16 + v58, v18, 1); /*0x4d2ade*/
        v17 = 2; /*0x4d2ae2*/
      }
      if ( v60 ) /*0x4d2af1*/
      {
        v49 = v20; /*0x4d2af5*/
        v25 = (float *)&v73[3 * v17]; /*0x4d2b13*/
        *v25 = v49; /*0x4d2b17*/
        v52 = (float)(((v18 + v60) << 0xC) + 0x800); /*0x4d2b19*/
        v55 = v19; /*0x4d2b23*/
        v25[1] = v52; /*0x4d2b27*/
        v25[2] = v55; /*0x4d2b32*/
        v19 = v63; /*0x4d2b3a*/
        *(&v69 + v17++) = sub_4CCEE0(this, v16, v18 + v60, 1); /*0x4d2b3e*/
      }
      if ( v58 ) /*0x4d2b4f*/
      {
        if ( v60 ) /*0x4d2b57*/
        {
          v26 = v58 + v16; /*0x4d2b59*/
          v27 = v60 + v18; /*0x4d2b5b*/
          v50 = (float)((v26 << 0xC) + 0x800); /*0x4d2b7b*/
          v28 = (float *)&v73[3 * v17]; /*0x4d2b8f*/
          v53 = (float)((v27 << 0xC) + 0x800); /*0x4d2b93*/
          *v28 = v50; /*0x4d2b9b*/
          v56 = v19; /*0x4d2b9f*/
          v28[1] = v53; /*0x4d2ba7*/
          v28[2] = v56; /*0x4d2bab*/
          *(&v69 + v17) = sub_4CCEE0(this, v26, v27, 1); /*0x4d2bb6*/
        }
      }
      v29 = 0; /*0x4d2bbe*/
      v30 = (float *)v73; /*0x4d2bc0*/
      do /*0x4d2be4*/
      {
        v31 = *(&v69 + v29); /*0x4d2bc4*/
        if ( !v31 ) /*0x4d2bca*/
          break; /*0x4d2bca*/
        sub_4126C0(v31, (float *)&v61, v30); /*0x4d2bd6*/
        ++v29; /*0x4d2bdb*/
        v30 += 3; /*0x4d2bde*/
      }
      while ( v29 < 4 ); /*0x4d2be4*/
    }
    else
    {
      sub_4CCE20(this, a2, &v61, COERCE_FLOAT(1)); /*0x4d279b*/
      memset(v73, 0, 0x24); /*0x4d27ad*/
      _memset((int)v74, 0, sizeof(v74)); /*0x4d27e0*/
      v5 = ((int)*(float *)&v61 - 0x800) >> 0xC; /*0x4d27fa*/
      v67 = *(float *)&v5; /*0x4d27fd*/
      v6 = ((int)v62 - 0x800) >> 0xC; /*0x4d2812*/
      LODWORD(v64) = (v6 << 0xC) - 0x800; /*0x4d2820*/
      v7 = 0; /*0x4d2829*/
      v44 = v6; /*0x4d2831*/
      v57 = 0xFFFFFFFF; /*0x4d2835*/
      v46 = (v5 << 0xC) - 0x800; /*0x4d283d*/
      while ( 1 ) /*0x4d2853*/
      {
        v8 = 0xFFFFFFFF; /*0x4d2853*/
        v41 = v5 + v57; /*0x4d2864*/
        v9 = (float *)&v74[0xC * v7]; /*0x4d2868*/
        v59 = LODWORD(v64); /*0x4d286f*/
        for ( i = sub_4CCEE0(this, v5 + v57, v6 - 1, 1); ; i = sub_4CCEE0(this, v41, v8 + v44, 1) ) /*0x4d2873*/
        {
          v11 = (double)v59; /*0x4d288b*/
          v59 += 0x1000; /*0x4d2893*/
          v51 = v11; /*0x4d289b*/
          v12 = v63; /*0x4d28a3*/
          v73[v7] = i; /*0x4d28a7*/
          v47 = (float)v46; /*0x4d285c*/
          *v9 = v47; /*0x4d28ab*/
          v54 = v12; /*0x4d28ad*/
          v9[1] = v51; /*0x4d28b5*/
          v9[2] = v54; /*0x4d28b8*/
          ++v8; /*0x4d28bb*/
          ++v7; /*0x4d28be*/
          v9 += 3; /*0x4d28c1*/
          if ( v8 > 1 ) /*0x4d28c7*/
            break; /*0x4d28c7*/
        }
        v46 += 0x1000; /*0x4d28cd*/
        if ( (int)++v57 > 1 ) /*0x4d28df*/
          break; /*0x4d28df*/
        *(float *)&v5 = v67; /*0x4d2843*/
        v6 = v44; /*0x4d2847*/
      }
      v13 = 0; /*0x4d28e5*/
      v14 = (float *)v74; /*0x4d28e7*/
      do /*0x4d2910*/
      {
        v15 = (_DWORD *)v73[v13]; /*0x4d28f0*/
        if ( !v15 ) /*0x4d28f6*/
          break; /*0x4d28f6*/
        sub_4126C0(v15, (float *)&v61, v14); /*0x4d2902*/
        ++v13; /*0x4d2907*/
        v14 += 3; /*0x4d290a*/
      }
      while ( v13 < 9 ); /*0x4d2910*/
    }
  }
  else if ( (*((_BYTE *)this + 0x25) & 1) == 0 ) /*0x4d2bef*/
  {
    SeenData = ExtraDataList_GetSeenData(this + 2); /*0x4d2bff*/
    if ( !SeenData ) /*0x4d2c03*/
    {
      v33 = (_DWORD *)FormHeapAlloc(0x24u); /*0x4d2c07*/
      v75 = 0; /*0x4d2c15*/
      if ( v33 ) /*0x4d2c1c*/
        v34 = (BSExtraDataVtbl *)SeenData::SeenData__(v33); /*0x4d2c20*/
      else
        v34 = 0; /*0x4d2c27*/
      v75 = 0xFFFFFFFF; /*0x4d2c2c*/
      SeenData = v34; /*0x4d2c37*/
      ExtraDataList_SetSeenData(this + 2, v34); /*0x4d2c39*/
      (*((void (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x12))(this, 0x10000000); /*0x4d2c4a*/
    }
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 || (v35 = *((_DWORD *)this + 0xF)) == 0 ) /*0x4d2c59*/
      v36 = 0; /*0x4d2c60*/
    else
      v36 = *(_DWORD *)(v35 + 4); /*0x4d2c5b*/
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 || (v37 = *((int **)this + 0xF)) == 0 ) /*0x4d2c6b*/
      v38 = 0; /*0x4d2c71*/
    else
      v38 = *v37; /*0x4d2c6d*/
    v64 = (float)(v38 << 0xC); /*0x4d2c88*/
    v65 = (float)(v36 << 0xC); /*0x4d2c9a*/
    v66 = a2[2]; /*0x4d2ca3*/
    if ( sub_4126C0(SeenData, a2, &v64) ) /*0x4d2ca7*/
    {
      ExtraDataList_SetSeenData(this + 2, 0); /*0x4d2cb4*/
      v39 = *((void (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x11); /*0x4d2cbb*/
      *((_BYTE *)this + 0x25) &= ~1u; /*0x4d2cbe*/
      v39(this, 0x16000000); /*0x4d2cc9*/
      v40 = *((void (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10); /*0x4d2ccd*/
      *((_BYTE *)this + 0x25) |= 1u; /*0x4d2cd0*/
      v40(this, 8); /*0x4d2cd8*/
    }
  }
}
