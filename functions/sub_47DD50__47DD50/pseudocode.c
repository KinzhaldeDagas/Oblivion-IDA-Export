float *__thiscall sub_47DD50(float *this, float *a2)
{
  double v3; // rt0

  v3 = hkFactor; /*0x47dd60*/
  *this = *a2 * v3; /*0x47dd62*/
  *(this + 1) = a2[1] * v3; /*0x47dd69*/
  *(this + 2) = v3 * a2[2]; /*0x47dd6f*/
  *(this + 3) = 0.0; /*0x47dd74*/
  return this; /*0x47dd77*/
}
