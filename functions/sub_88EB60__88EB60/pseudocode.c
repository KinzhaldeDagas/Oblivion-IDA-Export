NiObject *__thiscall sub_88EB60(NiObject *this)
{
  sub_897600(this); /*0x88eb63*/
  this->__vftable = (NiObjectVtbl *)&bhkBlendCollisionObject::`vftable'; /*0x88eb6a*/
  ++unk_BA7A1C; /*0x88eb70*/
  *((float *)this + 5) = 0.0; /*0x88eb77*/
  *((_WORD *)this + 6) &= ~0x100u; /*0x88eb7c*/
  *((float *)this + 6) = 1.0; /*0x88eb84*/
  *((_DWORD *)this + 8) = 0; /*0x88eb87*/
  *((_DWORD *)this + 9) = 0; /*0x88eb8a*/
  *((_DWORD *)this + 7) = 8; /*0x88eb8d*/
  return this; /*0x88eb96*/
}
