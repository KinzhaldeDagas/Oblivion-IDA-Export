float *__thiscall sub_4707E0(float *this, float a2)
{
  float v3; // [esp+4h] [ebp+4h]

  v3 = 1.0 / a2; /*0x4707ea*/
  *this = *this * v3; /*0x4707fa*/
  *(this + 1) = *(this + 1) * v3; /*0x470801*/
  *(this + 2) = v3 * *(this + 2); /*0x470807*/
  return this; /*0x47080a*/
}
