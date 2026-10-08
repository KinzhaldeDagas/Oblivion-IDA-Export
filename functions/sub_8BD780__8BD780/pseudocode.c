bhkRefObject *sub_8BD780()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8bd7a4*/
  v1 = v0; /*0x8bd7a9*/
  if ( !v0 ) /*0x8bd7bc*/
    return 0; /*0x8bd808*/
  bhkRefObject::bhkRefObject(v0); /*0x8bd7c0*/
  v1->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x8bd7c5*/
  v1[1].__vftable = 0; /*0x8bd7d0*/
  ++unk_BA7D00; /*0x8bd7d7*/
  v1->__vftable = (NiObjectVtbl *)&bhkBinaryAction::`vftable'; /*0x8bd7dd*/
  ++unk_BA7D40; /*0x8bd7e3*/
  v1->__vftable = (NiObjectVtbl *)&bhkSpringAction::`vftable'; /*0x8bd7e9*/
  ++unk_BA8058; /*0x8bd7ef*/
  return v1; /*0x8bd7f7*/
}
