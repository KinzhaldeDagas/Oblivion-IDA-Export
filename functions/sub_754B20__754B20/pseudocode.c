NiObject *__thiscall sub_754B20(NiObject *this, float a2, char a3, char a4, int a5, int a6, float a7)
{
  float v9; // [esp+38h] [ebp+10h]
  float v10; // [esp+38h] [ebp+10h]

  sub_75ECB0(this, a2, a3, a4, a5); /*0x754b41*/
  *((float *)this + 0xC) = 1.0; /*0x754b4c*/
  *((float *)this + 0xE) = 1.0; /*0x754b4f*/
  *((_DWORD *)this + 0xB) = a6; /*0x754b52*/
  this->__vftable = (NiObjectVtbl *)&NiPSysSphericalCollider::`vftable'; /*0x754b57*/
  *((_DWORD *)this + 0xF) = LODWORD(g_zeroNiPoint3.x); /*0x754b67*/
  *((_DWORD *)this + 0x10) = LODWORD(g_zeroNiPoint3.y); /*0x754b72*/
  *((_DWORD *)this + 0x11) = LODWORD(g_zeroNiPoint3.z); /*0x754b7a*/
  if ( a7 >= 0.0 ) /*0x754b84*/
    *((float *)this + 0xC) = a7; /*0x754b86*/
  v9 = -flt_A7DEB4; /*0x754b9a*/
  *((float *)this + 0x28) = v9; /*0x754bb2*/
  *((float *)this + 0x1B) = v9; /*0x754bc0*/
  *((float *)this + 0x29) = v9; /*0x754bc3*/
  *((float *)this + 0x1C) = v9; /*0x754bc9*/
  *((float *)this + 0x2A) = v9; /*0x754bcf*/
  *((float *)this + 0x1D) = v9; /*0x754bd5*/
  qmemcpy((char *)this + 0x7C, &unk_B3FADC, 0x24u); /*0x754bdf*/
  qmemcpy(this + 9, (char *)this + 0x7C, 0x24u); /*0x754beb*/
  v10 = -flt_A7DEB4; /*0x754bf5*/
  *((float *)this + 0x2B) = v10; /*0x754bfd*/
  *((float *)this + 0x1E) = v10; /*0x754c03*/
  return this; /*0x754c0e*/
}
