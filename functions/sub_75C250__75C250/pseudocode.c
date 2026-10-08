NiObject *__thiscall sub_75C250(NiObject *this)
{
  double v2; // st7
  float z; // eax
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  sub_75E800(this); /*0x75c256*/
  this->__vftable = (NiObjectVtbl *)&NiPSysAirFieldModifier::`vftable'; /*0x75c25b*/
  v5[0] = -stru_B258D0.x; /*0x75c26d*/
  v5[1] = -stru_B258D0.y; /*0x75c27c*/
  v5[2] = -stru_B258D0.z; /*0x75c288*/
  sub_75C1C0((float *)this, v5); /*0x75c28c*/
  v2 = flt_A32048; /*0x75c297*/
  *((_DWORD *)this + 0xC) = LODWORD(stru_B28B54.x); /*0x75c29d*/
  *((_DWORD *)this + 0xD) = LODWORD(stru_B28B54.y); /*0x75c2a6*/
  z = stru_B28B54.z; /*0x75c2a9*/
  *((float *)this + 0xF) = v2; /*0x75c2ae*/
  *((float *)this + 0xE) = z; /*0x75c2b1*/
  return this; /*0x75c2b6*/
}
