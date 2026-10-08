// Oblivion NiTransformInterpolator construction from a supplied 0x20-byte transform. Copies the transform to +0x0C, leaves data +0x2C null, and zeroes all three authored-key cursors.
NiObject *__thiscall NiTransformInterpolator_ConstructWithTransform(
        NiObject *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  sub_6EC220(this); /*0x6d5c35*/
  qmemcpy((char *)this + 0xC, &a2, 0x20u); /*0x6d5c48*/
  this->__vftable = (NiObjectVtbl *)&NiTransformInterpolator::`vftable'; /*0x6d5c4a*/
  *((_DWORD *)this + 0xB) = 0; /*0x6d5c50*/
  *((_WORD *)this + 0x18) = 0; /*0x6d5c54*/
  *((_WORD *)this + 0x19) = 0; /*0x6d5c58*/
  *((_WORD *)this + 0x1A) = 0; /*0x6d5c5c*/
  return this; /*0x6d5c53*/
}
