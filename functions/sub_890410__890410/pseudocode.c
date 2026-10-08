bhkRefObject *__thiscall OB_bhkListShape_CtorFromCinfo_010201A0(
        bhkRefObject *self,
        const OB_CollisionListCinfo_010201A0 *info)
{
  bhkRefObject::bhkRefObject(self); /*0x890438*/
  self->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x89043f*/
  *((_DWORD *)self + 3) = 0; /*0x890445*/
  *((_DWORD *)self + 4) = 0; /*0x890448*/
  ++unk_BA7D70; /*0x89044b*/
  self->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable'; /*0x890452*/
  ++unk_BA816C; /*0x890458*/
  self->__vftable = (NiObjectVtbl *)&bhkListShape::`vftable'; /*0x89046a*/
  OB_bhkListShape_BuildFromCinfo_010201A0(self, info); /*0x890470*/
  ++unk_BA7D58; /*0x890475*/
  return self; /*0x89047e*/
}
