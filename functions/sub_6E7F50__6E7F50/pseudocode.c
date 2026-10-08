NiObject *__thiscall sub_6E7F50(NiObject *this, int a2)
{
  sub_6EC220(this); /*0x6e7f53*/
  this->__vftable = (NiObjectVtbl *)&NiBoolInterpolator::`vftable'; /*0x6e7f58*/
  *((_BYTE *)this + 0xC) = byte_A7C6AC; /*0x6e7f63*/
  *((_DWORD *)this + 4) = a2; /*0x6e7f6c*/
  if ( a2 ) /*0x6e7f6f*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6e7f75*/
  *((_DWORD *)this + 5) = 0; /*0x6e7f7d*/
  return this; /*0x6e7f84*/
}
