NiObject *__thiscall sub_6DA160(NiObject *this, int a2)
{
  sub_6EC220(this); /*0x6da163*/
  this->__vftable = (NiObjectVtbl *)&NiPoint3Interpolator::`vftable'; /*0x6da168*/
  *((_DWORD *)this + 3) = dword_B24FC8; /*0x6da173*/
  *((_DWORD *)this + 4) = dword_B24FCC; /*0x6da182*/
  *((_DWORD *)this + 5) = dword_B24FD0; /*0x6da18b*/
  *((_DWORD *)this + 6) = a2; /*0x6da18e*/
  if ( a2 ) /*0x6da191*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6da197*/
  *((_DWORD *)this + 7) = 0; /*0x6da19f*/
  return this; /*0x6da1a6*/
}
