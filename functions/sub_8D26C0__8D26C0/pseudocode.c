bhkRefObject *__thiscall sub_8D26C0(bhkRefObject *this, float *a2)
{
  bhkRefObject::bhkRefObject(this); /*0x8d26e9*/
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8d26ee*/
  *((_DWORD *)this + 3) = 0; /*0x8d26fb*/
  *((_DWORD *)this + 4) = 0; /*0x8d26fe*/
  ++unk_BA7D70; /*0x8d2701*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x8d2707*/
  ++unk_BA7F44; /*0x8d270d*/
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x8d2713*/
  ++unk_BA7F50; /*0x8d2719*/
  this->__vftable = (NiObjectVtbl *)&bhkConvexVerticesShape::`vftable'; /*0x8d271f*/
  ++unk_BA814C; /*0x8d2725*/
  this->__vftable = (NiObjectVtbl *)&bhkCharControllerShape::`vftable'; /*0x8d2736*/
  sub_8D25A0(this, a2); /*0x8d273c*/
  ++unk_BA814C; /*0x8d2741*/
  return this; /*0x8d2749*/
}
