bhkRefObject *sub_8BE8E0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8be904*/
  v1 = v0; /*0x8be909*/
  if ( !v0 ) /*0x8be91c*/
    return 0; /*0x8be968*/
  bhkRefObject::bhkRefObject(v0); /*0x8be920*/
  v1->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x8be925*/
  v1[1].__vftable = 0; /*0x8be930*/
  ++unk_BA7D00; /*0x8be937*/
  v1->__vftable = (NiObjectVtbl *)&bhkUnaryAction::`vftable'; /*0x8be93d*/
  ++unk_BA7D0C; /*0x8be943*/
  v1->__vftable = (NiObjectVtbl *)&bhkMotorAction::`vftable'; /*0x8be949*/
  ++unk_BA807C; /*0x8be94f*/
  return v1; /*0x8be957*/
}
