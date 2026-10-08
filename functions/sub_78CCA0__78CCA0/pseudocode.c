// CSpeedTreeRT::Compute. Verified thiscall with transform pointer, seed and compositeStrips stack arguments, AL result, ret0x0C; the former extra EDI input was spurious. Computes tree/frond/leaf geometry, optional embedded texcoord transfer, optional transform/collision transform, extents/tree-size storage, horizontal billboard setup, and sets treeComputed byte. No stock render-resource attachment happens here.
//
// [2026-10-03 supplemental context hook] After storing RT.frondEngine(+5C) into static B429C4, native CALL78CD02 invokes CTreeEngine::Compute7A45F0 with one float leafSizeIncreaseFactor, while EBX remains CSpeedTreeRT*. This is the verified pre-guide generation boundary used by the plugin. FrondCompute call78CD12 is later, after guide generation, and is too late to apply distance/pruning/segment rules.
//
// [2026-10-03 completed export capture] Inner frond compute78CD12 precedes embedded frond UV transfer78CDE1, optional strip combination78CE00, optional geometry transform78CE3D and final treeComputedFlag+45=1 at78D05E. Caching owned vertex/UV copies directly after78CD12 is premature even when vector pointers remain equal. Plugin now wraps caller560888 and captures after this method returns success; a TLS in-progress fence also rejects intermediate exporter callbacks.
bool __thiscall CSpeedTreeRT__Compute(
        OB_CSpeedTreeRT_010201A0 *this,
        const float *transform4x4,
        unsigned int seed,
        bool compositeStrips)
{
  bool v5; // zf
  OB_CTreeEngine_010201A0 *treeEngine; // esi
  int begin; // eax
  signed int i; // esi
  OB_CSpeedTreeRT_SEmbeddedTexCoords *embeddedTexcoords; // eax
  float j; // esi
  OB_CSpeedTreeRT_SEmbeddedTexCoords *v11; // eax
  unsigned int *p_allocatorState; // ecx
  OB_CIndexedGeometry_010201A0 *branchGeometry; // ecx
  float *p_x; // eax
  float leafSizeIncreaseFactor[5]; // [esp+0h] [ebp-80h] BYREF
  OB_stTransform_010201A0 transformCopy; // [esp+30h] [ebp-50h] BYREF
  float *v23; // [esp+70h] [ebp-10h]
  int v24; // [esp+7Ch] [ebp-4h]
  OB_stRegion_010201A0 boundsMin; // [esp+88h] [ebp+8h] BYREF
  OB_CSpeedTreeRT_010201A0 *v26; // [esp+B8h] [ebp+38h]
  int seedc; // [esp+C8h] [ebp+48h]
  unsigned int seedd; // [esp+C8h] [ebp+48h]
  int seedf; // [esp+C8h] [ebp+48h]
  int seedh; // [esp+C8h] [ebp+48h]
  unsigned int seedi; // [esp+C8h] [ebp+48h]
  int seedk; // [esp+C8h] [ebp+48h]
  int seedm; // [esp+C8h] [ebp+48h]
  unsigned int seedn; // [esp+C8h] [ebp+48h]
  int seedp; // [esp+C8h] [ebp+48h]
  int compositeStripsc; // [esp+CCh] [ebp+4Ch]
  int compositeStripsa; // [esp+CCh] [ebp+4Ch]

  v23 = &leafSizeIncreaseFactor[1]; /*0x78cccd*/
  _EBX = this; /*0x78ccd0*/
  v26 = this; /*0x78ccd2*/
  v5 = this->treeComputedFlag == 0;             // Compute executes geometry initialization only while treeComputedFlag is zero; repeated Compute on the same CSpeedTreeRT is ignored. Therefore post-Compute leaf card counts/index arrays are immutable for that live object. /*0x78ccd5*/
  v24 = 0; /*0x78ccd9*/
  if ( v5 ) /*0x78cce0*/
  {
    unk_B429C4 = (int)this->frondEngine; /*0x78ccec*/
    OB_CTreeEngine_SetSeed_010201A0(this->treeEngine, seed); /*0x78ccf4*/
    __asm { fld     dword ptr [ebx+24h] } /*0x78ccf9*/
    __asm { fstp    [esp+0BCh+leafSizeIncreaseFactor]; leafSizeIncreaseFactor }
    OB_CTreeEngine_Compute_010201A0(_EBX->treeEngine, leafSizeIncreaseFactor[0]); /*0x78cd02*/
    OB_CFrondEngine_Compute_010201A0(_EBX->frondEngine, _EBX->frondGeometry, (int)_EBX->lightingEngine);// SpeedTreeOBSE 2026-05-30: C:\src\Fronds reference layer instruments this CFrondEngine::Compute callsite under the frond restoration opt-in. /*0x78cd12*/
    treeEngine = _EBX->treeEngine; /*0x78cd1e*/
    _EBX->frondLodCount = _EBX->frondGeometry->numDiscreteLodLevels; /*0x78cd20*/
    begin = (int)treeEngine->leafInfo.leafTextures.begin; /*0x78cd24*/
    if ( begin ) /*0x78cd2c*/
      begin = ((int)treeEngine->leafInfo.leafTextures.end - begin) / 0x54; /*0x78cd45*/
    OB_SIdvLeafInfo_InitTables_010201A0(&treeEngine->leafInfo, begin); /*0x78cd4e*/
    if ( _EBX->lightingEngine->leafLightingMethod == 1 ) /*0x78cd5c*/
      CSpeedTreeRT__ComputeLeafStaticLighting(_EBX); /*0x78cd60*/
    OB_CWindEngine_Init_010201A0(_EBX->windEngine, &_EBX->treeEngine->embeddedWindInfo); /*0x78cd70*/
    OB_CLeafGeometry_Init_010201A0( /*0x78cd8e*/
      _EBX->leafGeometry,
      _EBX->treeEngine->leafInfo.leafLodLevelCount,
      _EBX->treeEngine->leafLodVectors,
      &_EBX->treeEngine->leafInfo);             // Only Oblivion call to CLeafGeometry::Init; it builds all SLodGeometry records and alternate-index arrays during the first successful Compute.
    if ( _EBX->embeddedTexcoords )              // Composite-leaf authority: when CSpeedTreeRT+0x4C embedded texcoords exists, Compute transfers authored 10000 leaf UV rectangles into CLeafGeometry before stock leaf export. /*0x78cd93*/
    {
      for ( i = 0; ; ++i ) /*0x78cd99*/
      {
        embeddedTexcoords = _EBX->embeddedTexcoords; /*0x78cda0*/
        if ( i >= (signed int)embeddedTexcoords->branchMapCount ) /*0x78cda5*/
          break;                                // Embedded texcoord +0x00 is leaf-map count; loop bounds each 8-float authored composite UV rectangle. /*0x78cda5*/
        OB_CLeafGeometry_SetTextureCoords_010201A0( /*0x78cdb4*/
          _EBX->leafGeometry,
          i,
          &embeddedTexcoords->branchMapTexcoords8[8 * i]);// Compute transfers each embedded 8-float leaf rectangle through 0x798550. Therefore stock exported leaf-card UVs are already Direct3D-signed (T negated in Oblivion), and consumers must preserve their observed signed orientation.
      }
      for ( j = 0.0; ; ++LODWORD(j) ) /*0x78cdbe*/
      {
        v11 = _EBX->embeddedTexcoords; /*0x78cdc0*/
        if ( SLODWORD(j) >= (signed int)v11->frondMapCount ) /*0x78cdc6*/
          break; /*0x78cdc6*/
        OB_CFrondGeometry_CopyEmbeddedTexCoords_010201A0( /*0x78cde1*/
          _EBX->frondGeometry,
          j,
          &v11->frondMapTexcoords8[8 * LODWORD(j)],
          CSpeedTreeRT__s_textureFlip);
      }
    }
    if ( compositeStrips ) /*0x78cdef*/
    {
      OB_CIndexedGeometry_CombineStrips_010201A0(_EBX->branchGeometry, 0); /*0x78cdf6*/
      OB_CIndexedGeometry_CombineStrips_010201A0(_EBX->frondGeometry, 0); /*0x78ce00*/
    }
    if ( transform4x4 ) /*0x78ce0a*/
    {
      OB_stTransform_ctor_010201A0(&transformCopy); /*0x78ce0f*/
      qmemcpy(&transformCopy, transform4x4, sizeof(transformCopy)); /*0x78ce1f*/
      OB_CIndexedGeometry_Transform_010201A0(_EBX->branchGeometry, &transformCopy); /*0x78ce25*/
      OB_CLeafGeometry_Transform_010201A0(_EBX->leafGeometry, &transformCopy); /*0x78ce31*/
      OB_CIndexedGeometry_Transform_010201A0(_EBX->frondGeometry, &transformCopy); /*0x78ce3d*/
      p_allocatorState = &_EBX->collisionObjects->objects.allocatorState; /*0x78ce42*/
      if ( p_allocatorState ) /*0x78ce47*/
        CSpeedTreeRT__SCollisionObjects_TransformAll(p_allocatorState, transformCopy.m); /*0x78ce4d*/
    }
    OB_Extents_Init_010201A0(boundsMin.min.data); /*0x78ce55*/
    branchGeometry = _EBX->branchGeometry; /*0x78ce5e*/
    LOBYTE(v24) = 1; /*0x78ce61*/
    OB_CIndexedGeometry_ComputeExtents_010201A0(branchGeometry, &boundsMin); /*0x78ce65*/
    OB_CLeafGeometry_ComputeExtents_010201A0(_EBX->leafGeometry, &boundsMin); /*0x78ce71*/
    OB_CIndexedGeometry_ComputeExtents_010201A0(_EBX->frondGeometry, &boundsMin); /*0x78ce7d*/
    p_x = &_EBX->treeSizeBounds->min.x; /*0x78ce82*/
    *p_x = boundsMin.min.data[0]; /*0x78ce88*/
    p_x[1] = boundsMin.min.data[1]; /*0x78ce8d*/
    p_x[2] = boundsMin.min.data[2]; /*0x78ce93*/
    _EAX = _EBX->treeSizeBounds; /*0x78ce96*/
    _EAX->max.x = boundsMin.max.data[0]; /*0x78ce9c*/
    *(_QWORD *)&_EAX->max.y = *(_QWORD *)&boundsMin.max.data[1]; /*0x78cea5*/
    _ECX = _EBX->treeSizeBounds; /*0x78ceae*/
    __asm /*0x78ceb1*/
    {
      fld     dword ptr [ecx]
      fstp    dword ptr [ebp+3Ch+compositeStrips]
      fld     dword ptr [ecx+4]
      fstp    [ebp+3Ch+seed]
      fld     dword ptr [ebp+3Ch+compositeStrips]
      fldz
      fsub    st(1), st
      fld     [ebp+3Ch+seed]
      fsub    st, st(1)
      fld     st(1)
      fsub    st, st(2)
      fmul    st, st
      fld     st(1)
      fmulp   st(2), st
      fld     st(3)
      fmulp   st(4), st
      fxch    st(1)
      faddp   st(3), st
      fadd    st(2), st
      fxch    st(2)
      fstp    dword ptr [ebp+3Ch+compositeStrips]
      fld     dword ptr [ecx]
    }
    __asm { fstp    [ebp+3Ch+seed] }
    __asm { fld     dword ptr [ecx+10h] }
    __asm { fstp    [ebp+3Ch+transform4x4] }
    compositeStripsa = (compositeStripsc >> 1) + 0x1FC00000; /*0x78cef6*/
    __asm /*0x78cef9*/
    {
      fld     [ebp+3Ch+seed]
      fsub    st, st(1)
      fld     [ebp+3Ch+transform4x4]
      fsub    st, st(2)
      fmul    st, st
      fld     st(1)
      fmulp   st(2), st
      faddp   st(1), st
      fadd    st, st(2)
      fstp    [ebp+3Ch+seed]
    }
    __asm { fld     dword ptr [ebp+3Ch+compositeStrips] }
    seedd = (seedc >> 1) + 0x1FC00000; /*0x78cf1e*/
    __asm /*0x78cf21*/
    {
      fld     [ebp+3Ch+seed]
      fcompp
      fnstsw  ax
    }
    if ( __SETP__(BYTE1(_EAX) & 5, 0) ) /*0x78cf28*/
    {
      __asm /*0x78cf2d*/
      {
        fld     dword ptr [ecx]
        fstp    [ebp+3Ch+seed]
        fld     dword ptr [ecx+10h]
        fstp    [ebp+3Ch+transform4x4]
        fld     [ebp+3Ch+seed]
        fsub    st, st(1)
        fld     [ebp+3Ch+transform4x4]
        fsub    st, st(2)
        fld     st(1)
        fmulp   st(2), st
        fmul    st, st
        faddp   st(1), st
        fadd    st, st(2)
        fstp    [ebp+3Ch+seed]
      }
      compositeStripsa = (seedf >> 1) + 0x1FC00000; /*0x78cf59*/
    }
    __asm /*0x78cf5c*/
    {
      fld     dword ptr [ecx+0Ch]
      fstp    [ebp+3Ch+seed]
      fld     dword ptr [ecx+4]
      fstp    [ebp+3Ch+transform4x4]
      fld     [ebp+3Ch+seed]
      fsub    st, st(1)
      fld     [ebp+3Ch+transform4x4]
      fsub    st, st(2)
      fmul    st, st
      fld     st(1)
      fmulp   st(2), st
      faddp   st(1), st
      fadd    st, st(2)
      fstp    [ebp+3Ch+seed]
    }
    __asm { fld     dword ptr [ebp+3Ch+compositeStrips] }
    seedi = (seedh >> 1) + 0x1FC00000; /*0x78cf8d*/
    __asm /*0x78cf90*/
    {
      fld     [ebp+3Ch+seed]
      fcompp
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x78cf97*/
    {
      __asm /*0x78cf9c*/
      {
        fld     dword ptr [ecx+0Ch]
        fstp    [ebp+3Ch+transform4x4]
        fld     dword ptr [ecx+4]
        fstp    [ebp+3Ch+seed]
        fld     [ebp+3Ch+seed]
        fsub    st, st(1)
        fld     [ebp+3Ch+transform4x4]
        fsub    st, st(2)
        fmul    st, st
        fld     st(1)
        fmulp   st(2), st
        faddp   st(1), st
        fadd    st, st(2)
        fstp    [ebp+3Ch+seed]
      }
      compositeStripsa = (seedk >> 1) + 0x1FC00000; /*0x78cfc9*/
    }
    __asm /*0x78cfcc*/
    {
      fld     dword ptr [ecx+0Ch]
      fstp    [ebp+3Ch+transform4x4]
      fld     dword ptr [ecx+10h]
      fstp    [ebp+3Ch+seed]
      fld     [ebp+3Ch+seed]
      fsub    st, st(1)
      fld     [ebp+3Ch+transform4x4]
      fsub    st, st(2)
      fmul    st, st
      fld     st(1)
      fmulp   st(2), st
      faddp   st(1), st
      fadd    st, st(2)
      fstp    [ebp+3Ch+seed]
    }
    __asm { fld     dword ptr [ebp+3Ch+compositeStrips] }
    seedn = (seedm >> 1) + 0x1FC00000; /*0x78cffd*/
    __asm /*0x78d000*/
    {
      fld     [ebp+3Ch+seed]
      fcompp
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x78d007*/
    {
      __asm /*0x78d00c*/
      {
        fld     dword ptr [ecx+0Ch]
        fstp    [ebp+3Ch+transform4x4]
        fld     dword ptr [ecx+10h]
        fstp    [ebp+3Ch+seed]
        fld     [ebp+3Ch+seed]
        fsub    st, st(1)
        fld     [ebp+3Ch+transform4x4]
        fsubrp  st(2), st
        fld     st(1)
        fmulp   st(2), st
        fmul    st, st
        faddp   st(1), st
        faddp   st(1), st
        fstp    [ebp+3Ch+seed]
      }
      compositeStripsa = (seedp >> 1) + 0x1FC00000; /*0x78d039*/
    }
    else
    {
      __asm /*0x78d03e*/
      {
        fstp    st
        fstp    st
      }
    }
    __asm /*0x78d042*/
    {
      fld     dword ptr [ebp+3Ch+compositeStrips]
      fadd    st, st
      fstp    dword ptr [ecx+18h]
    }
    _ECX[1].min.x = _ET1; /*0x78d047*/
    if ( _EBX->projectedShadow ) /*0x78d04a*/
      CSpeedTreeRT__ComputeSelfShadowTexCoords(_EBX); /*0x78d052*/
    CSpeedTreeRT__SetupHorizontalBillboard(_EBX); /*0x78d059*/
    _EBX->treeComputedFlag = 1; /*0x78d05e*/
    LOBYTE(v24) = 2; /*0x78d065*/
    Shared_NoOpVirtual_60D0A0(&boundsMin.max); /*0x78d069*/
    LOBYTE(v24) = 0; /*0x78d071*/
    Shared_NoOpVirtual_60D0A0(&boundsMin); /*0x78d075*/
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78d08b*/
      &OB_g_strError_010201A0,
      "Compute() called more than once for single tree model (ignored)",
      0x3Fu);
  }
  return _EBX->treeComputedFlag; /*0x78d122*/
}
