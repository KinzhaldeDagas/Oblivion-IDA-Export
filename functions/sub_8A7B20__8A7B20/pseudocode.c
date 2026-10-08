bhkWorld *__thiscall sub_8A7B20(bhkWorld *this, int a2)
{
  double v3; // st7
  double v5; // rt0

  bhkWorld::bhkWorld(this, a2); /*0x8a7b31*/
  v3 = flt_A46B2C; /*0x8a7b36*/
  this->__vftable = (NiObjectVtbl *)&bhkWorldM::`vftable'; /*0x8a7b3c*/
  *((float *)this + 0x20) = v3; /*0x8a7b42*/
  *((float *)this + 0x21) = v3; /*0x8a7b48*/
  *((float *)this + 0x22) = v3; /*0x8a7b50*/
  *((_OWORD *)this + 0xA) = *(_OWORD *)(a2 + 0x40); /*0x8a7b5a*/
  v5 = dbl_A97608; /*0x8a7b6c*/
  *((float *)this + 0x24) = *(float *)(a2 + 0x40) - v5; /*0x8a7b6e*/
  *((float *)this + 0x25) = *(float *)(a2 + 0x44) - v5; /*0x8a7b79*/
  *((float *)this + 0x26) = *(float *)(a2 + 0x48) - v5; /*0x8a7b83*/
  return this; /*0x8a7b89*/
}
