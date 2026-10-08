int __thiscall sub_8E93E0(float *this, int a2)
{
  double v2; // st7

  v2 = *(this + 0x31); /*0x8e93e3*/
  *(_OWORD *)a2 = 0; /*0x8e93fb*/
  *(_OWORD *)(a2 + 0x10) = 0; /*0x8e93fe*/
  *(_OWORD *)(a2 + 0x20) = 0; /*0x8e9402*/
  *(float *)a2 = v2; /*0x8e9406*/
  *(float *)(a2 + 0x14) = v2; /*0x8e940b*/
  *(float *)(a2 + 0x28) = v2; /*0x8e940e*/
  return a2; /*0x8e9413*/
}
