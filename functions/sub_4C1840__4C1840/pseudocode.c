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

  v0 = 0;
  v1 = 0.0;
  *(float *)&v58 = 0.0;
  *(float *)&v2 = COERCE_FLOAT(FormHeapAlloc(0x34u));
  v59 = *(float *)&v2;
  v68 = 0;
  if ( *(float *)&v2 == 0.0 )
    v3 = 0;
  else
    v3 = sub_4C93D0(v2);
  v68 = 0xFFFFFFFF;
  dword_B35BE4 = (int)v3;
  BSStringT_Set((BSStringT *)&v3[1].member, "Default.DDS", 0);
  sub_4C95B0((Ni2DBuffer **)dword_B35BE4);
  v4 = COERCE_FLOAT(FormHeapAlloc(0x10u));
  v59 = v4;
  v68 = 1;
  if ( v4 != 0.0 )
  {
    v0 = 1;
    v56 = *sub_4C1670((_DWORD *)dword_B35BE4, &v57);
    LOBYTE(v68) = 2;
    v58 = 1;
    v1 = COERCE_FLOAT(sub_704130((_WORD *)LODWORD(v4), v56, 0, 3, 5, 0));
  }
  v5 = (v0 & 1) == 0;
  v6 = InterlockedDecrement;
  v68 = 0xFFFFFFFF;
  if ( !v5 )
  {
    v7 = (void (__thiscall ***)(_DWORD, int))v57;
    if ( v57 )
    {
      if ( !v6((volatile LONG *)(v57 + 4)) )
      {
        if ( v7 )
          (**v7)(v7, 1);
      }
    }
  }
  *(float *)&v8 = COERCE_FLOAT(FormHeapAlloc(0x30u));
  v59 = *(float *)&v8;
  v68 = 4;
  if ( *(float *)&v8 == 0.0 )
    v9 = 0;
  else
    v9 = NiTexturingProperty::NiTexturingProperty(v8);
  v10 = dword_B35BEC;
  v5 = dword_B35BEC == (_DWORD)v9;
  v68 = 0xFFFFFFFF;
  if ( !v5 )
  {
    if ( v10 )
    {
      v11 = (void (__thiscall ***)(_DWORD, int))v10;
      if ( !v6((volatile LONG *)(v10 + 4)) )
        (**v11)(v11, 1);
    }
    v10 = (int)v9;
    dword_B35BEC = (int)v9;
    if ( v9 )
    {
      InterlockedIncrement((volatile LONG *)&v9->super);
      v10 = dword_B35BEC;
    }
  }
  *(_WORD *)(v10 + 0x18) = *(_WORD *)(v10 + 0x18) & 0xFFF1 | 4;
  v12 = dword_B35BEC;
  v13 = **(void (__thiscall *****)(_DWORD, int))(dword_B35BEC + 0x20);
  *(float *)&v58 = v1;
  v14 = v12;
  if ( (void (__thiscall ***)(_DWORD, int))LODWORD(v1) != v13 )
  {
    if ( v13 )
      (**v13)(v13, 1);
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(v14 + 0x1C), 0, &v58);
  }
  v15 = FormHeapAlloc(0xC00u);
  v16 = 0;
  v17 = 0;
  dword_B35BC8 = v15;
  v57 = 0;
  while ( 1 )
  {
    v18 = 0;
    v19 = v17 % 2;
    v58 = v17 % 2;
    v20 = 0x11 * v17;
    while ( 1 )
    {
      if ( v19 != v18 % 2 )
      {
        v21 = v20 + v18 + 0x11;
        *(_WORD *)(v15 + 2 * v16) = v21;
        v22 = v16 + 1;
        *(_WORD *)(dword_B35BC8 + 2 * v22++) = v20 + v18;
        v23 = v20 + v18 + 1;
        *(_WORD *)(dword_B35BC8 + 2 * v22) = v23;
        *(_WORD *)(dword_B35BC8 + 2 * v22 + 2) = v23;
        v22 += 2;
        *(_WORD *)(dword_B35BC8 + 2 * v22) = v20 + v18 + 0x12;
        v24 = v22 + 1;
        *(_WORD *)(dword_B35BC8 + 2 * v24) = v21;
      }
      else
      {
        v25 = v20 + v18 + 0x12;
        *(_WORD *)(v15 + 2 * v16) = v25;
        v26 = v16 + 1;
        *(_WORD *)(dword_B35BC8 + 2 * v26++) = v20 + v18 + 0x11;
        *(_WORD *)(dword_B35BC8 + 2 * v26) = v20 + v18;
        *(_WORD *)(dword_B35BC8 + 2 * v26 + 2) = v20 + v18;
        v26 += 2;
        *(_WORD *)(dword_B35BC8 + 2 * v26) = v20 + v18 + 1;
        v24 = v26 + 1;
        *(_WORD *)(dword_B35BC8 + 2 * v24) = v25;
      }
      ++v18;
      v16 = v24 + 1;
      if ( v18 >= 0x10 )
        break;
      v15 = dword_B35BC8;
      v19 = v58;
    }
    v17 = ++v57;
    if ( v57 >= 0x10 )
      break;
    v15 = dword_B35BC8;
  }
  v27 = flt_B08B44;
  *(float *)&v58 = flt_B08B44;
  if ( 0.0 == v27 )
  {
    PrintError("INI setting fLandTextureTilingMult cannot be 0.");
    *(float *)&v58 = flt_A45FF4;
  }
  *(float *)&v58 = dbl_A3C800 / *(float *)&v58;
  v28 = (char *)FormHeapAlloc(0x1210u);
  if ( v28 )
  {
    v29 = 0x120;
    v30 = (float *)(v28 + 8);
    do
    {
      v30[0xFFFFFFFE] = 0.0;
      v30 += 4;
      --v29;
      v30[0xFFFFFFFB] = 0.0;
      v30[0xFFFFFFFC] = 0.0;
      v30[0xFFFFFFFD] = 0.0;
    }
    while ( v29 >= 0 );
  }
  else
  {
    v28 = 0;
  }
  dword_B35BCC = v28;
  dword_B35BD0 = FormHeapAlloc(0xD8Cu);
  dword_B35BD8 = FormHeapAlloc(0x121u);
  v31 = FormHeapAlloc(0x908u);
  v64 = 1.0;
  v65 = 1.0;
  v32 = 0;
  v66 = 1.0;
  dword_B35BD4 = v31;
  v57 = 0;
  v67 = 0.0;
  v61 = 0.0;
  v62 = 0.0;
  v63 = 1.0;
  v33 = *(float *)&v58;
  v34 = *(float *)&v58;
  do
  {
    *(float *)&v35 = 0.0;
    v36 = 0xC * v32;
    *(float *)&v58 = 0.0;
    v37 = 0x10 * v32;
    v60 = (double)v57 / v34;
    v38 = v60;
    do
    {
      v39 = (char *)dword_B35BCC;
      v34 = v33;
      v40 = (double)v58;
      *(float *)&v39[v37] = v64;
      *(float *)&v39[v37 + 4] = v65;
      v41 = (float *)&v39[v37];
      v41[2] = v66;
      v41[3] = v67;
      v42 = dword_B35BD0;
      *(float *)(v42 + v36) = v61;
      v43 = v36 + v42;
      *(float *)(v43 + 4) = v62;
      *(float *)(v43 + 8) = v63;
      *(_BYTE *)(dword_B35BD8 + v32) = 1;
      v44 = dword_B35BD4;
      ++v35;
      ++v32;
      v37 += 0x10;
      v36 += 0xC;
      v58 = v35;
      v59 = v40 / v33;
      *(float *)(v44 + 8 * v32 - 8) = v59;
      *(float *)(dword_B35BD4 + 8 * v32 - 4) = v38;
    }
    while ( v35 < 0x11 );
    ++v57;
  }
  while ( v57 < 0x11 );
  for ( i = 0; i < 4; *(float *)(4 * i + 0xB35B94) = (float)v58 )
  {
    v58 = ((i % 2) << 0xB) - 0x800;
    *(float *)(4 * i + 0xB35BA8) = (float)v58;
    v58 = ((i / 2) << 0xB) - 0x800;
    ++i;
  }
  v46 = 0;
  v63 = flt_A37448;
  v47 = v63;
  do
  {
    v48 = 0;
    dword_B35BB8[v46] = FormHeapAlloc(0xD8Cu);
    *(float *)&v58 = 0.0;
    do
    {
      v49 = 0;
      v50 = v48;
      v57 = 0;
      v59 = (float)v58;
      v48 += 0xCC;
      v51 = v59;
      do
      {
        v52 = (float *)(v50 + dword_B35BB8[v46]);
        v49 += 0x80;
        v53 = (double)v57 + *(float *)(v46 * 4 + 0xB35BA8);
        v50 += 0xC;
        v57 = v49;
        v61 = v53;
        v54 = *(float *)(v46 * 4 + 0xB35B98);
        *v52 = v61;
        v62 = v54 + v51;
        v52[1] = v62;
        v52[2] = v47;
      }
      while ( v49 < 0x880 );
      v58 += 0x80;
    }
    while ( v58 < 0x880 );
    ++v46;
  }
  while ( v46 < 4 );
  result = sub_4C95B0((Ni2DBuffer **)dword_B35BE4);
  byte_B35BDC = 1;
  return result;
}
