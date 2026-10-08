// Oblivion 0x20-byte transform invalid test: true only when translation.x, quaternion marker component at +0x10, and scale at +0x1C all equal the invalid float sentinel.
BOOL __thiscall NiTransform_IsInvalid(float *this)
{
  double v1; // st7
  float v3; // [esp+0h] [ebp-4h]

  v3 = -flt_A7DEB4; /*0x6cbc19*/
  v1 = v3; /*0x6cbc28*/
  return v3 == *(this + 7) && v1 == *(this + 4) && *this == v1; /*0x6cbc4e*/
}
