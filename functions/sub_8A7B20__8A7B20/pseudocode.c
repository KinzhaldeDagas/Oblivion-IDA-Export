bhkWorld *__thiscall sub_8A7B20(bhkWorld *this, int a2)
{
  double v3; // st7
  double v5; // rt0

  bhkWorld::bhkWorld(this, a2);
  v3 = flt_A46B2C;
  this->__vftable = (NiObjectVtbl *)&bhkWorldM::`vftable';
  *((float *)this + 0x20) = v3;
  *((float *)this + 0x21) = v3;
  *((float *)this + 0x22) = v3;
  *((_OWORD *)this + 0xA) = *(_OWORD *)(a2 + 0x40);
  v5 = dbl_A97608;
  *((float *)this + 0x24) = *(float *)(a2 + 0x40) - v5;
  *((float *)this + 0x25) = *(float *)(a2 + 0x44) - v5;
  *((float *)this + 0x26) = *(float *)(a2 + 0x48) - v5;
  return this;
}
