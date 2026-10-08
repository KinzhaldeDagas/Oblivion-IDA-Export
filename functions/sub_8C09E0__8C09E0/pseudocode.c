bhkRefObject *sub_8C09E0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c0a04*/
  v1 = v0; /*0x8c0a09*/
  if ( !v0 ) /*0x8c0a1c*/
    return 0; /*0x8c0a5c*/
  bhkRefObject::bhkRefObject(v0); /*0x8c0a20*/
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c0a2a*/
  v1[1].__vftable = 0; /*0x8c0a30*/
  ++unk_BA7D4C; /*0x8c0a37*/
  v1->__vftable = (NiObjectVtbl *)&bhkRagdollConstraint::`vftable'; /*0x8c0a3d*/
  ++unk_BA80B8; /*0x8c0a43*/
  return v1; /*0x8c0a4b*/
}
