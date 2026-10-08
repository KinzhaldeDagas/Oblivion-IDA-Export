bhkRefObject *sub_8BF6C0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8bf6e4*/
  v1 = v0; /*0x8bf6e9*/
  if ( !v0 ) /*0x8bf6fc*/
    return 0; /*0x8bf73c*/
  bhkRefObject::bhkRefObject(v0); /*0x8bf700*/
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8bf70a*/
  v1[1].__vftable = 0; /*0x8bf710*/
  ++unk_BA7D4C; /*0x8bf717*/
  v1->__vftable = (NiObjectVtbl *)&bhkBreakableConstraint::`vftable'; /*0x8bf71d*/
  ++unk_BA8094; /*0x8bf723*/
  return v1; /*0x8bf72b*/
}
