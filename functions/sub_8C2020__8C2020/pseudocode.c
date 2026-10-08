bhkRefObject *sub_8C2020()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c2044*/
  v1 = v0; /*0x8c2049*/
  if ( !v0 ) /*0x8c205c*/
    return 0; /*0x8c20a8*/
  bhkRefObject::bhkRefObject(v0); /*0x8c2060*/
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c2065*/
  v1[1].__vftable = 0; /*0x8c2070*/
  ++unk_BA7D4C; /*0x8c2077*/
  v1->__vftable = (NiObjectVtbl *)&bhkGenericConstraint::`vftable'; /*0x8c207d*/
  ++unk_BA8354; /*0x8c2083*/
  v1->__vftable = (NiObjectVtbl *)&bhkFixedConstraint::`vftable'; /*0x8c2089*/
  ++unk_BA80D0; /*0x8c208f*/
  return v1; /*0x8c2097*/
}
