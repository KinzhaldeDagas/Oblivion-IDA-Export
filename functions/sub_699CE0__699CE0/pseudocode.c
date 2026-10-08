bhkRefObject *__thiscall sub_699CE0(bhkRefObject *this, int a2)
{
  bhkRefObject::bhkRefObject(this); /*0x699d09*/
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable'; /*0x699d10*/
  *((_DWORD *)this + 3) = 0; /*0x699d16*/
  ++unk_BA7D34; /*0x699d19*/
  this->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable'; /*0x699d20*/
  ++unk_BA7F5C; /*0x699d26*/
  *((_BYTE *)this + 0x10) = 0; /*0x699d2d*/
  this->__vftable = (NiObjectVtbl *)&bhkAabbPhantom::`vftable'; /*0x699d3b*/
  sub_8BA650(this, a2); /*0x699d41*/
  ++unk_BA802C; /*0x699d46*/
  *((_BYTE *)this + 0x10) = 0; /*0x699d4d*/
  return this; /*0x699d52*/
}
