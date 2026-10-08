bhkRefObject *sub_8C05C0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c05e4*/
  v1 = v0; /*0x8c05e9*/
  if ( !v0 ) /*0x8c05fc*/
    return 0; /*0x8c063c*/
  bhkRefObject::bhkRefObject(v0); /*0x8c0600*/
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c060a*/
  v1[1].__vftable = 0; /*0x8c0610*/
  ++unk_BA7D4C; /*0x8c0617*/
  v1->__vftable = (NiObjectVtbl *)&bhkStiffSpringConstraint::`vftable'; /*0x8c061d*/
  ++unk_BA80AC; /*0x8c0623*/
  return v1; /*0x8c062b*/
}
