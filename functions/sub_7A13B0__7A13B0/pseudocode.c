//
//
// [2026-10-03 later-source closure] Six RT4.1 supplemental generation fields25002..25007 have no storage in this0x6C native engine. Plugin now interprets retained sidecar values outside the object and adapts CBranch generation/retention callsites. Source defaults: distance0, ancestorLevel0, above/below ENABLED0, segments1, overridefalse. Cutoff sign reverses above/below equality semantics. Do not write these values after+6C.
OB_CFrondEngine_010201A0 *__thiscall OB_CFrondEngine_ctor_010201A0(OB_CFrondEngine_010201A0 *this)
{
  char v2; // bl
  double v3; // st7
  OB_stBezierSpline_010201A0 *v4; // edi
  OB_stBezierSpline_010201A0 *v5; // eax
  OB_stString28_010201A0 stringObject; // [esp+1Ch] [ebp-28h] BYREF
  int v8; // [esp+40h] [ebp-4h]

  v2 = 0; /*0x7a13dc*/
  this->indexedGeometry = 0; /*0x7a13e2*/
  this->lightingEngine = 0; /*0x7a13e4*/
  this->guideVectorWrapper.begin = 0; /*0x7a13e7*/
  this->guideVectorWrapper.end = 0; /*0x7a13ea*/
  this->guideVectorWrapper.capacityEnd = 0; /*0x7a13ed*/
  v8 = 0; /*0x7a13f0*/
  this->guideLodVectorWrapper.begin = 0; /*0x7a13f4*/
  this->guideLodVectorWrapper.end = 0; /*0x7a13f7*/
  this->guideLodVectorWrapper.capacityEnd = 0; /*0x7a13fa*/
  this->frondType = 1; /*0x7a13fd*/
  this->bladeCount = 2; /*0x7a1409*/
  this->profileSegmentCount = 4; /*0x7a1411*/
  this->activationBranchLevel = 1; /*0x7a1414*/
  this->enabledFlag = 0; /*0x7a141b*/
  this->frondTextureVectorWrapper.begin = 0; /*0x7a141e*/
  this->frondTextureVectorWrapper.end = 0; /*0x7a1421*/
  this->frondTextureVectorWrapper.capacityEnd = 0; /*0x7a1424*/
  this->maxSurfaceAreaPercent = 1.0; /*0x7a1429*/
  LOBYTE(v8) = 2; /*0x7a1430*/
  this->minSurfaceAreaPercent = 0.0; /*0x7a1434*/
  this->frondLodCount = 4; /*0x7a1437*/
  this->reductionFuzziness = 0.0; /*0x7a143a*/
  this->minLengthSegments = 2; /*0x7a143d*/
  v3 = flt_A43328; /*0x7a1440*/
  this->minCrossSegments = 1; /*0x7a1446*/
  this->largeFrondRetentionPercent = v3; /*0x7a144d*/
  v4 = (OB_stBezierSpline_010201A0 *)FormHeapAlloc(0x5Cu); /*0x7a1455*/
  LOBYTE(v8) = 3; /*0x7a1460*/
  if ( v4 ) /*0x7a1465*/
  {
    stringObject.capacity = 0xF; /*0x7a1475*/
    stringObject.size = 0; /*0x7a147d*/
    stringObject.storage.inlineData[0] = 0; /*0x7a1481*/
    OB_stString28_AssignBytes_010201A0( /*0x7a1485*/
      &stringObject,
      "BezierSpline 0.0 1.0 0.0 { 3 0 0.00138887 0.337009 0.941501 0.132767 0.493215 0.998903 1 0.00102074 0.23702 1 -6.2"
      "4607e-008 0.307222 -0.951638 0.126974 }",
      0x99u);
    v2 = 1; /*0x7a148e*/
    LOBYTE(v8) = 4; /*0x7a1496*/
    v5 = OB_StBezierSpline_ctor_cachedFromString_010201A0(v4, &stringObject); /*0x7a149f*/
  }
  else
  {
    v5 = 0; /*0x7a14a6*/
  }
  this->profileSpline = (int)v5; /*0x7a14ab*/
  if ( (v2 & 1) != 0 && stringObject.capacity >= 0x10 ) /*0x7a14b5*/
    FormHeapFree((unsigned int)stringObject.storage.heapData); /*0x7a14bc*/
  return this; /*0x7a14c6*/
}
