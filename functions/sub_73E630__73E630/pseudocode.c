NiObject *__thiscall sub_73E630(NiObject *this)
{
  float v2; // edx
  float v3; // edx

  sub_738760(this); /*0x73e633*/
  this->__vftable = (NiObjectVtbl *)&NiScreenLODData::`vftable'; /*0x73e63a*/
  *((float *)this + 2) = g_zeroNiPoint3; /*0x73e645*/
  *((float *)this + 3) = *(&g_zeroNiPoint3 + 1); /*0x73e64e*/
  v2 = MEMORY[0xB3F9B0][0]; /*0x73e651*/
  *((float *)this + 5) = 0.0; /*0x73e657*/
  *((float *)this + 4) = v2; /*0x73e65a*/
  *((float *)this + 6) = g_zeroNiPoint3; /*0x73e662*/
  *((float *)this + 7) = *(&g_zeroNiPoint3 + 1); /*0x73e66b*/
  v3 = MEMORY[0xB3F9B0][0]; /*0x73e66e*/
  *((float *)this + 9) = 0.0; /*0x73e674*/
  *((float *)this + 8) = v3; /*0x73e679*/
  *((_DWORD *)this + 0xA) = 0; /*0x73e67c*/
  *((_DWORD *)this + 0xB) = 0; /*0x73e67f*/
  return this; /*0x73e684*/
}
