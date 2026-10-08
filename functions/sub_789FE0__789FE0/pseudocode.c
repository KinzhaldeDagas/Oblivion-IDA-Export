// Oblivion branch export is authoritative: publishes the legacy single wind stream plus distinct diffuse and projected-shadow UV streams into a 0x3C indexed-geometry output block.
// local variable allocation has failed, the output may be wrong!
void __thiscall CSpeedTreeRT__GetBranchGeometry(
        OB_CSpeedTreeRT_010201A0 *this,
        OB_SpeedTreeGeometryOutput_010201A0 *geometry,
        __int16 lodLevel)
{
  OB_CIndexedGeometry_010201A0 *branchGeometry; // eax
  float *begin; // edx
  unsigned int v6; // ecx
  OB_SpeedTreeGeometryOutput_010201A0 *v7; // edi
  OB_CIndexedGeometry_010201A0 *v8; // ebx
  unsigned int *v9; // eax
  unsigned int *v10; // ebx
  OB_CIndexedGeometry_010201A0 *v11; // ebx
  float *v12; // eax
  float *v13; // ebx
  OB_CIndexedGeometry_010201A0 *v14; // ebx
  float *v15; // eax
  float *v16; // ebx
  OB_CIndexedGeometry_010201A0 *v17; // ebx
  float *v18; // eax
  float *v19; // ebx
  OB_CIndexedGeometry_010201A0 *v20; // ebx
  float *v21; // eax
  float *v22; // ebx
  OB_CIndexedGeometry_010201A0 *v23; // ebx
  float *v24; // eax
  float *v25; // ebx
  OB_CIndexedGeometry_010201A0 *v26; // ebx
  float *v27; // eax
  float *v28; // ebx
  OB_CIndexedGeometry_010201A0 *v29; // ebx
  float *v30; // eax
  float *v31; // ebx
  OB_CIndexedGeometry_010201A0 *v32; // ebx
  unsigned __int8 *v33; // eax
  unsigned __int8 *v34; // ebx
  __int16 DiscreteBranchLodLevel; // ax
  bool v36; // zf
  __int16 v37; // bx
  OB_CTreeEngine_010201A0 *treeEngine; // eax
  __int16 leafLodLevelCount; // cx
  unsigned __int16 v40; // bx
  OB_STreeInstanceData *instanceData; // ecx
  double currentLod; // st7
  int targetAlphaByte; // edx
  double v44; // st7
  float highAlpha; // [esp+34h] [ebp-Ch] BYREF
  float targetAlpha; // [esp+38h] [ebp-8h]
  float lowAlpha; // [esp+3Ch] [ebp-4h] BYREF

  branchGeometry = this->branchGeometry; /*0x789fe6*/
  if ( branchGeometry ) /*0x789feb*/
  {
    begin = branchGeometry->vertexCoords.begin; /*0x789ff1*/
    if ( begin ) /*0x789ff6*/
      v6 = branchGeometry->vertexCoords.end - begin; /*0x78a001*/
    else
      v6 = 0; /*0x789ff8*/
    v7 = geometry; /*0x78a00d*/
    geometry->branches.vertexCount = v6 / 3; /*0x78a013*/
    v8 = this->branchGeometry; /*0x78a017*/
    v9 = v8->packedColors.begin; /*0x78a01a*/
    if ( v9 && v8->packedColors.end - v9 ) /*0x78a026*/
      v10 = v8->packedColors.begin; /*0x78a042*/
    else
      v10 = 0; /*0x78a02b*/
    v7->branches.packedColors = v10; /*0x78a045*/
    v11 = this->branchGeometry; /*0x78a048*/
    v12 = v11->vertexCoords.begin; /*0x78a04b*/
    if ( v12 && v11->vertexCoords.end - v12 ) /*0x78a057*/
      v13 = v11->vertexCoords.begin; /*0x78a073*/
    else
      v13 = 0; /*0x78a05c*/
    v7->branches.coords = v13; /*0x78a076*/
    v14 = this->branchGeometry; /*0x78a079*/
    v15 = v14->vertexNormals.begin; /*0x78a07c*/
    if ( v15 && v14->vertexNormals.end - v15 ) /*0x78a08e*/
      v16 = v14->vertexNormals.begin; /*0x78a0ad*/
    else
      v16 = 0; /*0x78a093*/
    v7->branches.normals = v16; /*0x78a0b3*/
    v17 = this->branchGeometry; /*0x78a0b6*/
    v18 = v17->vertexBinormals.begin; /*0x78a0b9*/
    if ( v18 && v17->vertexBinormals.end - v18 ) /*0x78a0cb*/
      v19 = v17->vertexBinormals.begin; /*0x78a0ea*/
    else
      v19 = 0; /*0x78a0d0*/
    v7->branches.binormals = v19; /*0x78a0f0*/
    v20 = this->branchGeometry; /*0x78a0f3*/
    v21 = v20->vertexTangents.begin; /*0x78a0f6*/
    if ( v21 && v20->vertexTangents.end - v21 ) /*0x78a108*/
      v22 = v20->vertexTangents.begin; /*0x78a127*/
    else
      v22 = 0; /*0x78a10d*/
    v7->branches.tangents = v22; /*0x78a12d*/
    v23 = this->branchGeometry; /*0x78a130*/
    v24 = v23->diffuseTexcoords.begin; /*0x78a133*/
    if ( v24 && v23->diffuseTexcoords.end - v24 ) /*0x78a145*/
      v25 = v23->diffuseTexcoords.begin; /*0x78a164*/
    else
      v25 = 0; /*0x78a14a*/
    v7->branches.diffuseTexcoords = v25; /*0x78a16a*/
    v26 = this->branchGeometry; /*0x78a16d*/
    v27 = v26->shadowTexcoords.begin; /*0x78a170*/
    if ( v27 && v26->shadowTexcoords.end - v27 ) /*0x78a182*/
      v28 = v26->shadowTexcoords.begin; /*0x78a1a1*/
    else
      v28 = 0; /*0x78a187*/
    v7->branches.shadowTexcoords = v28; /*0x78a1a7*/
    v29 = this->branchGeometry; /*0x78a1aa*/
    v30 = v29->primaryWindWeights.begin; /*0x78a1ad*/
    if ( v30 && v29->primaryWindWeights.end - v30 ) /*0x78a1bf*/
      v31 = v29->primaryWindWeights.begin; /*0x78a1de*/
    else
      v31 = 0; /*0x78a1c4*/
    v7->branches.windWeights = v31; /*0x78a1e4*/
    v32 = this->branchGeometry; /*0x78a1e7*/
    v33 = v32->primaryWindMatrixIndices.begin; /*0x78a1ea*/
    if ( v33 && v32->primaryWindMatrixIndices.end != v33 ) /*0x78a1fa*/
      v34 = v32->primaryWindMatrixIndices.begin; /*0x78a215*/
    else
      v34 = 0; /*0x78a1fe*/
    DiscreteBranchLodLevel = lodLevel; /*0x78a21b*/
    v36 = lodLevel == (__int16)0xFFFF; /*0x78a220*/
    v7->branches.windMatrixIndices = v34; /*0x78a224*/
    if ( v36 ) /*0x78a227*/
      DiscreteBranchLodLevel = CSpeedTreeRT__GetDiscreteBranchLodLevel(this, kTerrainLODQuadRayDirectionZ); /*0x78a235*/
    v37 = DiscreteBranchLodLevel; /*0x78a23a*/
    v7->branches.discreteLodLevel = DiscreteBranchLodLevel; /*0x78a240*/
    v7->branches.numStrips = OB_CIndexedGeometry_GetNumStrips_010201A0(this->branchGeometry, DiscreteBranchLodLevel); /*0x78a24b*/
    v7->branches.stripLengths = OB_CIndexedGeometry_GetStripLengths_010201A0(this->branchGeometry, v37); /*0x78a258*/
    v7->branches.strips = OB_CIndexedGeometry_GetStripsPointer_010201A0(this->branchGeometry, v37); /*0x78a264*/
    if ( CSpeedTreeRT__s_dropToBillboard ) /*0x78a267*/
    {
      treeEngine = this->treeEngine; /*0x78a274*/
      leafLodLevelCount = this->treeEngine->leafInfo.leafLodLevelCount; /*0x78a27c*/
      highAlpha = kTerrainLODQuadRayDirectionZ; /*0x78a283*/
      v40 = leafLodLevelCount + 1; /*0x78a28b*/
      instanceData = this->instanceData; /*0x78a28e*/
      geometry = (OB_SpeedTreeGeometryOutput_010201A0 *)0xFFFFFFFF; /*0x78a293*/
      if ( instanceData ) /*0x78a29b*/
        currentLod = instanceData->lodLevel; /*0x78a29d*/
      else
        currentLod = treeEngine->currentLod; /*0x78a2a2*/
      targetAlphaByte = this->targetAlphaByte; /*0x78a2a5*/
      *(float *)&lodLevel = currentLod; /*0x78a2a9*/
      targetAlpha = (float)targetAlphaByte; /*0x78a2c3*/
      CSpeedTreeRT__GetTransitionValues( /*0x78a2f5*/
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
      if ( (__int16)geometry == v40 - 2 ) /*0x78a30a*/
      {
        v7->branches.alphaTestValue = highAlpha; /*0x78a310*/
      }
      else if ( (__int16)geometry == v40 - 1 ) /*0x78a321*/
      {
        v44 = flt_A40098; /*0x78a323*/
        v7->branches.discreteLodLevel = 0xFFFFFFFF; /*0x78a329*/
        v7->branches.alphaTestValue = v44; /*0x78a32f*/
      }
      else
      {
        v7->branches.alphaTestValue = targetAlpha; /*0x78a33f*/
      }
    }
    else
    {
      v7->branches.alphaTestValue = (float)this->targetAlphaByte; /*0x78a357*/
    }
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78a37c*/
      &OB_g_strError_010201A0,
      "no branch geometry exists, possible prior call to DeleteBranchGeometry",
      0x46u);
  }
}
