float *__thiscall sub_43F320(float *this, float *a2)
{
  *this = *this - *a2; /*0x43f32a*/
  *(this + 1) = *(this + 1) - a2[1]; /*0x43f332*/
  *(this + 2) = *(this + 2) - a2[2]; /*0x43f33b*/
  return this; /*0x43f33e*/
}
