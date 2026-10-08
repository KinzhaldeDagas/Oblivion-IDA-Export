NiObject *__thiscall sub_75ECB0(NiObject *this, float a2, char a3, char a4, int a5)
{
  float z; // edx

  NiObject_constr(this); /*0x75ecb3*/
  *((float *)this + 2) = a2; /*0x75ecc0*/
  *((_BYTE *)this + 0xC) = a3; /*0x75eccd*/
  this->__vftable = (NiObjectVtbl *)&NiPSysCollider::`vftable'; /*0x75ecd0*/
  *((_BYTE *)this + 0xD) = a4; /*0x75ecd6*/
  *((_DWORD *)this + 4) = a5; /*0x75ecd9*/
  *((_DWORD *)this + 5) = LODWORD(g_zeroNiPoint3.x); /*0x75ece1*/
  *((_DWORD *)this + 6) = LODWORD(g_zeroNiPoint3.y); /*0x75ecea*/
  z = g_zeroNiPoint3.z; /*0x75eced*/
  *((float *)this + 8) = 0.0; /*0x75ecf3*/
  *((_DWORD *)this + 9) = 0; /*0x75ecf8*/
  *((float *)this + 7) = z; /*0x75ecfb*/
  *((_DWORD *)this + 0xA) = 0; /*0x75ecfe*/
  return this; /*0x75ed03*/
}
