float *__thiscall sub_716E00(float *this, float *a2, float *a3)
{
  *this = *a2; /*0x716e08*/
  *(this + 1) = a2[1]; /*0x716e0d*/
  *(this + 2) = a2[2]; /*0x716e13*/
  *(this + 3) = a2[1] * a3[1] + *a2 * *a3 + a2[2] * a3[2]; /*0x716e2e*/
  return this; /*0x716e31*/
}
