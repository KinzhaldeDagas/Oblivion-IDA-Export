bhkRefObject *__thiscall sub_8B6650(bhkRefObject *this)
{
  bhkRefObject::bhkRefObject(this); /*0x8b6653*/
  *((_DWORD *)this + 3) = 0; /*0x8b665a*/
  *((_DWORD *)this + 4) = 0; /*0x8b665d*/
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8b6660*/
  ++unk_BA7D70; /*0x8b666b*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x8b6671*/
  ++unk_BA7F44; /*0x8b6677*/
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x8b667d*/
  ++unk_BA7F50; /*0x8b6683*/
  this->__vftable = (NiObjectVtbl *)&bhkCapsuleShape::`vftable'; /*0x8b6689*/
  ++unk_BA7FD4; /*0x8b668f*/
  return this; /*0x8b6697*/
}
