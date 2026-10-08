// OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry::CombineStrips stitches per-LOD unsigned-short index arrays, including parity-dependent degenerates when requested, then replaces lengths/pointers/totals through deep vector assignment. RT4.1 corroborates the algorithm only; its 32-bit contiguous storage differs.
//
// [2026-10-02 strip conversion correction] Verified parity-sensitive connector insertion: toggleFaceOrdering adds two connector indices after even source lengths and three after odd lengths. Fallout CIndexedGeometry::CombineStrips 0x828298D8 independently matches this behavior; RT4.1 IndexedGeometry.cpp:90 also preserves parity but uses int indices/paired strip-info storage. Oblivion uses ushort lengths/indices and separate pointer vectors. Triangle-list consumers must advance parity for every source window, including degenerate connector windows, and restart for each distinct strip. SpeedTreeOBSE converter now copies lengths/pointers and each selected strip before converting; it no longer rereads live metadata against an earlier allocation size. Null triangle-bearing strips fail instead of silently producing partial geometry. This is bridge hardening, not a new native synchronization guarantee.
//
// [2026-10-03 composite capacity correction] Native composite length is calculated/allocated in a wider integer, then narrowed at797D95/797DE2 when publishing the ushort length. Frond-only caller78CE00 now preflights every LOD including connector counts. Representable composites still use native code. Oversized results use the same 2/3 connector sequence, split with even-offset/two-index overlap, stage all replacement metadata/buffers before publication, and free old owned strips plus POD length/pointer arrays afterward. Branch caller78CDF6 is unchanged. Native commit/unwind behavior still needs game acceptance.
void __thiscall OB_CIndexedGeometry_CombineStrips_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        unsigned __int8 toggleFaceOrdering)
{
  float *begin; // eax
  unsigned int v4; // ecx
  bool v5; // zf
  unsigned __int16 v6; // bp
  __int16 v7; // bx
  OB_stVectorUShortPtr_010201A0 *v8; // ecx
  OB_stVectorUShortPtr_010201A0 *v9; // edi
  unsigned __int16 **v10; // eax
  OB_stVectorUShort_010201A0 *v11; // ecx
  OB_stVectorUShort_010201A0 *v12; // edi
  unsigned __int16 *v13; // ecx
  unsigned __int16 j; // bp
  OB_stVectorUShortPtr_010201A0 *v15; // ecx
  OB_stVectorUShortPtr_010201A0 *v16; // edi
  unsigned __int16 **v17; // eax
  unsigned __int16 v18; // ax
  OB_stVectorUShort_010201A0 *v19; // ecx
  OB_stVectorUShort_010201A0 *v20; // edi
  unsigned __int16 *v21; // ecx
  OB_stVectorUShortPtr_010201A0 *v22; // ecx
  OB_stVectorUShortPtr_010201A0 *v23; // edi
  int v24; // eax
  int v25; // ebp
  OB_stVectorUShortPtr_010201A0 *v26; // ecx
  OB_stVectorUShortPtr_010201A0 *v27; // eax
  unsigned __int16 **v28; // ecx
  OB_stVectorUShort_010201A0 *v29; // ecx
  OB_stVectorUShort_010201A0 *v30; // ebx
  unsigned __int16 *v31; // ecx
  OB_stVectorUShortPtr_010201A0 *v32; // ecx
  OB_stVectorUShortPtr_010201A0 *v33; // ebx
  unsigned __int16 **v34; // ecx
  char *v35; // ebx
  OB_stVectorUShortPtr_010201A0 *v36; // eax
  int v37; // ecx
  int v38; // eax
  OB_stVectorUShortPtr_010201A0 *v39; // eax
  unsigned __int16 **v40; // ecx
  unsigned __int16 v41; // ax
  OB_stVectorUShortPtr_010201A0 *v42; // ecx
  OB_stVectorUShortPtr_010201A0 *v43; // eax
  unsigned __int16 **v44; // edx
  OB_stVectorUShortPtr_010201A0 *v45; // ecx
  _WORD *v46; // ebx
  OB_stVectorUShortPtr_010201A0 *v47; // eax
  unsigned __int16 **v48; // edx
  OB_stVectorUShortPtr_010201A0 *v49; // ecx
  _WORD *v50; // ebx
  OB_stVectorUShortPtr_010201A0 *v51; // edi
  unsigned int v52; // ebp
  unsigned __int16 **v53; // ecx
  OB_stVectorUShortPtr_010201A0 *v54; // eax
  unsigned __int16 **v55; // edx
  OB_stVectorUShortPtr_010201A0 *v56; // ecx
  _WORD *v57; // ebx
  OB_stVectorUShortPtr_010201A0 *v58; // edi
  unsigned int v59; // ebp
  unsigned __int16 **v60; // ecx
  OB_stVectorUShort_010201A0 *v61; // edi
  unsigned __int16 *v62; // eax
  unsigned int v63; // edx
  unsigned __int16 *v64; // eax
  unsigned __int16 *v65; // ebp
  OB_stVectorUShortPtr_010201A0 *v66; // ecx
  unsigned __int16 **v67; // eax
  OB_stVector4_010201A0 *v68; // edi
  unsigned int v69; // edx
  unsigned int *v70; // eax
  unsigned int *v71; // ebp
  unsigned int *v72; // ecx
  OB_stVectorUShort_010201A0 *v73; // edi
  unsigned __int16 *end; // ebx
  unsigned __int16 *v75; // ebp
  int v76; // eax
  OB_stVectorUShortPtr_010201A0 *v77; // ecx
  unsigned __int16 **v78; // ebx
  OB_stVectorUShortPtr_010201A0 *v79; // edi
  unsigned __int16 **v80; // ebp
  int v81; // eax
  unsigned int *v82; // ecx
  OB_stVectorUShortPtr_010201A0 *v83; // esi
  OB_stVectorUShort_010201A0 *v84; // esi
  rsize_t v85; // [esp-Ch] [ebp-8Ch]
  rsize_t v86; // [esp-Ch] [ebp-8Ch]
  unsigned int v87; // [esp-8h] [ebp-88h]
  unsigned int numDiscreteLodLevels; // [esp-4h] [ebp-84h]
  rsize_t v89; // [esp+0h] [ebp-80h]
  int i; // [esp+14h] [ebp-6Ch]
  int v91; // [esp+18h] [ebp-68h]
  unsigned __int16 v92; // [esp+1Ch] [ebp-64h]
  unsigned int v93; // [esp+1Ch] [ebp-64h]
  char *Dst; // [esp+20h] [ebp-60h]
  int k; // [esp+24h] [ebp-5Ch]
  unsigned int value; // [esp+2Ch] [ebp-54h] BYREF
  unsigned __int16 v97[2]; // [esp+30h] [ebp-50h] BYREF
  OB_stVectorUShortIterator_010201A0 v98; // [esp+34h] [ebp-4Ch] BYREF
  OB_stVector4Iterator_010201A0 result; // [esp+3Ch] [ebp-44h] BYREF
  OB_stVector_stVectorUShortPtr_010201A0 v100; // [esp+44h] [ebp-3Ch] BYREF
  OB_stVector_stVectorUShort_010201A0 source; // [esp+54h] [ebp-2Ch] BYREF
  OB_stVectorUInt32_010201A0 v102; // [esp+64h] [ebp-1Ch] BYREF
  int v103; // [esp+7Ch] [ebp-4h]

  begin = this->vertexCoords.begin; /*0x7977f9*/
  if ( begin ) /*0x797800*/
    v4 = this->vertexCoords.end - begin; /*0x79780b*/
  else
    v4 = 0; /*0x797802*/
  if ( (unsigned __int16)(v4 / 3) )
  {
    OB_stVector_stVectorUShort_FillCtorEmpty_010201A0(&source, this->numDiscreteLodLevels); /*0x797829*/
    numDiscreteLodLevels = this->numDiscreteLodLevels; /*0x797832*/
    v103 = 0; /*0x797837*/
    OB_stVector_stVectorUShortPtr_FillCtorEmpty_010201A0(&v100, numDiscreteLodLevels); /*0x79783e*/
    v87 = this->numDiscreteLodLevels; /*0x79784c*/
    LOBYTE(v103) = 1; /*0x797851*/
    value = 0; /*0x797859*/
    OB_stVectorUInt32_FillCtor_010201A0(&v102, v87, &value); /*0x79785d*/
    v5 = this->numDiscreteLodLevels == 0; /*0x797862*/
    LOBYTE(v103) = 2; /*0x797866*/
    v91 = 0; /*0x79786b*/
    if ( !v5 )
    {
      while ( 1 ) /*0x797875*/
      {
        v6 = 0; /*0x797875*/
        for ( i = 0; ; i += v12->begin[v6++] ) /*0x797877*/
        {
          v7 = v91; /*0x797880*/
          if ( (__int16)v91 <= (__int16)0xFFFFFFFF ) /*0x797888*/
            break; /*0x797888*/
          v8 = this->perLodStrips.begin; /*0x79788e*/
          if ( !v8 || (__int16)v91 >= (unsigned int)(this->perLodStrips.end - v8) ) /*0x7978a2*/
            _invalid_parameter_noinfo(); /*0x7978a4*/
          v9 = &this->perLodStrips.begin[(__int16)v91]; /*0x7978ac*/
          v10 = v9->begin; /*0x7978af*/
          if ( !v10 || v6 >= (unsigned __int16)(v9->end - v10) ) /*0x7978c1*/
            break; /*0x7978c1*/
          v11 = this->perLodStripLengths.begin; /*0x7978c3*/
          if ( !v11 || (unsigned __int16)v91 >= (unsigned int)(this->perLodStripLengths.end - v11) ) /*0x7978d7*/
            _invalid_parameter_noinfo(); /*0x7978d9*/
          v12 = &this->perLodStripLengths.begin[(unsigned __int16)v91]; /*0x7978e1*/
          v13 = v12->begin; /*0x7978e7*/
          if ( !v13 || v6 >= (unsigned int)(v12->end - v13) ) /*0x7978f7*/
            _invalid_parameter_noinfo(); /*0x7978f9*/
        }
        if ( i > 0 ) /*0x797916*/
          break; /*0x797916*/
        value = (unsigned __int16)v91; /*0x797ec3*/
        if ( !source.begin || (unsigned __int16)v91 >= (unsigned int)(source.end - source.begin) ) /*0x797ed4*/
          _invalid_parameter_noinfo(); /*0x797ed6*/
        v73 = &source.begin[(unsigned __int16)v91]; /*0x797ede*/
        end = v73->end; /*0x797ee2*/
        if ( v73->begin > end ) /*0x797ee8*/
          _invalid_parameter_noinfo(); /*0x797eea*/
        v75 = v73->begin; /*0x797eef*/
        if ( v75 > v73->end ) /*0x797ef5*/
          _invalid_parameter_noinfo(); /*0x797ef7*/
        if ( v75 != end ) /*0x797efe*/
        {
          v76 = v73->end - end; /*0x797f05*/
          *(_DWORD *)v97 = &v75[v76]; /*0x797f0f*/
          if ( v76 > 0 ) /*0x797f13*/
          {
            HIDWORD(v85) = end; /*0x797f16*/
            LODWORD(v85) = 2 * v76; /*0x797f17*/
            memmove_s(v75, v85, (const void *)(2 * v76), v89); /*0x797f19*/
          }
          v73->end = *(unsigned __int16 **)v97; /*0x797f25*/
        }
        v77 = v100.begin; /*0x797f28*/
        if ( !v100.begin || value >= v100.end - v100.begin ) /*0x797f3d*/
        {
          _invalid_parameter_noinfo(); /*0x797f3f*/
          v77 = v100.begin; /*0x797f44*/
        }
        v78 = v77[value].end; /*0x797f4f*/
        v79 = &v77[value]; /*0x797f53*/
        if ( v79->begin > v78 ) /*0x797f58*/
          _invalid_parameter_noinfo(); /*0x797f5a*/
        v80 = v79->begin; /*0x797f5f*/
        if ( v80 > v79->end ) /*0x797f65*/
          _invalid_parameter_noinfo(); /*0x797f67*/
        if ( v80 != v78 ) /*0x797f6e*/
        {
          v81 = v79->end - v78; /*0x797f75*/
          *(_DWORD *)v97 = &v80[v81]; /*0x797f84*/
          if ( v81 > 0 ) /*0x797f88*/
          {
            HIDWORD(v86) = v78; /*0x797f8b*/
            LODWORD(v86) = 4 * v81; /*0x797f8c*/
            memmove_s(v80, v86, (const void *)(4 * v81), v89); /*0x797f8e*/
          }
          v79->end = *(unsigned __int16 ***)v97; /*0x797f9a*/
        }
        v82 = v102.begin; /*0x797f9d*/
        if ( !v102.begin || (unsigned __int16)v91 >= (unsigned int)(v102.end - v102.begin) ) /*0x797fb5*/
        {
          _invalid_parameter_noinfo(); /*0x797fb7*/
          v82 = v102.begin; /*0x797fbc*/
        }
        v25 = v91; /*0x797fc5*/
        v82[(unsigned __int16)v91] = 0; /*0x797fc9*/
LABEL_167:
        v91 = v25 + 1; /*0x797fd0*/
        if ( (unsigned __int16)(v25 + 1) >= this->numDiscreteLodLevels ) /*0x797fdb*/
          goto LABEL_168; /*0x797fdb*/
      }
      if ( toggleFaceOrdering ) /*0x797924*/
      {
        for ( j = 0; ; ++j ) /*0x79792a*/
        {
          if ( v7 <= (__int16)0xFFFFFFFF ) /*0x797934*/
            goto LABEL_29; /*0x797934*/
          v15 = this->perLodStrips.begin; /*0x797936*/
          if ( !v15 || v7 >= (unsigned int)(this->perLodStrips.end - v15) ) /*0x79794a*/
            _invalid_parameter_noinfo(); /*0x79794c*/
          v16 = &this->perLodStrips.begin[v7]; /*0x797954*/
          v17 = v16->begin; /*0x797957*/
          if ( v17 ) /*0x79795c*/
            v18 = v16->end - v17; /*0x797966*/
          else
LABEL_29:
            v18 = 0; /*0x79796b*/
          if ( j >= v18 - 1 ) /*0x797978*/
            break; /*0x797978*/
          v19 = this->perLodStripLengths.begin; /*0x79797e*/
          if ( !v19 || (unsigned __int16)v91 >= (unsigned int)(this->perLodStripLengths.end - v19) ) /*0x797994*/
            _invalid_parameter_noinfo(); /*0x797996*/
          v20 = &this->perLodStripLengths.begin[(unsigned __int16)v91]; /*0x79799e*/
          v21 = v20->begin; /*0x7979a1*/
          if ( !v21 || j >= (unsigned int)(v20->end - v21) ) /*0x7979b1*/
            _invalid_parameter_noinfo(); /*0x7979b3*/
          if ( (v20->begin[j] & 1) != 0 ) /*0x7979cc*/
            i += 3; /*0x7979df*/
          else
            i += 2; /*0x7979ce*/
          v7 = v91; /*0x7979d3*/
        }
      }
      else
      {
        if ( (__int16)v91 <= (__int16)0xFFFFFFFF ) /*0x7979f4*/
          goto LABEL_47; /*0x7979f4*/
        v22 = this->perLodStrips.begin; /*0x7979f6*/
        if ( !v22 || (__int16)v91 >= (unsigned int)(this->perLodStrips.end - v22) ) /*0x797a0a*/
          _invalid_parameter_noinfo(); /*0x797a0c*/
        v23 = &this->perLodStrips.begin[(__int16)v91]; /*0x797a14*/
        v24 = (int)v23->begin; /*0x797a17*/
        if ( v24 ) /*0x797a1c*/
          LOWORD(v24) = ((int)v23->end - v24) >> 2; /*0x797a26*/
        else
LABEL_47:
          LOWORD(v24) = 0; /*0x797a2b*/
        v24 = (unsigned __int16)v24; /*0x797a2d*/
        if ( (_WORD)v24 ) /*0x797a32*/
          v24 = (unsigned __int16)v24 - 1; /*0x797a34*/
        i += 2 * v24; /*0x797a3e*/
      }
      value = FormHeapAlloc((unsigned int)i >> 0x1F != 0 ? 0xFFFFFFFF : 2 * i);
      Dst = (char *)value; /*0x797a63*/
      for ( k = 0; ; ++k )
      {
        while ( 1 )
        {
          v25 = v91; /*0x797a6f*/
          if ( (__int16)v91 <= (__int16)0xFFFFFFFF ) /*0x797a77*/
            goto LABEL_113; /*0x797a77*/
          v26 = this->perLodStrips.begin; /*0x797a7d*/
          if ( !v26 || (__int16)v91 >= (unsigned int)(this->perLodStrips.end - v26) ) /*0x797a95*/
            _invalid_parameter_noinfo(); /*0x797a97*/
          v27 = &this->perLodStrips.begin[(__int16)v91]; /*0x797aa1*/
          v28 = v27->begin; /*0x797aa4*/
          if ( !v28 || (unsigned __int16)k >= (unsigned __int16)(v27->end - v28) ) /*0x797abc*/
          {
LABEL_113:
            *(_DWORD *)v97 = (unsigned __int16)i; /*0x797d95*/
            if ( !source.begin || (unsigned __int16)v91 >= (unsigned int)(source.end - source.begin) ) /*0x797da9*/
              _invalid_parameter_noinfo(); /*0x797dab*/
            v61 = &source.begin[(unsigned __int16)v91]; /*0x797db5*/
            v62 = v61->begin; /*0x797db9*/
            if ( v62 ) /*0x797dbe*/
              v63 = v61->end - v62; /*0x797dc9*/
            else
              v63 = 0; /*0x797dc0*/
            if ( v62 && v63 < v61->capacityEnd - v62 ) /*0x797dd8*/
            {
              v64 = v61->end; /*0x797dda*/
              *v64 = i; /*0x797de2*/
              v61->end = v64 + 1; /*0x797de8*/
            }
            else
            {
              v65 = v61->end; /*0x797ded*/
              if ( v62 > v65 ) /*0x797df2*/
                _invalid_parameter_noinfo(); /*0x797df4*/
              OB_stVectorUShort_InsertOne_010201A0( /*0x797e07*/
                v61,
                &v98,
                (OB_stVectorUShortIterator_010201A0)__PAIR64__((unsigned int)v65, (unsigned int)v61),
                v97);
              v25 = v91; /*0x797e0c*/
            }
            v66 = v100.begin; /*0x797e10*/
            if ( !v100.begin || (unsigned __int16)v91 >= (unsigned int)(v100.end - v100.begin) ) /*0x797e23*/
            {
              _invalid_parameter_noinfo(); /*0x797e25*/
              v66 = v100.begin; /*0x797e2a*/
            }
            v67 = v66[(unsigned __int16)v91].begin; /*0x797e33*/
            v68 = (OB_stVector4_010201A0 *)&v66[(unsigned __int16)v91]; /*0x797e37*/
            if ( v67 ) /*0x797e3b*/
              v69 = ((char *)v68->end - (char *)v67) >> 2; /*0x797e46*/
            else
              v69 = 0; /*0x797e3d*/
            if ( v67 && v69 < ((char *)v68->capacity - (char *)v67) >> 2 ) /*0x797e57*/
            {
              v70 = v68->end; /*0x797e59*/
              *v70 = value; /*0x797e60*/
              v68->end = v70 + 1; /*0x797e65*/
            }
            else
            {
              v71 = v68->end; /*0x797e6a*/
              if ( v67 > (unsigned __int16 **)v71 ) /*0x797e6f*/
                _invalid_parameter_noinfo(); /*0x797e71*/
              OB_stVector4_InsertOne_010201A0( /*0x797e84*/
                v68,
                &result,
                (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)v71, (unsigned int)v68),
                &value);
              v25 = v91; /*0x797e89*/
            }
            v72 = v102.begin; /*0x797e8d*/
            if ( !v102.begin || (unsigned __int16)v91 >= (unsigned int)(v102.end - v102.begin) ) /*0x797ea0*/
            {
              _invalid_parameter_noinfo(); /*0x797ea2*/
              v72 = v102.begin; /*0x797ea7*/
            }
            v72[(unsigned __int16)v91] = i - 2; /*0x797eb2*/
            goto LABEL_167; /*0x797eb5*/
          }
          v29 = this->perLodStripLengths.begin; /*0x797ac2*/
          if ( !v29 || (unsigned __int16)v91 >= (unsigned int)(this->perLodStripLengths.end - v29) ) /*0x797ad6*/
            _invalid_parameter_noinfo(); /*0x797ad8*/
          v30 = &this->perLodStripLengths.begin[(unsigned __int16)v91]; /*0x797ae7*/
          v31 = v30->begin; /*0x797aea*/
          if ( !v31 || (unsigned __int16)k >= (unsigned int)(v30->end - v31) ) /*0x797afa*/
            _invalid_parameter_noinfo(); /*0x797afc*/
          v32 = this->perLodStrips.begin; /*0x797b08*/
          v92 = v30->begin[(unsigned __int16)k]; /*0x797b0d*/
          if ( !v32 || (unsigned __int16)v91 >= (unsigned int)(this->perLodStrips.end - v32) ) /*0x797b1d*/
            _invalid_parameter_noinfo(); /*0x797b1f*/
          v33 = &this->perLodStrips.begin[(unsigned __int16)v91]; /*0x797b29*/
          v34 = v33->begin; /*0x797b2c*/
          if ( !v34 || (unsigned __int16)k >= (unsigned int)(v33->end - v34) ) /*0x797b3d*/
            _invalid_parameter_noinfo(); /*0x797b3f*/
          *(_DWORD *)v97 = v92; /*0x797b49*/
          v93 = v92; /*0x797b50*/
          memcpy(Dst, v33->begin[(unsigned __int16)k], v93 * 2); /*0x797b60*/
          v35 = &Dst[v93 * 2]; /*0x797b65*/
          v36 = this->perLodStrips.begin; /*0x797b69*/
          Dst += v93 * 2; /*0x797b71*/
          if ( !v36 /*0x797b85*/
            || (v37 = (char *)this->perLodStrips.end - (char *)v36,
                v38 = (__int16)v91,
                (__int16)v91 >= (unsigned int)(v37 >> 4)) )
          {
            _invalid_parameter_noinfo(); /*0x797b87*/
            v38 = (__int16)v91; /*0x797b8c*/
          }
          v39 = &this->perLodStrips.begin[v38]; /*0x797b93*/
          v40 = v39->begin; /*0x797b96*/
          v41 = v40 ? v39->end - v40 : 0;
          if ( (unsigned __int16)k < v41 - 1 ) /*0x797bb4*/
            break; /*0x797bb4*/
LABEL_112:
          ++k; /*0x797d80*/
        }
        if ( !toggleFaceOrdering ) /*0x797bc2*/
          break; /*0x797bc2*/
        v42 = this->perLodStrips.begin; /*0x797bd9*/
        if ( !(*(_DWORD *)v97 % 2) ) /*0x797bdc*/
          goto LABEL_99; /*0x797bdc*/
        if ( !v42 || (unsigned __int16)v91 >= (unsigned int)(this->perLodStrips.end - v42) ) /*0x797bf0*/
          _invalid_parameter_noinfo(); /*0x797bf2*/
        v43 = &this->perLodStrips.begin[(unsigned __int16)v91]; /*0x797bfc*/
        v44 = v43->begin; /*0x797bff*/
        *(_DWORD *)v97 = v43; /*0x797c04*/
        if ( !v44 || (unsigned __int16)k >= (unsigned int)(v43->end - v44) ) /*0x797c14*/
        {
          _invalid_parameter_noinfo(); /*0x797c16*/
          v43 = *(OB_stVectorUShortPtr_010201A0 **)v97; /*0x797c1b*/
        }
        *(_WORD *)v35 = v43->begin[(unsigned __int16)k][v93 - 1]; /*0x797c2e*/
        v45 = this->perLodStrips.begin; /*0x797c31*/
        v46 = v35 + 2; /*0x797c34*/
        if ( !v45 || (unsigned __int16)v91 >= (unsigned int)(this->perLodStrips.end - v45) ) /*0x797c45*/
          _invalid_parameter_noinfo(); /*0x797c47*/
        v47 = &this->perLodStrips.begin[(unsigned __int16)v91]; /*0x797c51*/
        v48 = v47->begin; /*0x797c54*/
        *(_DWORD *)v97 = v47; /*0x797c59*/
        if ( !v48 || (unsigned __int16)k >= (unsigned int)(v47->end - v48) ) /*0x797c69*/
        {
          _invalid_parameter_noinfo(); /*0x797c6b*/
          v47 = *(OB_stVectorUShortPtr_010201A0 **)v97; /*0x797c70*/
        }
        *v46 = v47->begin[(unsigned __int16)k][v93 - 1]; /*0x797c83*/
        v49 = this->perLodStrips.begin; /*0x797c86*/
        v50 = v46 + 1; /*0x797c89*/
        if ( !v49 || (unsigned __int16)v91 >= (unsigned int)(this->perLodStrips.end - v49) ) /*0x797c9a*/
          _invalid_parameter_noinfo(); /*0x797c9c*/
        v51 = &this->perLodStrips.begin[(unsigned __int16)v91]; /*0x797ca4*/
        v52 = (unsigned __int16)k + 1; /*0x797ca7*/
        v53 = v51->begin; /*0x797caa*/
        if ( !v53 || v52 >= v51->end - v53 ) /*0x797cbb*/
          _invalid_parameter_noinfo(); /*0x797cbd*/
        *v50 = *v51->begin[v52]; /*0x797ccb*/
        Dst = (char *)(v50 + 1); /*0x797cd6*/
      }
      v42 = this->perLodStrips.begin; /*0x797cdf*/
LABEL_99:
      if ( !v42 || (unsigned __int16)v91 >= (unsigned int)(this->perLodStrips.end - v42) ) /*0x797cf0*/
        _invalid_parameter_noinfo(); /*0x797cf2*/
      v54 = &this->perLodStrips.begin[(unsigned __int16)v91]; /*0x797cfc*/
      v55 = v54->begin; /*0x797cff*/
      *(_DWORD *)v97 = v54; /*0x797d04*/
      if ( !v55 || (unsigned __int16)k >= (unsigned int)(v54->end - v55) ) /*0x797d14*/
      {
        _invalid_parameter_noinfo(); /*0x797d16*/
        v54 = *(OB_stVectorUShortPtr_010201A0 **)v97; /*0x797d1b*/
      }
      *(_WORD *)v35 = v54->begin[(unsigned __int16)k][v93 - 1]; /*0x797d2e*/
      v56 = this->perLodStrips.begin; /*0x797d31*/
      v57 = v35 + 2; /*0x797d34*/
      if ( !v56 || (unsigned __int16)v91 >= (unsigned int)(this->perLodStrips.end - v56) ) /*0x797d45*/
        _invalid_parameter_noinfo(); /*0x797d47*/
      v58 = &this->perLodStrips.begin[(unsigned __int16)v91]; /*0x797d4f*/
      v59 = (unsigned __int16)k + 1; /*0x797d52*/
      v60 = v58->begin; /*0x797d55*/
      if ( !v60 || v59 >= v58->end - v60 ) /*0x797d66*/
        _invalid_parameter_noinfo(); /*0x797d68*/
      *v57 = *v58->begin[v59]; /*0x797d76*/
      Dst = (char *)(v57 + 1); /*0x797d7c*/
      goto LABEL_112; /*0x797d7c*/
    }
LABEL_168:
    OB_CIndexedGeometry_DeleteIndexData_010201A0(this); /*0x797fe1*/
    OB_stVector_stVectorUShort_CopyAssign_010201A0(&this->perLodStripLengths, &source); /*0x797ff0*/
    OB_stVector_stVectorUShortPtr_CopyAssign_010201A0(&this->perLodStrips, &v100); /*0x797ffd*/
    OB_stVectorUInt32_CopyAssign_010201A0(&this->perLodTriangleCounts, &v102); /*0x79800a*/
    if ( v102.begin ) /*0x798015*/
      FormHeapFree((unsigned int)v102.begin); /*0x798018*/
    v83 = v100.begin; /*0x798020*/
    if ( v100.begin ) /*0x798026*/
    {
      OB_stVector4_DestroyRange_010201A0((OB_stVector4_010201A0 *)v100.begin, (OB_stVector4_010201A0 *)v100.end); /*0x79803b*/
      FormHeapFree((unsigned int)v83); /*0x798041*/
    }
    v84 = source.begin; /*0x798049*/
    if ( source.begin ) /*0x79804f*/
    {
      OB_stVector4_DestroyRange_010201A0((OB_stVector4_010201A0 *)source.begin, (OB_stVector4_010201A0 *)source.end); /*0x798064*/
      FormHeapFree((unsigned int)v84); /*0x79806a*/
    }
  }
}
