int __thiscall sub_5744E0(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  void *v4; // eax
  int (__cdecl **v5)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // edi
  int v6; // eax
  float *v7; // edx
  float *v8; // ecx
  int v9; // edi
  double v10; // st6
  double v11; // st5
  double v12; // st5
  double v13; // st4
  double v14; // st4
  double v15; // st4
  double v16; // rtt
  double v17; // st4
  double v18; // st5
  double v19; // st3
  double v20; // st3
  double v21; // rt1
  double v22; // st4
  double v23; // st5
  double v24; // st4
  double v25; // rt0
  double v26; // st4
  double v27; // st5
  double v28; // st3
  double v29; // st3
  double v30; // rt2
  double v31; // st4
  double v32; // st5
  double v33; // st4
  double v34; // rt1
  double v35; // st4
  double v36; // st5
  double v37; // st4
  double v38; // st4
  int v39; // ecx
  NiPixelData *v40; // ebp
  _BYTE *v41; // eax
  _BYTE *v42; // edi
  void (__cdecl *v43)(_BYTE *, unsigned int *, int, int *, int); // ecx
  NiPixelData *v44; // eax
  void (__cdecl *v45)(_BYTE *, int, unsigned int, int *, int); // eax
  NiObjectNET *v46; // eax
  NiObjectNET *v47; // ebp
  bool v48; // cc
  int v49; // [esp-10h] [ebp-44Ch]
  float v50; // [esp+14h] [ebp-428h]
  float v51; // [esp+14h] [ebp-428h]
  float v52; // [esp+14h] [ebp-428h]
  float v53; // [esp+14h] [ebp-428h]
  float v54; // [esp+14h] [ebp-428h]
  float v55; // [esp+14h] [ebp-428h]
  float v56; // [esp+14h] [ebp-428h]
  float v57; // [esp+14h] [ebp-428h]
  int v58; // [esp+14h] [ebp-428h]
  float v59; // [esp+18h] [ebp-424h]
  float v60; // [esp+18h] [ebp-424h]
  float v61; // [esp+18h] [ebp-424h]
  float v62; // [esp+18h] [ebp-424h]
  float v63; // [esp+18h] [ebp-424h]
  float v64; // [esp+18h] [ebp-424h]
  float v65; // [esp+18h] [ebp-424h]
  Ni2DBuffer **v66; // [esp+18h] [ebp-424h]
  int v67; // [esp+1Ch] [ebp-420h] BYREF
  int v68; // [esp+20h] [ebp-41Ch] BYREF
  unsigned int v69; // [esp+24h] [ebp-418h] BYREF
  unsigned int v70; // [esp+28h] [ebp-414h]
  wchar_t ArgList[512]; // [esp+2Ch] [ebp-410h] BYREF
  int v72; // [esp+438h] [ebp-4h]

  result = *(unsigned __int16 *)this;
  v3 = 0;
  if ( (_WORD)result )
    goto LABEL_49;
  result = *(this + 1);
  if ( !result )
    goto LABEL_49;
  v4 = sub_431130((const char *)result, 0, 0x2800, 0x80);
  v5 = (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v4;
  if ( !v4 || !*((_BYTE *)v4 + 0x24) )
  {
    result = PrintError("Font file not found: %s. \n", (const char *)*(this + 1));
    if ( v5 )
      return (*(int (__thiscall **)(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int))*v5)(v5, 1);
    return result;
  }
  *(this + 0xE) = FormHeapAlloc(0x3928u);
  v6 = (*((int (__thiscall **)(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD)))*v5 + 7))(v5);
  ReadFile__(v5, *(this + 0xE), v6);
  (*(void (__thiscall **)(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int))*v5)(v5, 1);
  v7 = (float *)*(this + 0xE);
  *((float *)this + 0xB) = 0.0;
  v8 = v7 + 0x54;
  *((float *)this + 0xC) = 0.0;
  v9 = 0x40;
  v10 = (float)0.0;
  do
  {
    v59 = *v7 - v8[3];
    v50 = v59 + *v8;
    v11 = v50;
    if ( v50 < (double)*((float *)this + 0xB) )
      v11 = *((float *)this + 0xB);
    v51 = v11;
    v12 = v51;
    *((float *)this + 0xB) = v51;
    v13 = *v8;
    if ( v13 >= v10 )
      v10 = *v8;
    v14 = v8[3] - v13;
    if ( *((float *)this + 0xC) < v14 )
      v14 = *((float *)this + 0xC);
    v52 = v14;
    v15 = v52;
    *((float *)this + 0xC) = v52;
    v60 = *v7 - v8[0x11];
    v53 = v60 + v8[0xE];
    if ( v53 >= v12 )
      v12 = v53;
    v16 = v15;
    v17 = v12;
    v18 = v16;
    *((float *)this + 0xB) = v17;
    v19 = v8[0xE];
    if ( v19 >= v10 )
      v10 = v8[0xE];
    v20 = v8[0x11] - v19;
    if ( v20 <= v18 )
      v18 = v20;
    v21 = v17;
    v22 = v18;
    v23 = v21;
    v54 = v22;
    v24 = v54;
    *((float *)this + 0xC) = v54;
    v61 = *v7 - v8[0x1F];
    v55 = v61 + v8[0x1C];
    if ( v55 >= v21 )
      v23 = v55;
    v25 = v24;
    v26 = v23;
    v27 = v25;
    *((float *)this + 0xB) = v26;
    v28 = v8[0x1C];
    if ( v28 >= v10 )
      v10 = v8[0x1C];
    v29 = v8[0x1F] - v28;
    if ( v29 <= v27 )
      v27 = v29;
    v30 = v26;
    v31 = v27;
    v32 = v30;
    v56 = v31;
    v33 = v56;
    *((float *)this + 0xC) = v56;
    v62 = *v7 - v8[0x2D];
    v57 = v62 + v8[0x2A];
    if ( v57 >= v30 )
      v32 = v57;
    v34 = v33;
    v35 = v32;
    v36 = v34;
    *((float *)this + 0xB) = v35;
    v37 = v8[0x2A];
    if ( v37 >= v10 )
      v10 = v8[0x2A];
    v38 = v8[0x2D] - v37;
    if ( v38 <= v36 )
      v36 = v38;
    v8 += 0x38;
    *((float *)this + 0xC) = v36;
    --v9;
  }
  while ( v9 );
  v63 = v7[0x213];
  v7[0x213] = v7[0x216];
  *(float *)(*(this + 0xE) + 0x858) = v63;
  *(float *)(*(this + 0xE) + 0x850) = v10;
  v64 = *((float *)this + 0xC) + v10;
  *(float *)(*(this + 0xE) + 0x85C) = v64;
  *(float *)(*(this + 0xE) + 0x1D14) = *(float *)(*(this + 0xE) + 0x1C6C);
  *(float *)(*(this + 0xE) + 0x1D1C) = *(float *)(*(this + 0xE) + 0x1C74);
  *(float *)(*(this + 0xE) + 0x1D20) = *(float *)(*(this + 0xE) + 0x1C78);
  *(float *)(*(this + 0xE) + 0x1D18) = *(float *)(*(this + 0xE) + 0x1C70);
  *(float *)(*(this + 0xE) + 0x1D24) = *(float *)(*(this + 0xE) + 0x1C7C);
  *(float *)(*(this + 0xE) + 0x14C) = 0.0;
  *(float *)(*(this + 0xE) + 0x158) = 0.0;
  *(float *)(*(this + 0xE) + 0x150) = v10;
  v65 = v10 + *((float *)this + 0xC);
  *(float *)(*(this + 0xE) + 0x15C) = v65;
  *(float *)(*(this + 0xE) + 0x12C) = 0.0;
  *(float *)(*(this + 0xE) + 0x134) = 0.0;
  *(float *)(*(this + 0xE) + 0x13C) = 0.0;
  *(float *)(*(this + 0xE) + 0x144) = 0.0;
  *(float *)(*(this + 0xE) + 0x130) = 0.0;
  *(float *)(*(this + 0xE) + 0x138) = 0.0;
  *(float *)(*(this + 0xE) + 0x140) = 0.0;
  *(float *)(*(this + 0xE) + 0x148) = 0.0;
  v39 = *(this + 0xE);
  result = *(_DWORD *)(v39 + 4);
  if ( result > 8 )
    return PrintError(
             "Too many font textures for %s.\nMax textures is %d yours has %d.\n",
             (const char *)*(this + 1),
             8,
             *(_DWORD *)(v39 + 4));
  v58 = 0;
  if ( result <= 0 )
  {
LABEL_49:
    ++*(_WORD *)this;
    return result;
  }
  v66 = (Ni2DBuffer **)(this + 3);
  while ( 1 )
  {
    _sprintf((char *)ArgList, "%s\\%s.tex", "Data\\Fonts", (const char *)(v3 + *(this + 0xE) + 0xC));
    v40 = 0;
    v41 = sub_431130((const char *)ArgList, 0, 0x2800, 0x80);
    v42 = v41;
    if ( !v41 || !v41[0x24] )
      break;
    v43 = *((void (__cdecl **)(_BYTE *, unsigned int *, int, int *, int))v41 + 1);
    v67 = 1;
    v43(v41, &v69, 8, &v67, 1);
    v44 = (NiPixelData *)FormHeapAlloc(0x70u);
    v68 = (int)v44;
    v72 = 0;
    if ( v44 )
      v40 = NiPixelData::NiPixelData(v44, v69, v70, (int)&unk_B25E00, 1u, 1);
    v45 = *((void (__cdecl **)(_BYTE *, int, unsigned int, int *, int))v42 + 1);
    v49 = *((_DWORD *)v40 + 0x14) + **((_DWORD **)v40 + 0x17);
    v72 = 0xFFFFFFFF;
    v68 = 1;
    v45(v42, v49, 4 * v70 * v69, &v68, 1);
    v46 = (NiObjectNET *)FormHeapAlloc(0x30u);
    v67 = (int)v46;
    v72 = 1;
    if ( v46 )
      v47 = sub_704800(v46, (NiSourceTexture *)v40);
    else
      v47 = 0;
    v72 = 0xFFFFFFFF;
    sub_405900((NiTexturingProperty *)v47, 1);
    NiSmartPointer_Set__(v66, (Ni2DBuffer *)v47);
    (**(void (__thiscall ***)(_BYTE *, int))v42)(v42, 1);
    result = v58 + 1;
    v3 += 0x24;
    v48 = ++v58 < *(_DWORD *)(*(this + 0xE) + 4);
    ++v66;
    if ( !v48 )
      goto LABEL_49;
  }
  result = PrintError("Font file not found: %S. \n", ArgList);
  if ( v42 )
    return (**(int (__thiscall ***)(_BYTE *, int))v42)(v42, 1);
  return result;
}
