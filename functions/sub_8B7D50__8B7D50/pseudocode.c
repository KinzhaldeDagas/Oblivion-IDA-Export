bhkRefObject *__thiscall sub_8B7D50(bhkRefObject *this)
{
  bhkRefObject::bhkRefObject(this); /*0x8b7d53*/
  *((_DWORD *)this + 3) = 0; /*0x8b7d5a*/
  *((_DWORD *)this + 4) = 0; /*0x8b7d5d*/
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8b7d60*/
  ++unk_BA7D70; /*0x8b7d6b*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x8b7d71*/
  ++unk_BA7F44; /*0x8b7d77*/
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x8b7d7d*/
  ++unk_BA7F50; /*0x8b7d83*/
  this->__vftable = (NiObjectVtbl *)&bhkBoxShape::`vftable'; /*0x8b7d89*/
  ++unk_BA7FF4; /*0x8b7d8f*/
  return this; /*0x8b7d97*/
}
