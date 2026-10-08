bhkRefObject *sub_8B2BE0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8b2c04*/
  v1 = v0; /*0x8b2c09*/
  if ( !v0 ) /*0x8b2c1c*/
    return 0; /*0x8b2c5c*/
  bhkRefObject::bhkRefObject(v0); /*0x8b2c20*/
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8b2c2a*/
  v1[1].__vftable = 0; /*0x8b2c30*/
  ++unk_BA7D4C; /*0x8b2c37*/
  v1->__vftable = (NiObjectVtbl *)&bhkLimitedHingeConstraint::`vftable'; /*0x8b2c3d*/
  ++unk_BA7FC8; /*0x8b2c43*/
  return v1; /*0x8b2c4b*/
}
