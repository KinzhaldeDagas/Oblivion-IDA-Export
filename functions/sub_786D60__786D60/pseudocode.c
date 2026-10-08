// Oblivion cached-string stBezierSpline constructor. Initializes five compact 16-byte vectors, performs cache lookup/copy or parse/build/cache, and allocates exactly 0x5C bytes for cached copies. Confirms the shipped vector-only layout; RT4.1 source is corroborative, not layout-authoritative.
OB_stBezierSpline_010201A0 *__thiscall OB_StBezierSpline_ctor_cachedFromString_010201A0(
        OB_stBezierSpline_010201A0 *this,
        const void *stringObject)
{
  OB_stBezierSpline_010201A0 *v3; // edi
  OB_stBezierSpline_010201A0 *v4; // eax
  OB_stBezierSpline_010201A0 *v5; // eax

  v3 = 0; /*0x786d8a*/
  this->controlPoints.begin = 0; /*0x786d8c*/
  this->controlPoints.end = 0; /*0x786d8f*/
  this->controlPoints.capacityEnd = 0; /*0x786d92*/
  this->controlPointTangents.begin = 0; /*0x786d99*/
  this->controlPointTangents.end = 0; /*0x786d9c*/
  this->controlPointTangents.capacityEnd = 0; /*0x786d9f*/
  this->controlPointTangentLengths.begin = 0; /*0x786da2*/
  this->controlPointTangentLengths.end = 0; /*0x786da5*/
  this->controlPointTangentLengths.capacity = 0; /*0x786da8*/
  this->evenlySpacedPoints.begin = 0; /*0x786dab*/
  this->evenlySpacedPoints.end = 0; /*0x786dae*/
  this->evenlySpacedPoints.capacityEnd = 0; /*0x786db1*/
  this->splinePoints.begin = 0; /*0x786db4*/
  this->splinePoints.end = 0; /*0x786db7*/
  this->splinePoints.capacityEnd = 0; /*0x786dba*/
  v4 = *OB_StBezierSpline_FindOrInsertCacheEntry_010201A0( /*0x786dd1*/
          &OB_stBezierSpline_CacheMap_010201A0,
          (const OB_stString28_010201A0 *)stringObject);
  if ( v4 ) /*0x786dd7*/
  {
    OB_StBezierSpline_CopyFrom_010201A0(this, v4); /*0x786e21*/
  }
  else
  {
    OB_StBezierSpline_ParseFromString_010201A0(this, stringObject); /*0x786dda*/
    OB_StBezierSpline_CreateEvenlySpacedPoints_010201A0(this, 0x1F4u); /*0x786de6*/
    v5 = (OB_stBezierSpline_010201A0 *)FormHeapAlloc(0x5Cu); /*0x786ded*/
    if ( v5 ) /*0x786e00*/
      v3 = OB_StBezierSpline_CopyCtor_010201A0(v5, this); /*0x786e0a*/
    *OB_StBezierSpline_FindOrInsertCacheEntry_010201A0( /*0x786e1c*/
       &OB_stBezierSpline_CacheMap_010201A0,
       (const OB_stString28_010201A0 *)stringObject) = v3;
  }
  return this; /*0x786e28*/
}
