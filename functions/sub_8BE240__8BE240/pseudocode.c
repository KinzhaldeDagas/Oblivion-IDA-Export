bhkRefObject *sub_8BE240()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8be264*/
  v1 = v0; /*0x8be269*/
  if ( !v0 ) /*0x8be27c*/
    return 0; /*0x8be2c8*/
  bhkRefObject::bhkRefObject(v0); /*0x8be280*/
  v1->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x8be285*/
  v1[1].__vftable = 0; /*0x8be290*/
  ++unk_BA7D00; /*0x8be297*/
  v1->__vftable = (NiObjectVtbl *)&bhkBinaryAction::`vftable'; /*0x8be29d*/
  ++unk_BA7D40; /*0x8be2a3*/
  v1->__vftable = (NiObjectVtbl *)&bhkDashpotAction::`vftable'; /*0x8be2a9*/
  ++unk_BA8070; /*0x8be2af*/
  return v1; /*0x8be2b7*/
}
