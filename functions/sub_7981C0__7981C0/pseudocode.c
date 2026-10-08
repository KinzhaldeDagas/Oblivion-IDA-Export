// SpeedTree decode: stock SLodGeometry ctor. Initializes embedded compact SLeaf-style output record through 0x786F30, clears dirty/valid flag at +0x3C and original-center pointer at +0x40.
OB_SLodGeometry_010201A0 *__thiscall OB_SLodGeometry_ctor_010201A0(OB_SLodGeometry_010201A0 *this)
{
  OB_SLeafGeometryOutput_DefaultCtor_010201A0((OB_SLeafGeometryOutput_010201A0 *)this); /*0x7981c3*/
  this->generatedCardTableValid = 0; /*0x7981ca*/
  this->originalCenterCoords = 0; /*0x7981cd*/
  return this; /*0x7981d2*/
}
