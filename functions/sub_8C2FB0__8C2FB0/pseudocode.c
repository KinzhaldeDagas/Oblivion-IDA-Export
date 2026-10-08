bhkRefObject *sub_8C2FB0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c2fd4*/
  v1 = v0; /*0x8c2fd9*/
  if ( !v0 ) /*0x8c2fec*/
    return 0; /*0x8c302c*/
  bhkRefObject::bhkRefObject(v0); /*0x8c2ff0*/
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c2ffa*/
  v1[1].__vftable = 0; /*0x8c3000*/
  ++unk_BA7D4C; /*0x8c3007*/
  v1->__vftable = (NiObjectVtbl *)&bhkBallAndSocketConstraint::`vftable'; /*0x8c300d*/
  ++unk_BA80E8; /*0x8c3013*/
  return v1; /*0x8c301b*/
}
