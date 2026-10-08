//
//
// [2026-10-03 extrusion fade policy] Verified count at engine+50==1 selects fLodPercent=1/full spine and cross-section resolution. Geometry AddStrip still receives original lodLevel. Plugin scopes this count to1 at call7A21F0 only when retained75004 requests prohibited segment reduction, restores it in finally, and leaves the actual geometry LOD allocation/count unchanged. RT4.1 75004 only changes this topology policy: GetFrondGeometry/Reference SpeedTreeWrapper export/use75003 fade distance for both modes independently of75004. Do not treat75004=false as disabling extrusion alpha fading.
//
// [2026-10-03 capacity finding, unresolved] Native computed extrusion index count reaches the AddStrip call as a full DWORD in EBP; the native AddStrip callee reads only the low WORD. Allocation uses the full product. Example full grid5000 spine vertices x7 profile vertices uses35000 vertices (below65535) but needs74984 indices; WORD length would be9448. Correct full-strip splitting/length handling needs a further implementation pass. The current fade-policy change does not fix this existing native capacity defect.
//
// [2026-10-03 full-width strip correction] Machine-code refinement: IMUL/SUB computes full length in EBP, DWORD store79A5E0 and load79A7E6 retain it, PUSH EBP79A7F4 passes it intact. At frond-only CALL79A7F7 the plugin now receives a DWORD count and splits the exact already-generated stream. Every continuation starts at an even source offset and carries the preceding two indices, preserving oriented real triangles. Caller79A7FE still increments stripCounter once; the wrapper supplies intermediate increments for extra chunks.
void __thiscall OB_CFrondEngine_ComputeExtrusion_010201A0(
        int *this,
        int lodLevel,
        __int16 a3,
        OB_stVector16_010201A0 *a4)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st6
  void *begin; // esi
  int v10; // ebp
  int v11; // eax
  int v12; // esi
  double v13; // st6
  double capacityEnd; // st6
  int v15; // eax
  unsigned __int16 v16; // bp
  __int64 v17; // rax
  int v18; // esi
  unsigned __int16 *v19; // ebx
  int v20; // eax
  unsigned int v21; // ebp
  void *v22; // eax
  __int16 v23; // ax
  OB_stVector16_010201A0 *v24; // ecx
  char *v25; // eax
  int v26; // esi
  __int16 v27; // ax
  int v28; // ecx
  char *v29; // eax
  int v30; // [esp+4h] [ebp-40h]
  int v31; // [esp+8h] [ebp-3Ch]
  int v32; // [esp+Ch] [ebp-38h]
  float v33; // [esp+10h] [ebp-34h]
  int v34; // [esp+10h] [ebp-34h]
  float v35; // [esp+14h] [ebp-30h]
  int v36; // [esp+18h] [ebp-2Ch]
  float v37; // [esp+1Ch] [ebp-28h]
  int v38; // [esp+20h] [ebp-24h]
  __int16 v39; // [esp+20h] [ebp-24h]
  int v40; // [esp+24h] [ebp-20h]
  __int16 v41; // [esp+28h] [ebp-1Ch]
  __int16 v42; // [esp+30h] [ebp-14h]
  __int16 v43; // [esp+30h] [ebp-14h]
  __int16 v44; // [esp+34h] [ebp-10h]
  unsigned __int16 v45; // [esp+3Ch] [ebp-8h]
  float v47; // [esp+50h] [ebp+Ch]
  __int16 v48; // [esp+50h] [ebp+Ch]
  OB_stVector16_010201A0 *v49; // [esp+50h] [ebp+Ch]
  OB_stVector16_010201A0 *v50; // [esp+50h] [ebp+Ch]

  if ( *this )
  {
    v4 = *(this + 0x14); /*0x79a463*/
    if ( v4 == 1 ) /*0x79a469*/
    {
      v5 = 1.0; /*0x79a46b*/
    }
    else
    {
      v6 = (double)lodLevel; /*0x79a473*/
      if ( lodLevel < 0 ) /*0x79a479*/
        v6 = v6 + flt_A2FC78; /*0x79a47b*/
      v7 = (double)v4; /*0x79a487*/
      if ( v4 < 0 ) /*0x79a48b*/
        v7 = v7 + flt_A2FC78; /*0x79a48d*/
      v5 = 1.0 - v6 / (v7 - 1.0); /*0x79a49b*/
    }
    begin = a4->begin; /*0x79a4a8*/
    v33 = v5; /*0x79a49e*/
    v10 = Double_To_SInt32(v33); /*0x79a51c*/
    v38 = v10; /*0x79a51e*/
    if ( begin ) /*0x79a522*/
      v11 = ((char *)a4->end - (char *)begin) / 0x38; /*0x79a53e*/
    else
      v11 = 0; /*0x79a524*/
    v12 = v10 - 1; /*0x79a542*/
    v13 = (double)v11; /*0x79a549*/
    v34 = v10 - 1; /*0x79a54d*/
    if ( v11 < 0 ) /*0x79a551*/
      v13 = v13 + flt_A2FC78; /*0x79a553*/
    v35 = v13 / (double)v34; /*0x79a56a*/
    capacityEnd = (double)(int)a4[2].capacityEnd; /*0x79a583*/
    if ( (int)a4[2].capacityEnd < 0 ) /*0x79a586*/
      capacityEnd = capacityEnd + flt_A2FC78; /*0x79a588*/
    v47 = capacityEnd; /*0x79a58e*/
    v15 = Double_To_SInt32(v47); /*0x79a5b0*/
    v31 = v15 - 1; /*0x79a5b8*/
    v36 = v15; /*0x79a5c4*/
    v37 = v47 / (double)(v15 - 1); /*0x79a5d2*/
    v16 = v12 * (2 * v15 + 1) - 1; /*0x79a5d6*/
    v17 = 2LL * (unsigned int)(v12 * (2 * v15 + 1) - 1); /*0x79a5db*/
    v45 = v16; /*0x79a5e0*/
    v18 = 0; /*0x79a5ee*/
    v19 = (unsigned __int16 *)FormHeapAlloc(HIDWORD(v17) != 0 ? 0xFFFFFFFF : v17);
    v30 = 0; /*0x79a5f9*/
    if ( v34 > 0 ) /*0x79a5fd*/
    {
      v32 = v38 - 2; /*0x79a60a*/
      do /*0x79a7e0*/
      {
        v40 = v30 + 1; /*0x79a626*/
        v48 = Double_To_SInt32(v35); /*0x79a62e*/
        v20 = Double_To_SInt32(v35 * (double)(v30 + 1)); /*0x79a632*/
        LOWORD(v21) = v20; /*0x79a63f*/
        if ( v30 == v32 || v20 > (int)(OB_stVector_SFrondVertex_Size_010201A0(a4) - 1) ) /*0x79a64f*/
          v21 = OB_stVector_SFrondVertex_Size_010201A0(a4) - 1; /*0x79a65a*/
        v39 = v21 - v48; /*0x79a66c*/
        v22 = a4[2].capacityEnd; /*0x79a677*/
        if ( v30 % 2 ) /*0x79a676*/
        {
          v27 = v48 * (_WORD)v22; /*0x79a722*/
          v28 = v31; /*0x79a725*/
          v41 = v27; /*0x79a72b*/
          v50 = (OB_stVector16_010201A0 *)v31; /*0x79a72f*/
          if ( v31 >= 0 ) /*0x79a733*/
          {
            v43 = a3 + v27; /*0x79a743*/
            do /*0x79a7ba*/
            {
              v29 = (char *)(__int64)((double)(int)v50 * v37); /*0x79a76b*/
              if ( v28 == v31 ) /*0x79a773*/
                v29 = (char *)a4[2].capacityEnd + 0xFFFFFFFF; /*0x79a778*/
              if ( v29 > (char *)a4[2].capacityEnd + 0xFFFFFFFF ) /*0x79a783*/
                v29 = (char *)a4[2].capacityEnd + 0xFFFFFFFF; /*0x79a785*/
              v19[v18] = (_WORD)v29 + v43; /*0x79a78d*/
              v18 += 2; /*0x79a7ab*/
              v19[v18 - 1] = a3 + (_WORD)v29 + v41 + v39 * LOWORD(a4[2].capacityEnd); /*0x79a7ae*/
              v50 = (OB_stVector16_010201A0 *)--v28; /*0x79a7b6*/
            }
            while ( v28 >= 0 ); /*0x79a7ba*/
          }
        }
        else
        {
          v23 = v48 * (_WORD)v22; /*0x79a680*/
          v24 = 0; /*0x79a683*/
          v44 = v23; /*0x79a689*/
          v49 = 0; /*0x79a68d*/
          if ( v36 > 0 ) /*0x79a691*/
          {
            v42 = v23 + a3; /*0x79a6a1*/
            do /*0x79a71b*/
            {
              v25 = (char *)(__int64)((double)(int)v49 * v37); /*0x79a6c9*/
              if ( v24 == (OB_stVector16_010201A0 *)v31 ) /*0x79a6d1*/
                v25 = (char *)a4[2].capacityEnd + 0xFFFFFFFF; /*0x79a6d6*/
              if ( v25 > (char *)a4[2].capacityEnd + 0xFFFFFFFF ) /*0x79a6e1*/
                v25 = (char *)a4[2].capacityEnd + 0xFFFFFFFF; /*0x79a6e3*/
              v19[v18] = (_WORD)v25 + v42; /*0x79a6eb*/
              v26 = v18 + 1; /*0x79a6fe*/
              v24 = (OB_stVector16_010201A0 *)((char *)v24 + 1); /*0x79a706*/
              v19[v26] = (_WORD)v25 + v44 + a3 + v39 * LOWORD(a4[2].capacityEnd); /*0x79a70c*/
              v18 = v26 + 1; /*0x79a710*/
              v49 = v24; /*0x79a717*/
            }
            while ( (int)v24 < v36 ); /*0x79a71b*/
          }
        }
        if ( v30 < v32 ) /*0x79a7c6*/
        {
          v19[v18] = v19[v18 - 1]; /*0x79a7cd*/
          ++v18; /*0x79a7d1*/
        }
        ++v30; /*0x79a7dc*/
      }
      while ( v40 < v34 ); /*0x79a7e0*/
      v16 = v45; /*0x79a7e6*/
    }
    OB_CIndexedGeometry_AddStrip_010201A0((OB_CIndexedGeometry_010201A0 *)*this, lodLevel, v19, v16); /*0x79a7f7*/
    ++*(_WORD *)(*this + 0x26); /*0x79a7fe*/
  }
}
