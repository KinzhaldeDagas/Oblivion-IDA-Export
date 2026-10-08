char __cdecl sub_4C1840()
{
  char v0; // bl
  float v1; // ebp
  TESForm *v2; // eax
  TESForm *v3; // eax
  float v4; // esi
  bool v5; // zf
  LONG (__stdcall *v6)(volatile LONG *); // ebx
  void (__thiscall ***v7)(_DWORD, int); // esi
  NiTexturingProperty *v8; // eax
  NiTexturingProperty *v9; // esi
  int v10; // eax
  void (__thiscall ***v11)(_DWORD, int); // edi
  int v12; // eax
  void (__thiscall ***v13)(_DWORD, int); // ecx
  int v14; // esi
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // edi
  int v19; // ebx
  __int16 v20; // dx
  __int16 v21; // bx
  int v22; // ecx
  __int16 v23; // ax
  int v24; // ecx
  __int16 v25; // bp
  int v26; // ecx
  double v27; // st7
  char *v28; // eax
  int v29; // edx
  float *v30; // ecx
  int v31; // eax
  int v32; // ecx
  double v33; // st7
  double v34; // st6
  int v35; // edi
  int v36; // esi
  int v37; // edx
  float v38; // ebx
  char *v39; // eax
  double v40; // st5
  float *v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // ebp
  int i; // ecx
  int v46; // esi
  float v47; // edi
  int v48; // ebx
  int v49; // edx
  int v50; // ecx
  double v51; // st7
  float *v52; // eax
  double v53; // st6
  double v54; // st6
  char result; // al
  int v56; // [esp-14h] [ebp-60h]
  int v57; // [esp+14h] [ebp-38h] BYREF
  int v58; // [esp+18h] [ebp-34h] BYREF
  float v59; // [esp+1Ch] [ebp-30h]
  float v60; // [esp+20h] [ebp-2Ch]
  float v61; // [esp+24h] [ebp-28h]
  float v62; // [esp+28h] [ebp-24h]
  float v63; // [esp+2Ch] [ebp-20h]
  float v64; // [esp+30h] [ebp-1Ch]
  float v65; // [esp+34h] [ebp-18h]
  float v66; // [esp+38h] [ebp-14h]
  float v67; // [esp+3Ch] [ebp-10h]
  int v68; // [esp+48h] [ebp-4h]

  v0 = 0; /*0x4c1867*/
  v1 = 0.0; /*0x4c186b*/
  *(float *)&v58 = 0.0; /*0x4c186d*/
  *(float *)&v2 = COERCE_FLOAT(FormHeapAlloc(0x34u)); /*0x4c1871*/
  v59 = *(float *)&v2; /*0x4c1879*/
  v68 = 0; /*0x4c187f*/
  if ( *(float *)&v2 == 0.0 ) /*0x4c1883*/
    v3 = 0; /*0x4c188e*/
  else
    v3 = sub_4C93D0(v2); /*0x4c1887*/
  v68 = 0xFFFFFFFF; /*0x4c189c*/
  unk_B35BE4 = (int)v3; /*0x4c18a0*/
  BSStringT_Set((BSStringT *)&v3[1].member, "Default.DDS", 0); /*0x4c18a5*/
  sub_4C95B0((Ni2DBuffer **)unk_B35BE4); /*0x4c18b0*/
  v4 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x4c18bc*/
  v59 = v4; /*0x4c18c1*/
  v68 = 1; /*0x4c18c7*/
  if ( v4 != 0.0 ) /*0x4c18cf*/
  {
    v0 = 1; /*0x4c18e9*/
    v56 = *sub_4C1670((_DWORD *)unk_B35BE4, &v57); /*0x4c18ee*/
    LOBYTE(v68) = 2; /*0x4c18f1*/
    v58 = 1; /*0x4c18f6*/
    v1 = COERCE_FLOAT(sub_704130((_WORD *)LODWORD(v4), v56, 0, 3, 5, 0)); /*0x4c18ff*/
  }
  v5 = (v0 & 1) == 0; /*0x4c1901*/
  v6 = InterlockedDecrement; /*0x4c1904*/
  v68 = 0xFFFFFFFF; /*0x4c190a*/
  if ( !v5 ) /*0x4c190e*/
  {
    v7 = (void (__thiscall ***)(_DWORD, int))v57; /*0x4c1910*/
    if ( v57 ) /*0x4c1916*/
    {
      if ( !v6((volatile LONG *)(v57 + 4)) ) /*0x4c191c*/
      {
        if ( v7 ) /*0x4c1924*/
          (**v7)(v7, 1); /*0x4c192e*/
      }
    }
  }
  *(float *)&v8 = COERCE_FLOAT(FormHeapAlloc(0x30u)); /*0x4c1932*/
  v59 = *(float *)&v8; /*0x4c193a*/
  v68 = 4; /*0x4c1940*/
  if ( *(float *)&v8 == 0.0 ) /*0x4c1948*/
    v9 = 0; /*0x4c1955*/
  else
    v9 = NiTexturingProperty::NiTexturingProperty(v8); /*0x4c1951*/
  v10 = unk_B35BEC; /*0x4c1957*/
  v5 = unk_B35BEC == (_DWORD)v9; /*0x4c195c*/
  v68 = 0xFFFFFFFF; /*0x4c195e*/
  if ( !v5 ) /*0x4c1962*/
  {
    if ( v10 ) /*0x4c1966*/
    {
      v11 = (void (__thiscall ***)(_DWORD, int))v10; /*0x4c1968*/
      if ( !v6((volatile LONG *)(v10 + 4)) ) /*0x4c196e*/
        (**v11)(v11, 1); /*0x4c1980*/
    }
    v10 = (int)v9; /*0x4c1984*/
    unk_B35BEC = (int)v9; /*0x4c1986*/
    if ( v9 ) /*0x4c198b*/
    {
      InterlockedIncrement((volatile LONG *)&v9->super); /*0x4c1991*/
      v10 = unk_B35BEC; /*0x4c1997*/
    }
  }
  *(_WORD *)(v10 + 0x18) = *(_WORD *)(v10 + 0x18) & 0xFFF1 | 4; /*0x4c19a9*/
  v12 = unk_B35BEC; /*0x4c19ad*/
  v13 = **(void (__thiscall *****)(_DWORD, int))(unk_B35BEC + 0x20); /*0x4c19b5*/
  *(float *)&v58 = v1; /*0x4c19b9*/
  v14 = v12; /*0x4c19bd*/
  if ( (void (__thiscall ***)(_DWORD, int))LODWORD(v1) != v13 ) /*0x4c19bf*/
  {
    if ( v13 ) /*0x4c19c3*/
      (**v13)(v13, 1); /*0x4c19cb*/
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(v14 + 0x1C), 0, &v58); /*0x4c19d7*/
  }
  v15 = FormHeapAlloc(0xC00u); /*0x4c19e1*/
  v16 = 0; /*0x4c19e9*/
  v17 = 0; /*0x4c19eb*/
  unk_B35BC8[0] = v15; /*0x4c19ed*/
  v57 = 0; /*0x4c19f2*/
  while ( 1 ) /*0x4c1a07*/
  {
    v18 = 0; /*0x4c1a07*/
    v19 = v17 % 2; /*0x4c1a15*/
    v58 = v17 % 2; /*0x4c1a1b*/
    v20 = 0x11 * v17; /*0x4c1a1f*/
    while ( 1 ) /*0x4c1a40*/
    {
      if ( v19 != v18 % 2 ) /*0x4c1a3b*/
      {
        v21 = v20 + v18 + 0x11; /*0x4c1a42*/
        *(_WORD *)(v15 + 2 * v16) = v21; /*0x4c1a46*/
        v22 = v16 + 1; /*0x4c1a50*/
        *(_WORD *)(unk_B35BC8[0] + 2 * v22++) = v20 + v18; /*0x4c1a56*/
        v23 = v20 + v18 + 1; /*0x4c1a64*/
        *(_WORD *)(unk_B35BC8[0] + 2 * v22) = v23; /*0x4c1a68*/
        *(_WORD *)(unk_B35BC8[0] + 2 * v22 + 2) = v23; /*0x4c1a73*/
        v22 += 2; /*0x4c1a85*/
        *(_WORD *)(unk_B35BC8[0] + 2 * v22) = v20 + v18 + 0x12; /*0x4c1a88*/
        v24 = v22 + 1; /*0x4c1a91*/
        *(_WORD *)(unk_B35BC8[0] + 2 * v24) = v21; /*0x4c1a94*/
      }
      else
      {
        v25 = v20 + v18 + 0x12; /*0x4c1a9a*/
        *(_WORD *)(v15 + 2 * v16) = v25; /*0x4c1a9e*/
        v26 = v16 + 1; /*0x4c1aa8*/
        *(_WORD *)(unk_B35BC8[0] + 2 * v26++) = v20 + v18 + 0x11; /*0x4c1aaf*/
        *(_WORD *)(unk_B35BC8[0] + 2 * v26) = v20 + v18; /*0x4c1abf*/
        *(_WORD *)(unk_B35BC8[0] + 2 * v26 + 2) = v20 + v18; /*0x4c1ac9*/
        v26 += 2; /*0x4c1adb*/
        *(_WORD *)(unk_B35BC8[0] + 2 * v26) = v20 + v18 + 1; /*0x4c1ade*/
        v24 = v26 + 1; /*0x4c1ae7*/
        *(_WORD *)(unk_B35BC8[0] + 2 * v24) = v25; /*0x4c1aea*/
      }
      ++v18; /*0x4c1aee*/
      v16 = v24 + 1; /*0x4c1af1*/
      if ( v18 >= 0x10 ) /*0x4c1af7*/
        break; /*0x4c1af7*/
      v15 = unk_B35BC8[0]; /*0x4c1a23*/
      v19 = v58; /*0x4c1a28*/
    }
    v17 = ++v57; /*0x4c1b01*/
    if ( v57 >= 0x10 ) /*0x4c1b0b*/
      break; /*0x4c1b0b*/
    v15 = unk_B35BC8[0]; /*0x4c1a00*/
  }
  v27 = flt_B08B44; /*0x4c1b11*/
  *(float *)&v58 = flt_B08B44; /*0x4c1b17*/
  if ( 0.0 == v27 ) /*0x4c1b24*/
  {
    PrintError("INI setting fLandTextureTilingMult cannot be 0."); /*0x4c1b2b*/
    *(float *)&v58 = flt_A45FF4; /*0x4c1b36*/
  }
  *(float *)&v58 = dbl_A3C800 / *(float *)&v58; /*0x4c1b4c*/
  v28 = (char *)FormHeapAlloc(0x1210u); /*0x4c1b50*/
  if ( v28 ) /*0x4c1b5a*/
  {
    v29 = 0x120; /*0x4c1b5e*/
    v30 = (float *)(v28 + 8); /*0x4c1b63*/
    do /*0x4c1b78*/
    {
      v30[0xFFFFFFFE] = 0.0; /*0x4c1b66*/
      v30 += 4; /*0x4c1b69*/
      --v29; /*0x4c1b6c*/
      v30[0xFFFFFFFB] = 0.0; /*0x4c1b6f*/
      v30[0xFFFFFFFC] = 0.0; /*0x4c1b72*/
      v30[0xFFFFFFFD] = 0.0; /*0x4c1b75*/
    }
    while ( v29 >= 0 ); /*0x4c1b78*/
  }
  else
  {
    v28 = 0; /*0x4c1b7e*/
  }
  unk_B35BCC = v28; /*0x4c1b85*/
  unk_B35BD0 = FormHeapAlloc(0xD8Cu); /*0x4c1b94*/
  unk_B35BD8 = FormHeapAlloc(0x121u); /*0x4c1ba3*/
  v31 = FormHeapAlloc(0x908u); /*0x4c1ba8*/
  v64 = 1.0; /*0x4c1baf*/
  v65 = 1.0; /*0x4c1bb6*/
  v32 = 0; /*0x4c1bba*/
  v66 = 1.0; /*0x4c1bbc*/
  unk_B35BD4 = v31; /*0x4c1bc0*/
  v57 = 0; /*0x4c1bc7*/
  v67 = 0.0; /*0x4c1bcb*/
  v61 = 0.0; /*0x4c1bcf*/
  v62 = 0.0; /*0x4c1bd3*/
  v63 = 1.0; /*0x4c1bd7*/
  v33 = *(float *)&v58; /*0x4c1bdb*/
  v34 = *(float *)&v58; /*0x4c1bdf*/
  do /*0x4c1c96*/
  {
    *(float *)&v35 = 0.0; /*0x4c1bea*/
    v36 = 0xC * v32; /*0x4c1bee*/
    *(float *)&v58 = 0.0; /*0x4c1bf0*/
    v37 = 0x10 * v32; /*0x4c1bf4*/
    v60 = (double)v57 / v34; /*0x4c1bf7*/
    v38 = v60; /*0x4c1bfb*/
    do /*0x4c1c82*/
    {
      v39 = (char *)unk_B35BCC; /*0x4c1c03*/
      v34 = v33; /*0x4c1c08*/
      v40 = (double)v58; /*0x4c1c0a*/
      *(float *)&v39[v37] = v64; /*0x4c1c12*/
      *(float *)&v39[v37 + 4] = v65; /*0x4c1c1b*/
      v41 = (float *)&v39[v37]; /*0x4c1c23*/
      v41[2] = v66; /*0x4c1c25*/
      v41[3] = v67; /*0x4c1c2c*/
      v42 = unk_B35BD0; /*0x4c1c2f*/
      *(float *)(v42 + v36) = v61; /*0x4c1c38*/
      v43 = v36 + v42; /*0x4c1c3f*/
      *(float *)(v43 + 4) = v62; /*0x4c1c41*/
      *(float *)(v43 + 8) = v63; /*0x4c1c48*/
      *(_BYTE *)(unk_B35BD8 + v32) = 1; /*0x4c1c50*/
      v44 = unk_B35BD4; /*0x4c1c54*/
      ++v35; /*0x4c1c5a*/
      ++v32; /*0x4c1c5d*/
      v37 += 0x10; /*0x4c1c60*/
      v36 += 0xC; /*0x4c1c63*/
      v58 = v35; /*0x4c1c69*/
      v59 = v40 / v33; /*0x4c1c6d*/
      *(float *)(v44 + 8 * v32 - 8) = v59; /*0x4c1c75*/
      *(float *)(unk_B35BD4 + 8 * v32 - 4) = v38; /*0x4c1c7e*/
    }
    while ( v35 < 0x11 ); /*0x4c1c82*/
    ++v57; /*0x4c1c92*/
  }
  while ( v57 < 0x11 ); /*0x4c1c96*/
  for ( i = 0; i < 4; *(float *)(4 * i + 0xB35B94) = (float)v58 ) /*0x4c1c9e*/
  {
    v58 = ((i % 2) << 0xB) - 0x800; /*0x4c1cba*/
    *(float *)(4 * i + 0xB35BA8) = (float)v58; /*0x4c1cc7*/
    v58 = ((i / 2) << 0xB) - 0x800; /*0x4c1cd8*/
    ++i; /*0x4c1ce0*/
  }
  v46 = 0; /*0x4c1cf5*/
  v63 = flt_A37448; /*0x4c1cf7*/
  v47 = v63; /*0x4c1cfb*/
  do /*0x4c1d95*/
  {
    v48 = 0; /*0x4c1d0c*/
    unk_B35BB8[v46] = FormHeapAlloc(0xD8Cu); /*0x4c1d0e*/
    *(float *)&v58 = 0.0; /*0x4c1d14*/
    do /*0x4c1d8d*/
    {
      v49 = 0; /*0x4c1d1c*/
      v50 = v48; /*0x4c1d1e*/
      v57 = 0; /*0x4c1d20*/
      v59 = (float)v58; /*0x4c1d24*/
      v48 += 0xCC; /*0x4c1d28*/
      v51 = v59; /*0x4c1d2e*/
      do /*0x4c1d77*/
      {
        v52 = (float *)(v50 + unk_B35BB8[v46]); /*0x4c1d3c*/
        v49 += 0x80; /*0x4c1d3e*/
        v53 = (double)v57 + *(float *)(v46 * 4 + 0xB35BA8); /*0x4c1d44*/
        v50 += 0xC; /*0x4c1d4a*/
        v57 = v49; /*0x4c1d53*/
        v61 = v53; /*0x4c1d57*/
        v54 = *(float *)(v46 * 4 + 0xB35B98); /*0x4c1d5f*/
        *v52 = v61; /*0x4c1d65*/
        v62 = v54 + v51; /*0x4c1d69*/
        v52[1] = v62; /*0x4c1d71*/
        v52[2] = v47; /*0x4c1d74*/
      }
      while ( v49 < 0x880 ); /*0x4c1d77*/
      v58 += 0x80; /*0x4c1d89*/
    }
    while ( v58 < 0x880 ); /*0x4c1d8d*/
    ++v46; /*0x4c1d8f*/
  }
  while ( v46 < 4 ); /*0x4c1d95*/
  result = sub_4C95B0((Ni2DBuffer **)unk_B35BE4); /*0x4c1da1*/
  unk_B35BDC = 1; /*0x4c1da6*/
  return result; /*0x4c1dad*/
}
