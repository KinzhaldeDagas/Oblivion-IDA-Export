// Oblivion 1.2.0.416: default spline constructor sets min=0, max=1, variance=0 and empties five owned vectors. RT4.1 source corroborates defaults/member roles but uses a different stack/heap spill layout; Oblivion's 92-byte vector layout is authoritative.
OB_stBezierSpline_010201A0 *__thiscall OB_StBezierSpline_DefaultCtor_010201A0(OB_stBezierSpline_010201A0 *this)
{
  this->minValue = 0.0; /*0x785c07*/
  this->controlPoints.begin = 0; /*0x785c09*/
  this->controlPoints.end = 0; /*0x785c0e*/
  this->maxValue = 1.0; /*0x785c11*/
  this->controlPoints.capacityEnd = 0; /*0x785c14*/
  this->variance = 0.0; /*0x785c17*/
  this->controlPointTangents.begin = 0; /*0x785c1a*/
  this->controlPointTangents.end = 0; /*0x785c1d*/
  this->controlPointTangents.capacityEnd = 0; /*0x785c20*/
  this->controlPointTangentLengths.begin = 0; /*0x785c23*/
  this->controlPointTangentLengths.end = 0; /*0x785c26*/
  this->controlPointTangentLengths.capacity = 0; /*0x785c29*/
  this->evenlySpacedPoints.begin = 0; /*0x785c2c*/
  this->evenlySpacedPoints.end = 0; /*0x785c2f*/
  this->evenlySpacedPoints.capacityEnd = 0; /*0x785c32*/
  this->splinePoints.begin = 0; /*0x785c35*/
  this->splinePoints.end = 0; /*0x785c38*/
  this->splinePoints.capacityEnd = 0; /*0x785c3b*/
  return this; /*0x785c3e*/
}
