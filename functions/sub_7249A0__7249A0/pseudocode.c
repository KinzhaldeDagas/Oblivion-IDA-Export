NiObject *__thiscall sub_7249A0(NiObject *this)
{
  float v2; // edx

  sub_738760(this); /*0x7249a3*/
  this->__vftable = (NiObjectVtbl *)&NiRangeLODData::`vftable'; /*0x7249a8*/
  *((float *)this + 2) = g_zeroNiPoint3; /*0x7249b3*/
  *((float *)this + 3) = *(&g_zeroNiPoint3 + 1); /*0x7249bc*/
  v2 = MEMORY[0xB3F9B0][0]; /*0x7249bf*/
  *((_DWORD *)this + 8) = 0; /*0x7249c7*/
  *((_DWORD *)this + 9) = 0; /*0x7249ca*/
  *((float *)this + 4) = v2; /*0x7249cd*/
  return this; /*0x7249d2*/
}
