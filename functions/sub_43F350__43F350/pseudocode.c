// Vector3_NormalizeInPlace. Returns original length in ST0; if length <= epsilon at 0xA372CC, zeroes xyz and returns 0. PlaceAtMe uses it to normalize the ray hit vector before scaling by hit distance.
double __thiscall sub_43F350(float *this)
{
  double v1; // st7
  bool v2; // c0
  bool v3; // c3
  double result; // st7
  float v5; // [esp+4h] [ebp-4h]
  float v6; // [esp+4h] [ebp-4h]
  float v7; // [esp+4h] [ebp-4h]

  v5 = *(this + 1) * *(this + 1) + *this * *this + *(this + 2) * *(this + 2); /*0x43f36c*/
  v6 = sqrt(v5); /*0x43f379*/
  v1 = flt_A372CC; /*0x43f385*/
  v2 = v6 < v1; /*0x43f38f*/
  v3 = v6 == v1; /*0x43f38f*/
  result = v6; /*0x43f393*/
  if ( v2 || v3 ) /*0x43f395*/
  {
    *this = 0.0; /*0x43f3c7*/
    *(this + 1) = 0.0; /*0x43f3c9*/
    *(this + 2) = 0.0; /*0x43f3cc*/
    return (float)0.0; /*0x43f3d4*/
  }
  else
  {
    v7 = 1.0 / result; /*0x43f3a0*/
    *this = *this * v7; /*0x43f3b0*/
    *(this + 1) = v7 * *(this + 1); /*0x43f3b7*/
    *(this + 2) = v7 * *(this + 2); /*0x43f3bd*/
  }
  return result; /*0x43f3c0*/
}
