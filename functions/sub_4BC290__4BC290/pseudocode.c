// Verified: reads TESSubSpace dimensions at +0x24/+0x26/+0x28 and multiplies each by 0.5 to return the three local-space half-extents.
float *__thiscall TESSubSpace_GetHalfExtents(TESSubSpace *this, float *outHalfExtents)
{
  int dimensionsX; // eax
  int dimensionsY; // edx
  int dimensionsZ; // ecx
  double v6; // rt0
  int v7; // [esp+0h] [ebp-4h]

  dimensionsX = this->dimensionsX; /*0x4bc291*/
  dimensionsY = this->dimensionsY; /*0x4bc295*/
  dimensionsZ = this->dimensionsZ; /*0x4bc299*/
  v7 = dimensionsX; /*0x4bc29d*/
  v6 = dbl_A2FAA0; /*0x4bc2b3*/
  *outHalfExtents = (double)v7 * v6; /*0x4bc2b5*/
  outHalfExtents[1] = (double)dimensionsY * v6; /*0x4bc2c1*/
  outHalfExtents[2] = v6 * (double)dimensionsZ; /*0x4bc2ca*/
  return outHalfExtents; /*0x4bc2ce*/
}
