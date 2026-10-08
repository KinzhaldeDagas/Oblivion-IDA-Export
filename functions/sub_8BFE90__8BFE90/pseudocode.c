bhkRefObject *sub_8BFE90()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8bfeb4*/
  v1 = v0; /*0x8bfeb9*/
  if ( !v0 ) /*0x8bfecc*/
    return 0; /*0x8bff0c*/
  bhkRefObject::bhkRefObject(v0); /*0x8bfed0*/
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8bfeda*/
  v1[1].__vftable = 0; /*0x8bfee0*/
  ++unk_BA7D4C; /*0x8bfee7*/
  v1->__vftable = (NiObjectVtbl *)&bhkWheelConstraint::`vftable'; /*0x8bfeed*/
  ++unk_BA80A0; /*0x8bfef3*/
  return v1; /*0x8bfefb*/
}
