//
// Verified model-transform helper: multiply each of nine NiMatrix3 float components by scalar; each result is stored to float before the subsequent vector multiplication.
float *__thiscall sub_710190(float *this, float *a2, float a3)
{
  *a2 = *this * a3; /*0x7101a0*/
  a2[1] = *(this + 1) * a3; /*0x7101a7*/
  a2[2] = *(this + 2) * a3; /*0x7101af*/
  a2[3] = *(this + 3) * a3; /*0x7101b7*/
  a2[4] = *(this + 4) * a3; /*0x7101bf*/
  a2[5] = *(this + 5) * a3; /*0x7101c7*/
  a2[6] = *(this + 6) * a3; /*0x7101cf*/
  a2[7] = *(this + 7) * a3; /*0x7101d7*/
  a2[8] = a3 * *(this + 8); /*0x7101dd*/
  return a2; /*0x7101e0*/
}
