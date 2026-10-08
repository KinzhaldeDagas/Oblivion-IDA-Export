float *__thiscall sub_9741F0(float *this, float *a2)
{
  float v3; // [esp+4h] [ebp-8h]
  float v4; // [esp+8h] [ebp-4h]

  v3 = *(this + 6) * *(this + 5) - *(this + 8) * *(this + 3); /*0x974206*/
  v4 = *(this + 3) * *(this + 7) - *(this + 6) * *(this + 4); /*0x974218*/
  *a2 = *(this + 8) * *(this + 4) - *(this + 5) * *(this + 7); /*0x97422c*/
  a2[1] = v3; /*0x974232*/
  a2[2] = v4; /*0x974239*/
  Vector3_NormalizeInPlace(a2); /*0x97423c*/
  return a2; /*0x974245*/
}
