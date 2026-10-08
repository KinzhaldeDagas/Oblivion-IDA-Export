NiObject *__thiscall sub_6FA890(NiObject *this, unsigned int a2)
{
  sub_721350(this); /*0x6fa8b8*/
  *((_DWORD *)this + 3) = a2; /*0x6fa8c1*/
  this->__vftable = (NiObjectVtbl *)&BSXFlags::`vftable'; /*0x6fa8d3*/
  sub_721440((unsigned int *)this, dword_A7D0EC); /*0x6fa8d9*/
  return this; /*0x6fa8e0*/
}
