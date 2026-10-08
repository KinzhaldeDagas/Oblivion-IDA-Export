NiObject *__thiscall sub_6D2990(NiObject *this, int a2)
{
  sub_6EC220(this); /*0x6d2993*/
  this->__vftable = (NiObjectVtbl *)&NiFloatInterpolator::`vftable'; /*0x6d299e*/
  *((float *)this + 3) = flt_A7C6B0; /*0x6d29aa*/
  *((_DWORD *)this + 4) = a2; /*0x6d29ad*/
  if ( a2 ) /*0x6d29b0*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6d29b6*/
  *((_DWORD *)this + 5) = 0; /*0x6d29be*/
  return this; /*0x6d29c5*/
}
