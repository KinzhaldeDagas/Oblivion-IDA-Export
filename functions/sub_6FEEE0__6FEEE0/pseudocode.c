NiObject *__thiscall sub_6FEEE0(NiObject *this)
{
  float z; // edx

  sub_752BF0(this); /*0x6feee3*/
  this->__vftable = (NiObjectVtbl *)&BSParentVelocityModifier::`vftable'; /*0x6feeea*/
  *((_DWORD *)this + 3) = 0xBB8; /*0x6feef0*/
  *((_DWORD *)this + 9) = LODWORD(g_zeroNiPoint3.x); /*0x6feefc*/
  *((_DWORD *)this + 0xA) = LODWORD(g_zeroNiPoint3.y); /*0x6fef05*/
  *((_DWORD *)this + 0xB) = LODWORD(g_zeroNiPoint3.z); /*0x6fef0e*/
  *((_DWORD *)this + 0xC) = LODWORD(g_zeroNiPoint3.x); /*0x6fef16*/
  *((_DWORD *)this + 0xD) = LODWORD(g_zeroNiPoint3.y); /*0x6fef1f*/
  z = g_zeroNiPoint3.z; /*0x6fef22*/
  *((float *)this + 8) = 0.0; /*0x6fef28*/
  *((float *)this + 6) = 0.0; /*0x6fef2b*/
  *((float *)this + 0xE) = z; /*0x6fef2e*/
  return this; /*0x6fef33*/
}
