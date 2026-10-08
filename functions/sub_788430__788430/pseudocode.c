// CSpeedTreeRT simple/horizontal billboard export used by GetGeometry bit 0x08 when 360 output is disabled or caller requests simple output. Stock TES4 tree builders do not call GetGeometry bit 0x08.
// [2026-10-06 directional billboard] Verified horizontal gap: distance controls active, then alpha is overwritten with global pitch threshold at 0x7885E0. Caller integrating horizontal output must combine distance/pitch fading. No Bethesda native scene consumer for this output was found.
void __thiscall CSpeedTreeRT__GetSimpleBillboardGeometry(
        OB_CSpeedTreeRT_010201A0 *this,
        OB_SpeedTreeGeometryOutput_010201A0 *geometry)
{
  OB_CTreeEngine_010201A0 *treeEngine; // eax
  __int16 leafLodLevelCount; // cx
  unsigned __int16 v5; // bp
  OB_STreeInstanceData *instanceData; // ecx
  double currentLod; // st7
  int v8; // ecx
  double v9; // st7
  int v11; // eax
  double v12; // st6
  unsigned __int8 v13; // al
  OB_CSpeedTreeRT_SEmbeddedTexCoords *embeddedTexcoords; // eax
  double v15; // st7
  float targetAlpha; // [esp+14h] [ebp-3Ch]
  float lodLevel; // [esp+38h] [ebp-18h]
  __int16 highLod[2]; // [esp+3Ch] [ebp-14h] BYREF
  float highAlpha; // [esp+40h] [ebp-10h] BYREF
  unsigned __int16 lowLod[2]; // [esp+44h] [ebp-Ch] BYREF
  float lowAlpha; // [esp+48h] [ebp-8h] BYREF
  int targetAlphaByte; // [esp+4Ch] [ebp-4h]
  float geometryOut; // [esp+54h] [ebp+4h]

  if ( !CSpeedTreeRT__s_dropToBillboard ) /*0x78843f*/
  {
    geometry->primaryBillboard.active = 0; /*0x78860c*/
    geometry->secondaryBillboard.active = 0; /*0x788612*/
    geometry->horizontalBillboard.active = 0; /*0x788618*/
    return; /*0x788618*/
  }
  treeEngine = this->treeEngine; /*0x788445*/
  leafLodLevelCount = this->treeEngine->leafInfo.leafLodLevelCount; /*0x78844d*/
  highAlpha = kTerrainLODQuadRayDirectionZ; /*0x788454*/
  lowAlpha = highAlpha; /*0x78845c*/
  v5 = leafLodLevelCount + 1; /*0x788461*/
  *(_DWORD *)highLod = 0xFFFFFFFF; /*0x788467*/
  *(_DWORD *)lowLod = 0xFFFFFFFF; /*0x78846b*/
  instanceData = this->instanceData; /*0x78846f*/
  if ( instanceData ) /*0x788475*/
    currentLod = instanceData->lodLevel; /*0x788477*/
  else
    currentLod = treeEngine->currentLod; /*0x78847c*/
  lodLevel = currentLod; /*0x788483*/
  targetAlphaByte = this->targetAlphaByte; /*0x78849b*/
  targetAlpha = (float)targetAlphaByte; /*0x7884a6*/
  CSpeedTreeRT__GetTransitionValues( /*0x7884c7*/
    lodLevel,
    v5,
    this->leafLodTransitionRadius,
    this->leafTransitionFactor16014,
    this->leafLodCurveExponent,
    targetAlpha,
    &highAlpha,
    &lowAlpha,
    highLod,
    lowLod);
  v8 = highLod[0]; /*0x7884cc*/
  v9 = kTerrainLODQuadRayDirectionZ; /*0x7884d1*/
  geometry->primaryBillboard.alphaTestValue = kTerrainLODQuadRayDirectionZ; /*0x7884de*/
  v11 = v5 - 1; /*0x7884e4*/
  if ( v8 == v11 ) /*0x7884ec*/
  {
    v12 = highAlpha; /*0x7884ee*/
LABEL_9:
    geometry->primaryBillboard.alphaTestValue = v12; /*0x788501*/
    goto LABEL_10; /*0x788501*/
  }
  if ( (__int16)lowLod[0] == v11 ) /*0x7884fb*/
  {
    v12 = lowAlpha; /*0x7884fd*/
    goto LABEL_9; /*0x7884fd*/
  }
LABEL_10:
  v13 = v9 != geometry->primaryBillboard.alphaTestValue; /*0x788507*/
  geometry->primaryBillboard.active = v13; /*0x78851f*/
  geometry->primaryBillboard.imageIndex = 0; /*0x788525*/
  if ( v13 ) /*0x78852c*/
  {
    geometry->primaryBillboard.coords = OB_CSimpleBillboard_GetBillboardCoords_010201A0( /*0x788549*/
                                          this->simpleBillboard,
                                          this->treeSizeBounds[1].min.x,
                                          this->treeSizeBounds->max.z);
    embeddedTexcoords = this->embeddedTexcoords; /*0x78854f*/
    if ( embeddedTexcoords ) /*0x788554*/
      geometry->primaryBillboard.texcoords = embeddedTexcoords->billboardMapTexcoords8; /*0x788559*/
    else
      geometry->primaryBillboard.texcoords = 0; /*0x788561*/
  }
  geometry->secondaryBillboard.active = 0; /*0x788567*/
  geometry->secondaryBillboard.imageIndex = 0; /*0x78856d*/
  if ( this->flagHorizontalBillboard )          // Horizontal billboard export gate. If CSpeedTreeRT+0x6D is true, uses horizontal coords at +0x70 and the last embedded billboard texcoord set from embedded+0x0C/count. /*0x788574*/
  {
    geometry->horizontalBillboard.coords = this->horizontalBillboardCoords12; /*0x78857c*/
    if ( this->embeddedTexcoords ) /*0x788582*/
      geometry->horizontalBillboard.texcoords = &this->embeddedTexcoords->billboardMapTexcoords8[8 /*0x788597*/
                                                                                               * this->embeddedTexcoords->billboardMapCount
                                                                                               - 8];
    else
      geometry->horizontalBillboard.texcoords = 0; /*0x78859f*/
    geometryOut = geometry->primaryBillboard.alphaTestValue; /*0x7885ab*/
    geometry->horizontalBillboard.alphaTestValue = geometryOut; /*0x7885b3*/
    geometry->horizontalBillboard.active = geometryOut >= 0.0; /*0x7885cd*/
    v15 = CSpeedTreeRT__s_horizontalFadeValue;  // Horizontal billboard alpha-test/fade scalar. SetCamera derives flt_B2B604 from camera pitch: 255 at <=30 degrees, 84 at >=60 degrees. /*0x7885d3*/
    geometry->horizontalBillboard.imageIndex = 0; /*0x7885d9*/
    geometry->horizontalBillboard.alphaTestValue = v15; /*0x7885e0*/
  }
  else
  {
    geometry->horizontalBillboard.active = 0; /*0x7885f0*/
    geometry->horizontalBillboard.imageIndex = 0; /*0x7885f6*/
  }
}
