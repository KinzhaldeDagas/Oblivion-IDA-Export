// stBezierSpline/profile copy helper used when a cached profile already exists.
OB_stBezierSpline_010201A0 *__thiscall OB_StBezierSpline_CopyFrom_010201A0(
        OB_stBezierSpline_010201A0 *this,
        const OB_stBezierSpline_010201A0 *source)
{
  this->minValue = source->minValue; /*0x785c5a*/
  this->maxValue = source->maxValue; /*0x785c63*/
  this->variance = source->variance; /*0x785c6c*/
  OB_stVector_stVec_CopyAssign_010201A0(&this->controlPoints, &source->controlPoints); /*0x785c6f*/
  OB_stVector_stVec_CopyAssign_010201A0(&this->controlPointTangents, &source->controlPointTangents); /*0x785c7b*/
  OB_stVectorUInt32_CopyAssign_010201A0( /*0x785c87*/
    (OB_stVectorUInt32_010201A0 *)&this->controlPointTangentLengths,
    (const OB_stVectorUInt32_010201A0 *)&source->controlPointTangentLengths);
  OB_stVector_stVec_CopyAssign_010201A0(&this->evenlySpacedPoints, &source->evenlySpacedPoints); /*0x785c93*/
  OB_stVector_stVec_CopyAssign_010201A0(&this->splinePoints, &source->splinePoints); /*0x785c9f*/
  return this; /*0x785ca4*/
}
