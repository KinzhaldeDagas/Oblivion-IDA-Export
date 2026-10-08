bhkRefObject *sub_8BEFC0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8befe4*/
  v1 = v0; /*0x8befe9*/
  if ( !v0 ) /*0x8beffc*/
    return 0; /*0x8bf03c*/
  bhkRefObject::bhkRefObject(v0); /*0x8bf000*/
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8bf00a*/
  v1[1].__vftable = 0; /*0x8bf010*/
  ++unk_BA7D4C; /*0x8bf017*/
  v1->__vftable = (NiObjectVtbl *)&bhkMalleableConstraint::`vftable'; /*0x8bf01d*/
  ++unk_BA8088; /*0x8bf023*/
  return v1; /*0x8bf02b*/
}
