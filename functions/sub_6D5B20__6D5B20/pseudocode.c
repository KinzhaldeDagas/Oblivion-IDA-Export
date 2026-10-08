// Oblivion NiTransformInterpolator construction with NiTransformData. Initializes the cached 0x20-byte transform at +0x0C to native defaults, stores data at +0x2C with an added reference, and zeroes rotation/translation/scale cursors +0x30/+0x32/+0x34. Object size is 0x38.
NiObject *__thiscall NiTransformInterpolator_ConstructWithData(NiObject *this, int a2)
{
  sub_6EC220(this); /*0x6d5b23*/
  this->__vftable = (NiObjectVtbl *)&NiTransformInterpolator::`vftable'; /*0x6d5b28*/
  *((_DWORD *)this + 3) = dword_B24260; /*0x6d5b33*/
  *((_DWORD *)this + 4) = dword_B24264; /*0x6d5b3c*/
  *((_DWORD *)this + 5) = dword_B24268; /*0x6d5b45*/
  *((float *)this + 6) = flt_B3CBA4; /*0x6d5b4d*/
  *((float *)this + 7) = flt_B3CBA8; /*0x6d5b56*/
  *((float *)this + 8) = flt_B3CBAC; /*0x6d5b5f*/
  *((float *)this + 9) = flt_B3CBB0; /*0x6d5b67*/
  *((float *)this + 0xA) = flt_A79E10; /*0x6d5b74*/
  *((_DWORD *)this + 0xB) = a2; /*0x6d5b79*/
  if ( a2 ) /*0x6d5b7c*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6d5b82*/
  *((_WORD *)this + 0x18) = 0; /*0x6d5b88*/
  *((_WORD *)this + 0x19) = 0; /*0x6d5b8e*/
  *((_WORD *)this + 0x1A) = 0; /*0x6d5b94*/
  return this; /*0x6d5b9c*/
}
