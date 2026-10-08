NiObject *__thiscall sub_74EDA0(NiObject *this)
{
  int v2; // eax

  sub_752BF0(this); /*0x74eda3*/
  *((float *)this + 6) = 0.0; /*0x74edaa*/
  this->__vftable = (NiObjectVtbl *)&NiPSysEmitter::`vftable'; /*0x74edad*/
  *((float *)this + 7) = 0.0; /*0x74edb3*/
  *((float *)this + 8) = 0.0; /*0x74edb6*/
  *((float *)this + 9) = 0.0; /*0x74edb9*/
  *((float *)this + 0xA) = 0.0; /*0x74edbc*/
  *((float *)this + 0xB) = 0.0; /*0x74edbf*/
  *((_DWORD *)this + 0xC) = dword_B25AE0; /*0x74edc9*/
  *((_DWORD *)this + 0xD) = dword_B25AE4; /*0x74edd2*/
  *((_DWORD *)this + 0xE) = dword_B25AE8; /*0x74eddb*/
  v2 = dword_B25AEC; /*0x74edde*/
  *((float *)this + 0x10) = 1.0; /*0x74ede3*/
  *((_DWORD *)this + 0xF) = v2; /*0x74ede6*/
  *((float *)this + 0x11) = 0.0; /*0x74ede9*/
  *((float *)this + 0x12) = 0.0; /*0x74edee*/
  *((float *)this + 0x13) = 0.0; /*0x74edf1*/
  return this; /*0x74edf4*/
}
