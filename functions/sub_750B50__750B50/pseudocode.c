NiObject *__thiscall sub_750B50(NiObject *this)
{
  float z; // ecx

  sub_752BF0(this); /*0x750b53*/
  *((_DWORD *)this + 6) = 0; /*0x750b5c*/
  this->__vftable = (NiObjectVtbl *)&NiPSysGravityModifier::`vftable'; /*0x750b5f*/
  *((_DWORD *)this + 7) = LODWORD(stru_B258D0.x); /*0x750b6b*/
  *((_DWORD *)this + 8) = LODWORD(stru_B258D0.y); /*0x750b74*/
  z = stru_B258D0.z; /*0x750b77*/
  *((float *)this + 0xA) = 0.0; /*0x750b7d*/
  *((_DWORD *)this + 0xC) = 0; /*0x750b82*/
  *((float *)this + 0xB) = 1.0; /*0x750b85*/
  *((float *)this + 9) = z; /*0x750b88*/
  *((float *)this + 0xD) = 0.0; /*0x750b8f*/
  *((float *)this + 0xE) = 1.0; /*0x750b92*/
  return this; /*0x750b95*/
}
