float *__thiscall sub_557770(float *this, float *a2)
{
  float *v3; // esi
  int v4; // ebx
  unsigned int v5; // ebp

  *this = *a2; /*0x55777c*/
  *(this + 1) = a2[1]; /*0x557781*/
  *(this + 2) = a2[2]; /*0x557787*/
  *(this + 3) = a2[3]; /*0x55778f*/
  v3 = this + 4; /*0x557792*/
  v4 = (char *)a2 - (char *)this; /*0x557795*/
  v5 = 3; /*0x557797*/
  do /*0x5577b1*/
  {
    sub_5575C0(v3, v5, (unsigned int)this, (float *)((char *)v3 + v4)); /*0x5577a6*/
    v3 += 4; /*0x5577ab*/
    --v5; /*0x5577ae*/
  }
  while ( v5 ); /*0x5577b1*/
  return this; /*0x5577b5*/
}
