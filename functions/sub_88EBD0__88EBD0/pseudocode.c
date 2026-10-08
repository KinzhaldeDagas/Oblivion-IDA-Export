NiObject *__thiscall sub_88EBD0(NiObject *this, NiAVObject *a2)
{
  sub_897640(this, a2); /*0x88ebd8*/
  this->__vftable = (NiObjectVtbl *)&bhkBlendCollisionObject::`vftable'; /*0x88ebdf*/
  ++unk_BA7A1C; /*0x88ebe5*/
  *((float *)this + 5) = 0.0; /*0x88ebec*/
  *((_WORD *)this + 6) &= ~0x100u; /*0x88ebf1*/
  *((float *)this + 6) = 1.0; /*0x88ebf9*/
  *((_DWORD *)this + 8) = 0; /*0x88ebfc*/
  *((_DWORD *)this + 9) = 0; /*0x88ebff*/
  *((_DWORD *)this + 7) = 8; /*0x88ec02*/
  return this; /*0x88ec0b*/
}
