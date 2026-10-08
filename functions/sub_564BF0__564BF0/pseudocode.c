// Treetop collision helper: constructs bhkBoxShape from a vector supplied by 0x565510. The caller halves stock SpeedTree box dimensions first and then wraps the box in a translated bhkTransformShape.
bhkRefObject *__thiscall OB_bhkBoxShape_CtorHalfExtents_010201A0(bhkRefObject *this, __m128 *a2)
{
  bhkRefObject::bhkRefObject(this); /*0x564c18*/
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x564c1d*/
  *((_DWORD *)this + 3) = 0; /*0x564c2a*/
  *((_DWORD *)this + 4) = 0; /*0x564c2d*/
  ++unk_BA7D70; /*0x564c30*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x564c36*/
  ++unk_BA7F44; /*0x564c3c*/
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x564c42*/
  ++unk_BA7F50; /*0x564c48*/
  this->__vftable = (NiObjectVtbl *)&bhkBoxShape::`vftable'; /*0x564c56*/
  ++unk_BA7FF4; /*0x564c5c*/
  OB_bhkBoxShape_SetHalfExtents_010201A0(this, a2); /*0x564c65*/
  return this; /*0x564c6c*/
}
