// CSpeedTreeRT frond geometry export/update reached from GetGeometry bit 0x02 only. Current Oblivion database has no direct caller except the dispatcher and no stock GetGeometry caller passes bit 0x02.
//
// [2026-10-02 implementation correction] Verified exports: SGeometry+0x50 packed uint32 colors (N*4 bytes), +0x54 float3 normals (N*12), +0x68 float2 shadow UVs, +0x6C sole primary wind weights, +0x70 primary matrix bytes. Writes at 0x78A3F5, 0x78A463, 0x78A557, 0x78A594, 0x78A5D4 establish roles. SpeedTreeOBSE bridge formerly read +0x50 as normal fallback and +0x68 as secondary wind; corrected to typed normal source and zero absent secondary channel. RT4.1 SpeedTreeRT.cpp GetFrondGeometry exports separate second wind arrays and per-layer UV arrays; that later representation is not Oblivion ABI.
//
// [2026-10-02 packet bounds pass] Verified vertex count derives from XYZ floats / 3; normals/binormals/tangents are 3N floats, UV layers 2N, packed colors N DWORDs, wind N floats and N bytes. Native trusted export does not certify foreign/malformed vector extents. SpeedTreeOBSE ready-lane reconstruction now rejects partial tuples, undersized nonempty attributes, mismatched strip tables, and invalid native vector ranges. RT4.1 uses paired strip-info entries (GetNumStrips = size/2), unlike Oblivion separate nested vectors; no later container layout imported.
//
// [2026-10-03 frond completion] Billboard fade is independent of frond strip count: transition count = CTreeEngine+0xC0 leaf count +1; call 0x787220 with current instance/base LOD, radius RT+1C, factor+28, exponent+20 and target alpha+44. High index=count-2 selects highAlpha; count-1 selects alpha255 and selector-1; other indices use target. Plugin runtime sync now applies this fade to its tracked live frond child. LOD mesh replacement remains unfinished.
// [2026-10-03 export ownership] Plugin now keeps exports per (RT+0x30 shared-reference allocation identity, requested selector), with no ring eviction and final-count-one retirement. Valid empty topology is stored distinctly from failed capture. All representable nonnegative short selectors are enumerated; explicit selector requests can still receive a final -1 selector from billboard-fade output, so the separately verified ready-lane export supplies persistent geometry/empty certificates. Do not infer empty from missing or unreadable arrays.
//
// [2026-10-03 supplemental fade separation] Stock packet+74 remains billboard-transition alpha. Later75003 is instead a per-vertex last-use-LOD fade distance. Plugin derives hints from completed native strip membership: last referencing LOD wins, hint=1-(lod+1)/lodCount except finalLOD -> -1. Hints are retained per shared family, copied into private STSP.z, and per-node normalized LOD/distance/enable are supplied through redirected c10.yzw. Billboard alpha-reference/hide behavior remains separate.
//
// [2026-10-03 transition scope] Restored frond billboard alpha continues to use the verified native leaf-LOD-based resolver contract. Later75003 guide fading is separate. Later75005 billboard-view transition must not be substituted for native RT+28 leafTransitionFactor; the old branch-only experiment has been removed.
// local variable allocation has failed, the output may be wrong!
void __thiscall CSpeedTreeRT__GetFrondGeometry(
        OB_CSpeedTreeRT_010201A0 *this,
        OB_SpeedTreeGeometryOutput_010201A0 *geometry,
        __int16 lodLevel)
{
  OB_CIndexedGeometry_010201A0 *frondGeometry; // eax
  float *begin; // edx
  OB_SpeedTreeGeometryOutput_010201A0 *v6; // ebx
  unsigned int v7; // ecx
  OB_CIndexedGeometry_010201A0 *v8; // edi
  unsigned int *v9; // eax
  unsigned int *v10; // edi
  OB_CIndexedGeometry_010201A0 *v11; // edi
  float *v12; // eax
  float *v13; // edi
  OB_CIndexedGeometry_010201A0 *v14; // edi
  float *v15; // eax
  float *v16; // edi
  OB_CIndexedGeometry_010201A0 *v17; // edi
  float *v18; // eax
  float *v19; // edi
  OB_CIndexedGeometry_010201A0 *v20; // edi
  float *v21; // eax
  float *v22; // edi
  OB_CIndexedGeometry_010201A0 *v23; // edi
  float *v24; // eax
  float *v25; // edi
  OB_CIndexedGeometry_010201A0 *v26; // edi
  float *v27; // eax
  float *v28; // edi
  OB_CIndexedGeometry_010201A0 *v29; // edi
  float *v30; // eax
  float *v31; // edi
  OB_CIndexedGeometry_010201A0 *v32; // edi
  unsigned __int8 *v33; // eax
  unsigned __int8 *v34; // edi
  __int16 DiscreteFrondLodLevel; // ax
  bool v36; // zf
  __int16 v37; // di
  OB_CTreeEngine_010201A0 *treeEngine; // eax
  __int16 leafLodLevelCount; // cx
  unsigned __int16 v40; // di
  OB_STreeInstanceData *instanceData; // ecx
  double currentLod; // st7
  int targetAlphaByte; // edx
  float highAlpha; // [esp+34h] [ebp-Ch] BYREF
  float targetAlpha; // [esp+38h] [ebp-8h]
  float lowAlpha; // [esp+3Ch] [ebp-4h] BYREF

  frondGeometry = this->frondGeometry; /*0x78a396*/
  if ( frondGeometry ) /*0x78a39b*/
  {
    begin = frondGeometry->vertexCoords.begin; /*0x78a3a1*/
    v6 = geometry; /*0x78a3a7*/
    if ( begin ) /*0x78a3ab*/
      v7 = frondGeometry->vertexCoords.end - begin; /*0x78a3b6*/
    else
      v7 = 0; /*0x78a3ad*/
    geometry->fronds.vertexCount = v7 / 3; /*0x78a3c2*/
    v8 = this->frondGeometry; /*0x78a3c7*/
    v9 = v8->packedColors.begin; /*0x78a3ca*/
    if ( v9 && v8->packedColors.end - v9 ) /*0x78a3d6*/
      v10 = v8->packedColors.begin; /*0x78a3f2*/
    else
      v10 = 0; /*0x78a3db*/
    v6->fronds.packedColors = v10; /*0x78a3f5*/
    v11 = this->frondGeometry; /*0x78a3f8*/
    v12 = v11->vertexCoords.begin; /*0x78a3fb*/
    if ( v12 && v11->vertexCoords.end - v12 ) /*0x78a407*/
      v13 = v11->vertexCoords.begin; /*0x78a423*/
    else
      v13 = 0; /*0x78a40c*/
    v6->fronds.coords = v13; /*0x78a426*/
    v14 = this->frondGeometry; /*0x78a429*/
    v15 = v14->vertexNormals.begin; /*0x78a42c*/
    if ( v15 && v14->vertexNormals.end - v15 ) /*0x78a43e*/
      v16 = v14->vertexNormals.begin; /*0x78a45d*/
    else
      v16 = 0; /*0x78a443*/
    v6->fronds.normals = v16;                   // Frond GetGeometry export writes SGeometry output +0x54 pointer slot; not the CSpeedTreeRT+0x54 360 image-count gate. /*0x78a463*/
    v17 = this->frondGeometry; /*0x78a466*/
    v18 = v17->vertexBinormals.begin; /*0x78a469*/
    if ( v18 && v17->vertexBinormals.end - v18 ) /*0x78a47b*/
      v19 = v17->vertexBinormals.begin; /*0x78a49a*/
    else
      v19 = 0; /*0x78a480*/
    v6->fronds.binormals = v19; /*0x78a4a0*/
    v20 = this->frondGeometry; /*0x78a4a3*/
    v21 = v20->vertexTangents.begin; /*0x78a4a6*/
    if ( v21 && v20->vertexTangents.end - v21 ) /*0x78a4b8*/
      v22 = v20->vertexTangents.begin; /*0x78a4d7*/
    else
      v22 = 0; /*0x78a4bd*/
    v6->fronds.tangents = v22; /*0x78a4dd*/
    v23 = this->frondGeometry; /*0x78a4e0*/
    v24 = v23->diffuseTexcoords.begin; /*0x78a4e3*/
    if ( v24 && v23->diffuseTexcoords.end - v24 ) /*0x78a4f5*/
      v25 = v23->diffuseTexcoords.begin; /*0x78a514*/
    else
      v25 = 0; /*0x78a4fa*/
    v6->fronds.diffuseTexcoords = v25; /*0x78a51a*/
    v26 = this->frondGeometry; /*0x78a51d*/
    v27 = v26->shadowTexcoords.begin; /*0x78a520*/
    if ( v27 && v26->shadowTexcoords.end - v27 ) /*0x78a532*/
      v28 = v26->shadowTexcoords.begin; /*0x78a551*/
    else
      v28 = 0; /*0x78a537*/
    v6->fronds.shadowTexcoords = v28; /*0x78a557*/
    v29 = this->frondGeometry; /*0x78a55a*/
    v30 = v29->primaryWindWeights.begin; /*0x78a55d*/
    if ( v30 && v29->primaryWindWeights.end - v30 ) /*0x78a56f*/
      v31 = v29->primaryWindWeights.begin; /*0x78a58e*/
    else
      v31 = 0; /*0x78a574*/
    v6->fronds.windWeights = v31; /*0x78a594*/
    v32 = this->frondGeometry; /*0x78a597*/
    v33 = v32->primaryWindMatrixIndices.begin; /*0x78a59a*/
    if ( v33 && v32->primaryWindMatrixIndices.end != v33 ) /*0x78a5aa*/
      v34 = v32->primaryWindMatrixIndices.begin; /*0x78a5c5*/
    else
      v34 = 0; /*0x78a5ae*/
    DiscreteFrondLodLevel = lodLevel; /*0x78a5cb*/
    v36 = lodLevel == (__int16)0xFFFF; /*0x78a5d0*/
    v6->fronds.windMatrixIndices = v34; /*0x78a5d4*/
    if ( v36 ) /*0x78a5d7*/
      DiscreteFrondLodLevel = CSpeedTreeRT__GetDiscreteFrondLodLevel(this, kTerrainLODQuadRayDirectionZ); /*0x78a5e5*/
    v37 = DiscreteFrondLodLevel; /*0x78a5ea*/
    v6->fronds.discreteLodLevel = DiscreteFrondLodLevel; /*0x78a5f0*/
    v6->fronds.numStrips = OB_CIndexedGeometry_GetNumStrips_010201A0(this->frondGeometry, DiscreteFrondLodLevel); /*0x78a5fc*/
    v6->fronds.stripLengths = OB_CIndexedGeometry_GetStripLengths_010201A0(this->frondGeometry, v37); /*0x78a609*/
    v6->fronds.strips = OB_CIndexedGeometry_GetStripsPointer_010201A0(this->frondGeometry, v37); /*0x78a615*/
    if ( CSpeedTreeRT__s_dropToBillboard ) /*0x78a618*/
    {
      treeEngine = this->treeEngine; /*0x78a625*/
      leafLodLevelCount = this->treeEngine->leafInfo.leafLodLevelCount; /*0x78a62d*/
      highAlpha = kTerrainLODQuadRayDirectionZ; /*0x78a634*/
      v40 = leafLodLevelCount + 1; /*0x78a63c*/
      instanceData = this->instanceData; /*0x78a63f*/
      geometry = (OB_SpeedTreeGeometryOutput_010201A0 *)0xFFFFFFFF; /*0x78a644*/
      if ( instanceData ) /*0x78a64c*/
        currentLod = instanceData->lodLevel; /*0x78a64e*/
      else
        currentLod = treeEngine->currentLod; /*0x78a653*/
      targetAlphaByte = this->targetAlphaByte; /*0x78a656*/
      *(float *)&lodLevel = currentLod; /*0x78a65a*/
      targetAlpha = (float)targetAlphaByte; /*0x78a674*/
      CSpeedTreeRT__GetTransitionValues( /*0x78a6a6*/
        *(float *)&lodLevel,
        v40,
        this->leafLodTransitionRadius,
        this->leafTransitionFactor16014,
        this->leafLodCurveExponent,
        targetAlpha,
        &highAlpha,
        &lowAlpha,
        (__int16 *)&geometry,
        (unsigned __int16 *)&lodLevel);
      if ( (__int16)geometry == v40 - 2 ) /*0x78a6bb*/
      {
        v6->fronds.alphaTestValue = highAlpha; /*0x78a6c2*/
      }
      else if ( (__int16)geometry == v40 - 1 ) /*0x78a6d2*/
      {
        v6->fronds.alphaTestValue = flt_A40098; /*0x78a6db*/
        v6->fronds.discreteLodLevel = 0xFFFFFFFF; /*0x78a6de*/
      }
      else
      {
        v6->fronds.alphaTestValue = targetAlpha; /*0x78a6f2*/
      }
    }
    else
    {
      v6->fronds.alphaTestValue = (float)this->targetAlphaByte; /*0x78a70a*/
    }
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78a72e*/
      &OB_g_strError_010201A0,
      "no frond geometry exists, possible prior call to DeleteFrondGeometry",
      0x44u);
  }
}
