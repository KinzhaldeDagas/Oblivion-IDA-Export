// stBezierSpline/profile copy constructor wrapper: zeroes vector/storage fields, then copies from an existing parsed profile.
OB_stBezierSpline_010201A0 *__thiscall OB_StBezierSpline_CopyCtor_010201A0(
        OB_stBezierSpline_010201A0 *this,
        const OB_stBezierSpline_010201A0 *source)
{
  this->controlPoints.begin = 0; /*0x785cda*/
  this->controlPoints.end = 0; /*0x785cdd*/
  this->controlPoints.capacityEnd = 0; /*0x785ce0*/
  this->controlPointTangents.begin = 0; /*0x785ce7*/
  this->controlPointTangents.end = 0; /*0x785cea*/
  this->controlPointTangents.capacityEnd = 0; /*0x785ced*/
  this->controlPointTangentLengths.begin = 0; /*0x785cf0*/
  this->controlPointTangentLengths.end = 0; /*0x785cf3*/
  this->controlPointTangentLengths.capacity = 0; /*0x785cf6*/
  this->evenlySpacedPoints.begin = 0; /*0x785cf9*/
  this->evenlySpacedPoints.end = 0; /*0x785cfc*/
  this->evenlySpacedPoints.capacityEnd = 0; /*0x785cff*/
  this->splinePoints.begin = 0; /*0x785d02*/
  this->splinePoints.end = 0; /*0x785d05*/
  this->splinePoints.capacityEnd = 0; /*0x785d08*/
  OB_StBezierSpline_CopyFrom_010201A0(this, source); /*0x785d15*/
  return this; /*0x785d1c*/
}
