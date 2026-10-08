// CFrondEngine::Compute used by CSpeedTreeRT::Compute; builds stock frond indexed geometry before TES4 later deletes unconsumed frond geometry.
//
// [2026-10-03 geometry limits] Verified Compute rejects only vertex total >0xFFFF (frond vertices exceed %d diagnostic), not >0x7FFF. Fallout CFrondEngine::Compute 0x82832380 corroborates the same boundary. Plugin removed its unsupported signed-half-range cap; native vertex count and index slots remain unsigned WORD.
//
// [2026-10-03 material ownership] Builds shared vertices from highest-LOD guide set: engine+18 outer vector, first inner vector contains 0x30-byte guides. Lower LOD index generation reuses these starts. Use LOD0 guides, not the pre-pruning root guide vector, to prove full vertex/material association. Plugin now verifies exact nonoverlapping coverage of the exported coordinate buffer and retains one map byte per vertex through cache/clone/free. Uniform referenced triangle sets use their proven map index for texture lookup; multi-map shape partitioning is still pending.
unsigned int __thiscall OB_CFrondEngine_Compute_010201A0(
        OB_CFrondEngine_010201A0 *this,
        OB_CIndexedGeometry_010201A0 *frondGeometry,
        int lightingEngine)
{
  int v4; // edi
  unsigned int v5; // ebx
  int v6; // ebp
  OB_stVector_SFrondGuide_010201A0 *begin; // eax
  OB_stVector_SFrondGuide_010201A0 *v8; // eax
  OB_SFrondGuide_010201A0 *v9; // edx
  int frondType; // eax
  OB_stVector_SFrondGuide_010201A0 *v11; // eax
  OB_stVector_SFrondGuide_010201A0 *v12; // edi
  OB_SFrondGuide_010201A0 *v13; // eax
  OB_SFrondGuide_010201A0 *v14; // eax
  void *v15; // edx
  OB_SFrondGuide_010201A0 *v16; // eax
  unsigned int v17; // edx
  OB_stVector_SFrondGuide_010201A0 *v18; // eax
  OB_stVector_SFrondGuide_010201A0 *v19; // edi
  OB_SFrondGuide_010201A0 *v20; // eax
  OB_SFrondGuide_010201A0 *v21; // eax
  void *v22; // edx
  OB_SFrondGuide_010201A0 *v23; // eax
  int v24; // eax
  OB_stString28_010201A0 *v25; // eax
  int v26; // eax
  unsigned int v27; // ebx
  int i; // ebp
  OB_stVector_SFrondGuide_010201A0 *v29; // eax
  OB_stVector_SFrondGuide_010201A0 *v30; // eax
  OB_SFrondGuide_010201A0 *v31; // edx
  OB_stVector_SFrondGuide_010201A0 *v32; // eax
  int v33; // eax
  int j; // edi
  OB_stVector_SFrondGuide_010201A0 *v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // ebx
  OB_stVector_SFrondGuide_010201A0 *v38; // ecx
  OB_stVector_SFrondGuide_010201A0 *v39; // eax
  OB_SFrondGuide_010201A0 *v40; // edx
  OB_stVector_SFrondGuide_010201A0 *v41; // eax
  OB_stVector_SFrondGuide_010201A0 *v42; // edi
  OB_SFrondGuide_010201A0 *v43; // eax
  OB_stVector_SFrondGuide_010201A0 *v44; // ecx
  OB_SFrondGuide_010201A0 *v45; // ebp
  OB_stVector_SFrondGuide_010201A0 *v46; // edi
  OB_SFrondGuide_010201A0 *v47; // eax
  OB_stVector_SFrondGuide_010201A0 *v48; // ecx
  OB_stVector_SFrondGuide_010201A0 *v49; // edi
  OB_SFrondGuide_010201A0 *v50; // eax
  OB_stVector_SFrondGuide_010201A0 *v51; // eax
  OB_SFrondGuide_010201A0 *v52; // edi
  OB_stVector_SFrondGuide_010201A0 *v53; // ebp
  OB_SFrondGuide_010201A0 *v54; // eax
  unsigned int v55; // ebx
  int m; // ebp
  OB_stVector_SFrondGuide_010201A0 *v57; // eax
  OB_stVector_SFrondGuide_010201A0 *v58; // eax
  OB_SFrondGuide_010201A0 *v59; // edx
  OB_stVector_SFrondGuide_010201A0 *v60; // eax
  int v61; // eax
  int n; // ebp
  OB_stVector_SFrondGuide_010201A0 *v63; // ecx
  unsigned int v64; // ebx
  OB_stVector_SFrondGuide_010201A0 *v65; // ecx
  OB_stVector_SFrondGuide_010201A0 *v66; // eax
  OB_SFrondGuide_010201A0 *v67; // edx
  OB_stVector_SFrondGuide_010201A0 *v68; // ecx
  OB_stVector_SFrondGuide_010201A0 *v69; // edi
  OB_SFrondGuide_010201A0 *v70; // eax
  OB_stVector_SFrondGuide_010201A0 *v71; // eax
  OB_stVector_SFrondGuide_010201A0 *v72; // ebp
  OB_SFrondGuide_010201A0 *v73; // eax
  int v74; // [esp+14h] [ebp-A0h]
  int k; // [esp+14h] [ebp-A0h]
  int ii; // [esp+14h] [ebp-A0h]
  int v77; // [esp+18h] [ebp-9Ch]
  int v78; // [esp+18h] [ebp-9Ch]
  OB_stString28_010201A0 result; // [esp+20h] [ebp-94h] BYREF
  OB_stString28_010201A0 details; // [esp+3Ch] [ebp-78h] BYREF
  OB_IdvFileError_010201A0 v81; // [esp+58h] [ebp-5Ch] BYREF
  OB_IdvFileError_010201A0 v82; // [esp+80h] [ebp-34h] BYREF
  int v83; // [esp+B0h] [ebp-4h]

  this->lightingEngine = (OB_CLightingEngine_010201A0 *)lightingEngine; /*0x7a1d0d*/
  v4 = 0; /*0x7a1d10*/
  this->indexedGeometry = frondGeometry; /*0x7a1d14*/
  v74 = 0; /*0x7a1d16*/
  OB_CFrondEngine_BuildGuideLods_010201A0(this); /*0x7a1d1a*/
  v5 = 0; /*0x7a1d1f*/
  v6 = 0; /*0x7a1d21*/
  while ( 1 ) /*0x7a1d23*/
  {
    begin = this->guideLodVectorWrapper.begin; /*0x7a1d23*/
    if ( !begin || !(this->guideLodVectorWrapper.end - begin) ) /*0x7a1d2f*/
      _invalid_parameter_noinfo(v5, 0, (int)this); /*0x7a1d34*/
    v8 = this->guideLodVectorWrapper.begin; /*0x7a1d39*/
    v9 = v8->begin; /*0x7a1d3c*/
    if ( !v9 || v5 >= v8->end - v9 ) /*0x7a1d5f*/
      break; /*0x7a1d5f*/
    frondType = this->frondType; /*0x7a1d65*/
    if ( frondType ) /*0x7a1d6a*/
    {
      if ( frondType != 1 ) /*0x7a1d73*/
      {
        result.capacity = 0xF; /*0x7a1ea6*/
        result.size = 0; /*0x7a1eae*/
        result.storage.inlineData[0] = 0; /*0x7a1eb2*/
        OB_stString28_AssignBytes_010201A0(&result, "default reached in CFrondEngine::Compute()", 0x2Au); /*0x7a1eb7*/
        v83 = 0; /*0x7a1ec6*/
        OB_IdvFileError_Ctor_010201A0(&v81, &result, 0); /*0x7a1ecd*/
        ThrowException__((DWORD)&v81, &_TI3_AVIdvFileError__); /*0x7a1edc*/
      }
      v11 = this->guideLodVectorWrapper.begin; /*0x7a1d79*/
      if ( !v11 || !(this->guideLodVectorWrapper.end - v11) ) /*0x7a1d85*/
        _invalid_parameter_noinfo(v5, 0, (int)this); /*0x7a1d8a*/
      v12 = this->guideLodVectorWrapper.begin; /*0x7a1d8f*/
      v13 = v12->begin; /*0x7a1d92*/
      if ( !v13 || v5 >= v12->end - v13 ) /*0x7a1db1*/
        _invalid_parameter_noinfo(v5, (int)v12, (int)this); /*0x7a1db3*/
      v14 = v12->begin; /*0x7a1db8*/
      v15 = v14[v6].vertexVector.begin; /*0x7a1dbb*/
      v16 = &v14[v6]; /*0x7a1dbf*/
      if ( v15 ) /*0x7a1dc3*/
      {
        v17 = (int)((unsigned __int64)(0x92492493LL * ((char *)v16->vertexVector.end - (char *)v15)) >> 0x20) >> 5; /*0x7a1df0*/
        v74 += (v17 + (v17 >> 0x1F)) * (2 * this->profileSegmentCount - 1); /*0x7a1e04*/
      }
      ++v5; /*0x7a1dd5*/
      ++v6; /*0x7a1dd8*/
      v4 = 0; /*0x7a1ddb*/
    }
    else
    {
      v18 = this->guideLodVectorWrapper.begin; /*0x7a1e15*/
      if ( !v18 || !(this->guideLodVectorWrapper.end - v18) ) /*0x7a1e21*/
        _invalid_parameter_noinfo(v5, 0, (int)this); /*0x7a1e26*/
      v19 = this->guideLodVectorWrapper.begin; /*0x7a1e2b*/
      v20 = v19->begin; /*0x7a1e2e*/
      if ( !v20 || v5 >= v19->end - v20 ) /*0x7a1e4d*/
        _invalid_parameter_noinfo(v5, (int)v19, (int)this); /*0x7a1e4f*/
      v21 = v19->begin; /*0x7a1e54*/
      v22 = v21[v6].vertexVector.begin; /*0x7a1e57*/
      v23 = &v21[v6]; /*0x7a1e5b*/
      if ( v22 ) /*0x7a1e5f*/
        v24 = ((char *)v23->vertexVector.end - (char *)v22) / 0x38; /*0x7a1e7b*/
      else
        v24 = 0; /*0x7a1e61*/
      ++v5; /*0x7a1e8a*/
      ++v6; /*0x7a1e8d*/
      v74 += 2 * v24 * this->bladeCount; /*0x7a1e90*/
      v4 = 0; /*0x7a1e94*/
    }
  }
  if ( v74 > 0xFFFF ) /*0x7a1ee9*/
  {
    v25 = OB_IdvFormatString_010201A0(&result, "frond vertices exceed %d", 0xFFFF); /*0x7a1ef9*/
    v83 = 1; /*0x7a1f06*/
    OB_std_runtime_error_CtorFromString_010201A0((OB_std_runtime_error_010201A0 *)&v81, v25); /*0x7a1f11*/
    ThrowException__((DWORD)&v81, &_TI2_AVruntime_error_std__); /*0x7a1f20*/
  }
  OB_CIndexedGeometry_SetNumLodLevels_010201A0(this->indexedGeometry, this->frondLodCount); /*0x7a1f2c*/
  v26 = this->frondType; /*0x7a1f31*/
  if ( v26 )
  {
    if ( v26 != 1 ) /*0x7a1f3f*/
    {
      details.capacity = 0xF; /*0x7a1f4c*/
      details.size = 0; /*0x7a1f54*/
      details.storage.inlineData[0] = 0; /*0x7a1f58*/
      OB_stString28_AssignBytes_010201A0(&details, "default reached in CFrondEngine::Compute()", 0x2Au); /*0x7a1f5d*/
      v83 = 2; /*0x7a1f6f*/
      OB_IdvFileError_Ctor_010201A0(&v82, &details, 0); /*0x7a1f7a*/
      ThrowException__((DWORD)&v82, &_TI3_AVIdvFileError__); /*0x7a1f8c*/
    }
    v27 = 0; /*0x7a1f91*/
    for ( i = 0; ; i += 0x30 ) /*0x7a1f93*/
    {
      v29 = this->guideLodVectorWrapper.begin; /*0x7a1f95*/
      if ( !v29 || !(this->guideLodVectorWrapper.end - v29) ) /*0x7a1fa1*/
        _invalid_parameter_noinfo(v27, v4, (int)this); /*0x7a1fa6*/
      v30 = this->guideLodVectorWrapper.begin; /*0x7a1fab*/
      v31 = v30->begin; /*0x7a1fae*/
      if ( !v31 || v27 >= v30->end - v31 ) /*0x7a1fcd*/
        break; /*0x7a1fcd*/
      v32 = this->guideLodVectorWrapper.begin; /*0x7a1fcf*/
      if ( !v32 || !(this->guideLodVectorWrapper.end - v32) ) /*0x7a1fdb*/
        _invalid_parameter_noinfo(v27, v4, (int)this); /*0x7a1fe0*/
      v4 = (int)this->guideLodVectorWrapper.begin; /*0x7a1fe5*/
      v33 = *(_DWORD *)(v4 + 4); /*0x7a1fe8*/
      if ( !v33 || v27 >= (*(_DWORD *)(v4 + 8) - v33) / 0x30 ) /*0x7a2007*/
        _invalid_parameter_noinfo(v27, v4, (int)this); /*0x7a2009*/
      OB_CFrondEngine_BuildExtrusionVertices_010201A0(this, (OB_SFrondGuide_010201A0 *)(i + *(_DWORD *)(v4 + 4))); /*0x7a2016*/
      ++v27; /*0x7a201b*/
    }
    for ( j = 0; ; ++j )
    {
      v35 = this->guideLodVectorWrapper.begin; /*0x7a2028*/
      v77 = j; /*0x7a202d*/
      v36 = v35 ? this->guideLodVectorWrapper.end - v35 : 0;
      if ( (unsigned __int16)j >= v36 ) /*0x7a2044*/
        break; /*0x7a2044*/
      OB_CIndexedGeometry_ResetStripCounter_010201A0(this->indexedGeometry, j); /*0x7a204d*/
      v37 = 0; /*0x7a2052*/
      for ( k = 0; ; ++k ) /*0x7a2054*/
      {
        v38 = this->guideLodVectorWrapper.begin; /*0x7a2058*/
        if ( !v38 || (unsigned __int16)j >= (unsigned int)(this->guideLodVectorWrapper.end - v38) ) /*0x7a206c*/
          _invalid_parameter_noinfo(v37, j, (int)this); /*0x7a206e*/
        v39 = &this->guideLodVectorWrapper.begin[(unsigned __int16)j]; /*0x7a2079*/
        v40 = v39->begin; /*0x7a207c*/
        if ( !v40 || v37 >= v39->end - v40 ) /*0x7a209f*/
          break; /*0x7a209f*/
        v41 = this->guideLodVectorWrapper.begin; /*0x7a20a5*/
        if ( !v41 || !(this->guideLodVectorWrapper.end - v41) ) /*0x7a20b1*/
          _invalid_parameter_noinfo(v37, j, (int)this); /*0x7a20b6*/
        v42 = this->guideLodVectorWrapper.begin; /*0x7a20bb*/
        v43 = v42->begin; /*0x7a20be*/
        if ( !v43 || v37 >= v42->end - v43 ) /*0x7a20dd*/
          _invalid_parameter_noinfo(v37, (int)v42, (int)this); /*0x7a20df*/
        v44 = this->guideLodVectorWrapper.begin; /*0x7a20e7*/
        v45 = &v42->begin[k]; /*0x7a20ea*/
        if ( !v44 || (unsigned __int16)v77 >= (unsigned int)(this->guideLodVectorWrapper.end - v44) ) /*0x7a2101*/
          _invalid_parameter_noinfo(v37, (int)v42, (int)this); /*0x7a2103*/
        v46 = &this->guideLodVectorWrapper.begin[(unsigned __int16)v77]; /*0x7a2110*/
        v47 = v46->begin; /*0x7a2113*/
        if ( !v47 || v37 >= v46->end - v47 ) /*0x7a2132*/
          _invalid_parameter_noinfo(v37, (int)v46, (int)this); /*0x7a2134*/
        v46->begin[k].verticesPerGuideVertex = v45->verticesPerGuideVertex; /*0x7a2143*/
        v48 = this->guideLodVectorWrapper.begin; /*0x7a2147*/
        if ( !v48 || (unsigned __int16)v77 >= (unsigned int)(this->guideLodVectorWrapper.end - v48) ) /*0x7a215d*/
          _invalid_parameter_noinfo(v37, (int)v46, (int)this); /*0x7a215f*/
        v49 = &this->guideLodVectorWrapper.begin[(unsigned __int16)v77]; /*0x7a216c*/
        v50 = v49->begin; /*0x7a216f*/
        if ( !v50 || v37 >= v49->end - v50 ) /*0x7a218e*/
          _invalid_parameter_noinfo(v37, (int)v49, (int)this); /*0x7a2190*/
        v51 = this->guideLodVectorWrapper.begin; /*0x7a2198*/
        v52 = &v49->begin[k]; /*0x7a219b*/
        if ( !v51 || !(this->guideLodVectorWrapper.end - v51) ) /*0x7a21a8*/
          _invalid_parameter_noinfo(v37, (int)v52, (int)this); /*0x7a21ad*/
        v53 = this->guideLodVectorWrapper.begin; /*0x7a21b2*/
        v54 = v53->begin; /*0x7a21b5*/
        if ( !v54 || v37 >= v53->end - v54 ) /*0x7a21d4*/
          _invalid_parameter_noinfo(v37, (int)v52, (int)this); /*0x7a21d6*/
        OB_CFrondEngine_ComputeExtrusion_010201A0( /*0x7a21f0*/
          (int *)this,
          (unsigned __int16)v77,
          v53->begin[k].sharedVertexStartIndex,
          v52);
        j = v77; /*0x7a21f5*/
        ++v37; /*0x7a21f9*/
      }
    }
  }
  else
  {
    v55 = 0; /*0x7a220e*/
    for ( m = 0; ; m += 0x30 ) /*0x7a2210*/
    {
      v57 = this->guideLodVectorWrapper.begin; /*0x7a2212*/
      if ( !v57 || !(this->guideLodVectorWrapper.end - v57) ) /*0x7a221e*/
        _invalid_parameter_noinfo(v55, v4, (int)this); /*0x7a2223*/
      v58 = this->guideLodVectorWrapper.begin; /*0x7a2228*/
      v59 = v58->begin; /*0x7a222b*/
      if ( !v59 || v55 >= v58->end - v59 ) /*0x7a224a*/
        break; /*0x7a224a*/
      v60 = this->guideLodVectorWrapper.begin; /*0x7a224c*/
      if ( !v60 || !(this->guideLodVectorWrapper.end - v60) ) /*0x7a2258*/
        _invalid_parameter_noinfo(v55, v4, (int)this); /*0x7a225d*/
      v4 = (int)this->guideLodVectorWrapper.begin; /*0x7a2262*/
      v61 = *(_DWORD *)(v4 + 4); /*0x7a2265*/
      if ( !v61 || v55 >= (*(_DWORD *)(v4 + 8) - v61) / 0x30 ) /*0x7a2284*/
        _invalid_parameter_noinfo(v55, v4, (int)this); /*0x7a2286*/
      OB_CFrondEngine_BuildBladeVertices_010201A0( /*0x7a2293*/
        &this->indexedGeometry,
        v4,
        (OB_stVector16_010201A0 *)(m + *(_DWORD *)(v4 + 4)));
      ++v55; /*0x7a2298*/
    }
    for ( n = 0; ; ++n )
    {
      v63 = this->guideLodVectorWrapper.begin; /*0x7a22a5*/
      v64 = 0; /*0x7a22a8*/
      v78 = n; /*0x7a22ac*/
      v36 = v63 ? this->guideLodVectorWrapper.end - v63 : 0;
      if ( (unsigned __int16)n >= v36 ) /*0x7a22c3*/
        break; /*0x7a22c3*/
      OB_CIndexedGeometry_ResetStripCounter_010201A0(this->indexedGeometry, n); /*0x7a22cc*/
      for ( ii = 0; ; ++ii ) /*0x7a22d1*/
      {
        v65 = this->guideLodVectorWrapper.begin; /*0x7a22d5*/
        if ( !v65 || (unsigned __int16)n >= (unsigned int)(this->guideLodVectorWrapper.end - v65) ) /*0x7a22e9*/
          _invalid_parameter_noinfo(v64, v4, (int)this); /*0x7a22eb*/
        v4 = (unsigned __int16)n; /*0x7a22f0*/
        v66 = &this->guideLodVectorWrapper.begin[(unsigned __int16)n]; /*0x7a22f8*/
        v67 = v66->begin; /*0x7a22fb*/
        if ( !v67 || v64 >= v66->end - v67 ) /*0x7a231e*/
          break; /*0x7a231e*/
        v68 = this->guideLodVectorWrapper.begin; /*0x7a2324*/
        if ( !v68 || (unsigned __int16)n >= (unsigned int)(this->guideLodVectorWrapper.end - v68) ) /*0x7a2335*/
          _invalid_parameter_noinfo(v64, (unsigned __int16)n, (int)this); /*0x7a2337*/
        v69 = &this->guideLodVectorWrapper.begin[(unsigned __int16)n]; /*0x7a233f*/
        v70 = v69->begin; /*0x7a2342*/
        if ( !v70 || v64 >= v69->end - v70 ) /*0x7a2361*/
          _invalid_parameter_noinfo(v64, (int)v69, (int)this); /*0x7a2363*/
        v71 = this->guideLodVectorWrapper.begin; /*0x7a236b*/
        v4 = (int)&v69->begin[ii]; /*0x7a236e*/
        if ( !v71 || !(this->guideLodVectorWrapper.end - v71) ) /*0x7a237b*/
          _invalid_parameter_noinfo(v64, v4, (int)this); /*0x7a2380*/
        v72 = this->guideLodVectorWrapper.begin; /*0x7a2385*/
        v73 = v72->begin; /*0x7a2388*/
        if ( !v73 || v64 >= v72->end - v73 ) /*0x7a23a7*/
          _invalid_parameter_noinfo(v64, v4, (int)this); /*0x7a23a9*/
        OB_CFrondEngine_ComputeBlade_010201A0(this, v78, v72->begin[ii].sharedVertexStartIndex, (_DWORD *)v4); /*0x7a23c3*/
        n = v78; /*0x7a23c8*/
        ++v64; /*0x7a23cc*/
      }
    }
  }
  return v36; /*0x7a23e1*/
}
