int __thiscall FontInfo_Load(_DWORD *this)
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

  result = *(unsigned __int16 *)this; /*0x57451d*/
  v3 = 0; /*0x574520*/
  if ( (_WORD)result ) /*0x574525*/
    goto LABEL_49; /*0x574525*/
  result = *(this + 1); /*0x57452b*/
  if ( !result ) /*0x574530*/
    goto LABEL_49; /*0x574530*/
  v4 = sub_431130((const char *)result, 0, 0x2800, 0x80); /*0x574542*/
  v5 = (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v4; /*0x574547*/
  if ( !v4 || !*((_BYTE *)v4 + 0x24) )
  {
    result = PrintError("Font file not found: %s. \n", (const char *)*(this + 1));
    if ( v5 ) /*0x574a72*/
      return (*(int (__thiscall **)(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int))*v5)(v5, 1); /*0x574a7c*/
    return result; /*0x574a7c*/
  }
  *(this + 0xE) = FormHeapAlloc(0x3928u); /*0x574567*/
  v6 = (*((int (__thiscall **)(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD)))*v5 + 7))(v5); /*0x574574*/
  Archive_ReadBytes(v5, *(this + 0xE), v6); /*0x57457d*/
  (*(void (__thiscall **)(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int))*v5)(v5, 1); /*0x57458a*/
  v7 = (float *)*(this + 0xE); /*0x57458e*/
  *((float *)this + 0xB) = 0.0; /*0x574591*/
  v8 = v7 + 0x54; /*0x574598*/
  *((float *)this + 0xC) = 0.0; /*0x57459e*/
  v9 = 0x40; /*0x5745a1*/
  v10 = (float)0.0; /*0x5745a6*/
  do /*0x57477e*/
  {
    v59 = *v7 - v8[3]; /*0x5745af*/
    v50 = v59 + *v8; /*0x5745b9*/
    v11 = v50; /*0x5745c8*/
    if ( v50 < (double)*((float *)this + 0xB) ) /*0x5745cd*/
      v11 = *((float *)this + 0xB); /*0x5745d1*/
    v51 = v11; /*0x5745d4*/
    v12 = v51; /*0x5745d8*/
    *((float *)this + 0xB) = v51; /*0x5745dc*/
    v13 = *v8; /*0x5745df*/
    if ( v13 >= v10 ) /*0x5745e8*/
      v10 = *v8; /*0x5745f6*/
    v14 = v8[3] - v13; /*0x5745fe*/
    if ( *((float *)this + 0xC) < v14 ) /*0x574607*/
      v14 = *((float *)this + 0xC); /*0x574609*/
    v52 = v14; /*0x57460f*/
    v15 = v52; /*0x574613*/
    *((float *)this + 0xC) = v52; /*0x574617*/
    v60 = *v7 - v8[0x11]; /*0x57461f*/
    v53 = v60 + v8[0xE]; /*0x57462a*/
    if ( v53 >= v12 ) /*0x574639*/
      v12 = v53; /*0x574647*/
    v16 = v15; /*0x574649*/
    v17 = v12; /*0x574649*/
    v18 = v16; /*0x574649*/
    *((float *)this + 0xB) = v17; /*0x57464b*/
    v19 = v8[0xE]; /*0x57464e*/
    if ( v19 >= v10 ) /*0x574658*/
      v10 = v8[0xE]; /*0x574667*/
    v20 = v8[0x11] - v19; /*0x574669*/
    if ( v20 <= v18 ) /*0x574673*/
      v18 = v20; /*0x57467d*/
    v21 = v17; /*0x57467f*/
    v22 = v18; /*0x57467f*/
    v23 = v21; /*0x57467f*/
    v54 = v22; /*0x574681*/
    v24 = v54; /*0x574685*/
    *((float *)this + 0xC) = v54; /*0x574689*/
    v61 = *v7 - v8[0x1F]; /*0x574691*/
    v55 = v61 + v8[0x1C]; /*0x57469c*/
    if ( v55 >= v21 ) /*0x5746ab*/
      v23 = v55; /*0x5746b9*/
    v25 = v24; /*0x5746bb*/
    v26 = v23; /*0x5746bb*/
    v27 = v25; /*0x5746bb*/
    *((float *)this + 0xB) = v26; /*0x5746bd*/
    v28 = v8[0x1C]; /*0x5746c0*/
    if ( v28 >= v10 ) /*0x5746ca*/
      v10 = v8[0x1C]; /*0x5746d9*/
    v29 = v8[0x1F] - v28; /*0x5746db*/
    if ( v29 <= v27 ) /*0x5746e5*/
      v27 = v29; /*0x5746ef*/
    v30 = v26; /*0x5746f1*/
    v31 = v27; /*0x5746f1*/
    v32 = v30; /*0x5746f1*/
    v56 = v31; /*0x5746f3*/
    v33 = v56; /*0x5746f7*/
    *((float *)this + 0xC) = v56; /*0x5746fb*/
    v62 = *v7 - v8[0x2D]; /*0x574706*/
    v57 = v62 + v8[0x2A]; /*0x574714*/
    if ( v57 >= v30 ) /*0x574723*/
      v32 = v57; /*0x574731*/
    v34 = v33; /*0x574733*/
    v35 = v32; /*0x574733*/
    v36 = v34; /*0x574733*/
    *((float *)this + 0xB) = v35; /*0x574735*/
    v37 = v8[0x2A]; /*0x574738*/
    if ( v37 >= v10 ) /*0x574745*/
      v10 = v8[0x2A]; /*0x574757*/
    v38 = v8[0x2D] - v37; /*0x574759*/
    if ( v38 <= v36 ) /*0x574766*/
      v36 = v38; /*0x574770*/
    v8 += 0x38; /*0x574772*/
    *((float *)this + 0xC) = v36; /*0x574778*/
    --v9; /*0x57477b*/
  }
  while ( v9 ); /*0x57477e*/
  v63 = v7[0x213]; /*0x57478a*/
  v7[0x213] = v7[0x216]; /*0x574794*/
  *(float *)(*(this + 0xE) + 0x858) = v63; /*0x5747a1*/
  *(float *)(*(this + 0xE) + 0x850) = v10; /*0x5747aa*/
  v64 = *((float *)this + 0xC) + v10; /*0x5747ba*/
  *(float *)(*(this + 0xE) + 0x85C) = v64; /*0x5747c2*/
  *(float *)(*(this + 0xE) + 0x1D14) = *(float *)(*(this + 0xE) + 0x1C6C); /*0x5747d1*/
  *(float *)(*(this + 0xE) + 0x1D1C) = *(float *)(*(this + 0xE) + 0x1C74); /*0x5747e0*/
  *(float *)(*(this + 0xE) + 0x1D20) = *(float *)(*(this + 0xE) + 0x1C78); /*0x5747ef*/
  *(float *)(*(this + 0xE) + 0x1D18) = *(float *)(*(this + 0xE) + 0x1C70); /*0x5747fe*/
  *(float *)(*(this + 0xE) + 0x1D24) = *(float *)(*(this + 0xE) + 0x1C7C); /*0x57480d*/
  *(float *)(*(this + 0xE) + 0x14C) = 0.0; /*0x574818*/
  *(float *)(*(this + 0xE) + 0x158) = 0.0; /*0x574821*/
  *(float *)(*(this + 0xE) + 0x150) = v10; /*0x57482c*/
  v65 = v10 + *((float *)this + 0xC); /*0x57483c*/
  *(float *)(*(this + 0xE) + 0x15C) = v65; /*0x574844*/
  *(float *)(*(this + 0xE) + 0x12C) = 0.0; /*0x57484d*/
  *(float *)(*(this + 0xE) + 0x134) = 0.0; /*0x574856*/
  *(float *)(*(this + 0xE) + 0x13C) = 0.0; /*0x57485f*/
  *(float *)(*(this + 0xE) + 0x144) = 0.0; /*0x574868*/
  *(float *)(*(this + 0xE) + 0x130) = 0.0; /*0x574871*/
  *(float *)(*(this + 0xE) + 0x138) = 0.0; /*0x57487a*/
  *(float *)(*(this + 0xE) + 0x140) = 0.0; /*0x574883*/
  *(float *)(*(this + 0xE) + 0x148) = 0.0; /*0x57488c*/
  v39 = *(this + 0xE); /*0x574892*/
  result = *(_DWORD *)(v39 + 4); /*0x574895*/
  if ( result > 8 )                             // Oblivion font format limit: at most 8 .tex atlas textures per .fnt; this is a texture-count limit, not an atlas width/height limit. /*0x57489b*/
    return PrintError( /*0x5748b1*/
             "Too many font textures for %s.\nMax textures is %d yours has %d.\n",
             (const char *)*(this + 1),
             8,
             *(_DWORD *)(v39 + 4));
  v58 = 0; /*0x5748b8*/
  if ( result <= 0 ) /*0x5748bc*/
  {
LABEL_49:
    ++*(_WORD *)this; /*0x574a11*/
    return result; /*0x574a11*/
  }
  v66 = (Ni2DBuffer **)(this + 3); /*0x5748c5*/
  while ( 1 ) /*0x5748e0*/
  {
    _sprintf((char *)ArgList, "%s\\%s.tex", "Data\\Fonts", (const char *)(v3 + *(this + 0xE) + 0xC)); /*0x5748e0*/
    v40 = 0; /*0x5748ef*/
    v41 = sub_431130((const char *)ArgList, 0, 0x2800, 0x80); /*0x5748f7*/
    v42 = v41; /*0x5748fc*/
    if ( !v41 || !v41[0x24] ) /*0x574909*/
      break; /*0x574909*/
    v43 = *((void (__cdecl **)(_BYTE *, unsigned int *, int, int *, int))v41 + 1); /*0x574913*/
    v67 = 1; /*0x574925*/
    v43(v41, &v69, 8, &v67, 1);                 // Reads atlas width and height from the .tex header dynamically. /*0x57492d*/
    v44 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x574931*/
    v68 = (int)v44; /*0x574939*/
    v72 = 0; /*0x57493f*/
    if ( v44 ) /*0x574946*/
      v40 = NiPixelData::NiPixelData(v44, v69, v70, (int)&unk_B25E00, 1u, 1);// Creates one-level 32-bit NiPixelData at the dimensions read from the .tex file. /*0x574962*/
    v45 = *((void (__cdecl **)(_BYTE *, int, unsigned int, int *, int))v42 + 1); /*0x574981*/
    v49 = *((_DWORD *)v40 + 0x14) + **((_DWORD **)v40 + 0x17); /*0x574984*/
    v72 = 0xFFFFFFFF; /*0x574986*/
    v68 = 1; /*0x574991*/
    v45(v42, v49, 4 * v70 * v69, &v68, 1);      // Reads width*height*4 raw atlas bytes; no fixed atlas dimension observed. /*0x574999*/
    v46 = (NiObjectNET *)FormHeapAlloc(0x30u); /*0x57499d*/
    v67 = (int)v46; /*0x5749a5*/
    v72 = 1; /*0x5749ab*/
    if ( v46 ) /*0x5749b6*/
      v47 = NiTexturingProperty_CreateFromSourceTexture(v46, (NiSourceTexture *)v40); /*0x5749c0*/
    else
      v47 = 0; /*0x5749c4*/
    v72 = 0xFFFFFFFF; /*0x5749ca*/
    NiTexturingProperty_SetBaseMapFilterMode((NiTexturingProperty *)v47, 1);// Sets base-map filter mode to 1 (NiTexturingProperty::Map::Bilerp). Font atlases have a single mip level. /*0x5749d5*/
    NiSmartPointer_Set__(v66, (Ni2DBuffer *)v47); /*0x5749e1*/
    (**(void (__thiscall ***)(_BYTE *, int))v42)(v42, 1); /*0x5749ee*/
    result = v58 + 1; /*0x5749f7*/
    v3 += 0x24; /*0x5749fd*/
    v48 = ++v58 < *(_DWORD *)(*(this + 0xE) + 4); /*0x574a00*/
    ++v66; /*0x574a07*/
    if ( !v48 ) /*0x574a0b*/
      goto LABEL_49; /*0x574a0b*/
  }
  result = PrintError("Font file not found: %S. \n", ArgList);
  if ( v42 ) /*0x574a51*/
    return (**(int (__thiscall ***)(_BYTE *, int))v42)(v42, 1); /*0x574a5b*/
  return result; /*0x574a15*/
}
