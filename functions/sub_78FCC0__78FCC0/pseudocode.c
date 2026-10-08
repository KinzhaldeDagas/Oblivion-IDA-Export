// Vector angle helper. Dot product against reference vector, clamps to [0,1], returns acos result in radians.
double __thiscall OB_Vec3_AngleClamped01_010201A0(float *this, float *referenceVector)
{
  double v2; // st7
  float referenceVectora; // [esp+4h] [ebp+4h]
  float referenceVectorb; // [esp+4h] [ebp+4h]

  referenceVectora = referenceVector[1] * *(this + 1) + *referenceVector * *this + referenceVector[2] * *(this + 2); /*0x78fcd8*/
  v2 = kTerrainLODQuadRayDirectionZ; /*0x78fcdc*/
  if ( referenceVectora < v2 || (v2 = 1.0, referenceVectora > 1.0) ) /*0x78fd16*/
  {
    referenceVectorb = v2; /*0x78fcf1*/
    return (float)acos(referenceVectorb); /*0x78fd02*/
  }
  else
  {
    return (float)acos(referenceVectora); /*0x78fd27*/
  }
}
