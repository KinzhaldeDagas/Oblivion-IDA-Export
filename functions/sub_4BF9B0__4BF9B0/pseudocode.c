float *__thiscall sub_4BF9B0(float *this, float *a2, float a3)
{
  float v4; // [esp+8h] [ebp+8h]

  v4 = 1.0 / a3; /*0x4bf9bc*/
  *a2 = *this * v4; /*0x4bf9cc*/
  a2[1] = *(this + 1) * v4; /*0x4bf9d3*/
  a2[2] = v4 * *(this + 2); /*0x4bf9d9*/
  return a2; /*0x4bf9dc*/
}
