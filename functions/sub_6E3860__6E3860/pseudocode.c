NiObject *__thiscall sub_6E3860(NiObject *this, int a2)
{
  sub_6EC220(this); /*0x6e3863*/
  this->__vftable = (NiObjectVtbl *)&NiColorInterpolator::`vftable'; /*0x6e3868*/
  *((_DWORD *)this + 3) = dword_B24FD4; /*0x6e3873*/
  *((_DWORD *)this + 4) = dword_B24FD8; /*0x6e387c*/
  *((_DWORD *)this + 5) = dword_B24FDC; /*0x6e3885*/
  *((_DWORD *)this + 6) = dword_B24FE0; /*0x6e388d*/
  *((_DWORD *)this + 7) = a2; /*0x6e3896*/
  if ( a2 ) /*0x6e3899*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6e389f*/
  *((_DWORD *)this + 8) = 0; /*0x6e38a7*/
  return this; /*0x6e38ae*/
}
