bhkRefObject *__thiscall sub_8C8830(bhkRefObject *this)
{
  bhkRefObject::bhkRefObject(this); /*0x8c8833*/
  *((_DWORD *)this + 3) = 0; /*0x8c883a*/
  *((_DWORD *)this + 4) = 0; /*0x8c883d*/
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8c8840*/
  ++unk_BA7D70; /*0x8c884b*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x8c8851*/
  ++unk_BA7F44; /*0x8c8857*/
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x8c885d*/
  ++unk_BA7F50; /*0x8c8863*/
  this->__vftable = (NiObjectVtbl *)&bhkConvexVerticesShape::`vftable'; /*0x8c8869*/
  ++unk_BA814C; /*0x8c886f*/
  return this; /*0x8c8877*/
}
