//
//
// [2026-10-03 source reconciliation] Retired prior plugin experiment substituting75002/75005 into this native mesh-alpha resolver. RT4.1 GetBranchGeometry exports75002 as per-vertex guide fade distance;75005 is m_fBillboardTransition used by ComputeLodCurveBB for angular billboard-view interpolation and exported billboard metadata. It is distinct from m_fLeafTransitionFactor used by mesh-to-billboard GetLodValues. Current plugin no longer rewrites output+38 from these fields; native branch/frond transition coherence is preserved.
void __thiscall CSpeedTreeRT__GetBSGeometryLODData(
        OB_CSpeedTreeRT_010201A0 *this,
        OB_SpeedTreeGeometryOutput_010201A0 *geometry,
        float lodLevel)
{
  bool v3; // bl
  unsigned __int16 v5; // bp
  double v6; // st7
  bool v8; // zf
  signed __int16 v9; // bx
  double v10; // st6
  int v11; // eax
  double v12; // rt0
  double v13; // st6
  double v14; // st7
  double v15; // rt1
  double v16; // rt2
  double v17; // st6
  float v18; // edx
  int v19; // ecx
  double v20; // st7
  __int16 v21; // fps
  int leafLodTransitionMethod; // eax
  unsigned __int8 v23; // al
  unsigned __int16 v24; // dx
  unsigned __int8 v25; // cl
  unsigned __int16 DiscreteLeafLodLevel; // ax
  float targetAlpha; // [esp+14h] [ebp-48h]
  float highAlpha; // [esp+38h] [ebp-24h] BYREF
  unsigned __int16 lowLod[2]; // [esp+3Ch] [ebp-20h] BYREF
  float lowAlpha; // [esp+40h] [ebp-1Ch] BYREF
  __int16 highLod[2]; // [esp+44h] [ebp-18h] BYREF
  int leafLodLevelCount_low; // [esp+48h] [ebp-14h]
  int targetAlphaByte; // [esp+4Ch] [ebp-10h]
  float v34; // [esp+50h] [ebp-Ch]
  float v35; // [esp+54h] [ebp-8h]
  float v36; // [esp+58h] [ebp-4h]
  float geometryb; // [esp+60h] [ebp+4h]
  float geometryc; // [esp+60h] [ebp+4h]
  float geometrya; // [esp+60h] [ebp+4h]
  OB_SpeedTreeGeometryOutput_010201A0 *geometryd; // [esp+60h] [ebp+4h]
  float lodLevela; // [esp+64h] [ebp+8h]

  v3 = CSpeedTreeRT__s_dropToBillboard; /*0x787dca*/
  highAlpha = kTerrainLODQuadRayDirectionZ; /*0x787dd0*/
  lowAlpha = highAlpha; /*0x787dd5*/
  leafLodLevelCount_low = LOWORD(this->treeEngine->leafInfo.leafLodLevelCount); /*0x787ded*/
  *(_DWORD *)highLod = 0xFFFFFFFF; /*0x787e00*/
  *(_DWORD *)lowLod = 0xFFFFFFFF; /*0x787e04*/
  v5 = leafLodLevelCount_low + v3; /*0x787e11*/
  targetAlphaByte = this->targetAlphaByte; /*0x787e1a*/
  targetAlpha = (float)targetAlphaByte; /*0x787e25*/
  CSpeedTreeRT__GetTransitionValues( /*0x787e46*/
    lodLevel,
    v5,
    this->leafLodTransitionRadius,
    this->leafTransitionFactor16014,
    this->leafLodCurveExponent,
    targetAlpha,
    &highAlpha,
    &lowAlpha,
    highLod,
    lowLod);                                    // 2026-05-26 SpeedTreeOBSE: stock 0x787DC0 calls 0x787220 with old fields: +0x1C transition radius, +0x28 transition factor, +0x20 curve exponent, +0x44 target alpha. Plugin may use retained 75002/75005 as opt-in candidate resolver inputs for SGeometry+0x38 only; stock fields and billboard/leaf/frond outputs remain unmodified.
  v6 = highAlpha; /*0x787e4b*/
  v8 = !v3; /*0x787e56*/
  v9 = highLod[0]; /*0x787e58*/
  if ( v8 ) /*0x787e5c*/
  {
    geometry->primaryBillboard.active = 0; /*0x787ebc*/
  }
  else
  {
    v10 = kTerrainLODQuadRayDirectionZ; /*0x787e5e*/
    geometry->primaryBillboard.alphaTestValue = kTerrainLODQuadRayDirectionZ; /*0x787e6a*/
    v11 = v5 - 1; /*0x787e70*/
    if ( v9 == v11 ) /*0x787e75*/
    {
      v12 = v10; /*0x787e77*/
      v13 = v6; /*0x787e77*/
      v14 = v12; /*0x787e77*/
      geometry->primaryBillboard.alphaTestValue = v13; /*0x787e79*/
    }
    else
    {
      if ( (__int16)lowLod[0] == v11 ) /*0x787e88*/
        geometry->primaryBillboard.alphaTestValue = lowAlpha; /*0x787e8e*/
      v15 = v10; /*0x787e94*/
      v13 = v6; /*0x787e94*/
      v14 = v15; /*0x787e94*/
    }
    v16 = v13; /*0x787e96*/
    v17 = v14; /*0x787e96*/
    v6 = v16; /*0x787e96*/
    geometry->primaryBillboard.active = v17 != geometry->primaryBillboard.alphaTestValue; /*0x787eb4*/
  }
  if ( lodLevel >= 0.0 ) /*0x787ece*/
  {
    if ( CSpeedTreeRT__s_dropToBillboard ) /*0x787ed4*/
    {
      if ( v9 != v5 - 2 ) /*0x787ee8*/
      {
        if ( v9 == v5 - 1 ) /*0x787ef1*/
          v6 = flt_A40098; /*0x787ef3*/
        else
          v6 = (double)this->targetAlphaByte; /*0x787f03*/
      }
    }
    else
    {
      v6 = (double)this->targetAlphaByte; /*0x787f13*/
    }
    geometry->branches.alphaTestValue = v6; /*0x787f17*/
    v18 = CSpeedTreeRT__s_cameraDirection[0]; /*0x787f1f*/
    v19 = dword_B2B6E0; /*0x787f25*/
    v35 = *(float *)&dword_B2B6DC; /*0x787f2b*/
    v20 = v35; /*0x787f2f*/
    v34 = v18; /*0x787f33*/
    v36 = *(float *)&v19; /*0x787f3b*/
    sub_98598A(v18, v35, v21); /*0x787f3f*/
    geometryb = v20; /*0x787f44*/
    lodLevela = geometryb * dbl_A8BA48; /*0x787f52*/
    geometryc = asin(v36); /*0x787f5f*/
    leafLodTransitionMethod = this->leafLodTransitionMethod; /*0x787f67*/
    geometrya = geometryc * dbl_A8BA50; /*0x787f73*/
    if ( leafLodTransitionMethod == 1 ) /*0x787f77*/
    {
      OB_CLeafGeometry_SmallUpdate_010201A0( /*0x787f9f*/
        this->leafGeometry,
        &geometry->primaryLeaves,
        0,
        lodLevela,
        geometrya,
        this->leafSizeIncreaseFactor);
      v23 = v9 != (signed __int16)0xFFFF && v9 < (int)(unsigned __int16)leafLodLevelCount_low; /*0x787fbd*/
      geometry->primaryLeaves.active = v23; /*0x787fc1*/
      if ( v23 ) /*0x787fc4*/
      {
        OB_CLeafGeometry_SmallUpdate_010201A0( /*0x787fe4*/
          this->leafGeometry,
          &geometry->primaryLeaves,
          v9,
          lodLevela,
          geometrya,
          this->leafSizeIncreaseFactor);
        geometry->primaryLeaves.lodFadeOrRockScalar = highAlpha; /*0x787fed*/
      }
      v24 = lowLod[0]; /*0x787ff0*/
      v25 = lowLod[0] != 0xFFFF && (__int16)lowLod[0] < (int)(unsigned __int16)leafLodLevelCount_low; /*0x78800d*/
      geometry->secondaryLeaves.active = v25; /*0x788017*/
      if ( v25 ) /*0x788019*/
      {
        OB_CLeafGeometry_SmallUpdate_010201A0( /*0x78803d*/
          this->leafGeometry,
          &geometry->secondaryLeaves,
          v24,
          lodLevela,
          geometrya,
          this->leafSizeIncreaseFactor);
        geometry->secondaryLeaves.lodFadeOrRockScalar = lowAlpha; /*0x788046*/
      }
    }
    else if ( leafLodTransitionMethod == 3 ) /*0x788059*/
    {
      OB_CLeafGeometry_SmallUpdate_010201A0( /*0x78807d*/
        this->leafGeometry,
        &geometry->primaryLeaves,
        0,
        lodLevela,
        geometrya,
        this->leafSizeIncreaseFactor);
      geometry->primaryLeaves.active = 1; /*0x788082*/
      geometryd = (OB_SpeedTreeGeometryOutput_010201A0 *)this->targetAlphaByte; /*0x788089*/
      geometry->secondaryLeaves.active = 0; /*0x78808d*/
      geometry->primaryLeaves.lodFadeOrRockScalar = (float)(int)geometryd; /*0x788098*/
    }
    else
    {
      DiscreteLeafLodLevel = CSpeedTreeRT__GetDiscreteLeafLodLevel(this, kTerrainLODQuadRayDirectionZ); /*0x7880b1*/
      if ( DiscreteLeafLodLevel < LOWORD(this->treeEngine->leafInfo.leafLodLevelCount) ) /*0x7880c2*/
      {
        OB_CLeafGeometry_SmallUpdate_010201A0( /*0x7880e5*/
          this->leafGeometry,
          &geometry->primaryLeaves,
          DiscreteLeafLodLevel,
          lodLevela,
          geometrya,
          this->leafSizeIncreaseFactor);
        geometry->primaryLeaves.active = 1; /*0x7880ea*/
        geometry->primaryLeaves.lodFadeOrRockScalar = (float)this->targetAlphaByte; /*0x7880f9*/
      }
      geometry->secondaryLeaves.active = 0; /*0x7880fc*/
    }
  }
}
