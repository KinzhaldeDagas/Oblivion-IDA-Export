bhkRefObject *sub_8C2690()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c26b4*/
  v1 = v0; /*0x8c26b9*/
  if ( !v0 ) /*0x8c26cc*/
    return 0; /*0x8c270c*/
  bhkRefObject::bhkRefObject(v0); /*0x8c26d0*/
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c26da*/
  v1[1].__vftable = 0; /*0x8c26e0*/
  ++unk_BA7D4C; /*0x8c26e7*/
  v1->__vftable = (NiObjectVtbl *)&bhkHingeConstraint::`vftable'; /*0x8c26ed*/
  ++unk_BA80DC; /*0x8c26f3*/
  return v1; /*0x8c26fb*/
}
