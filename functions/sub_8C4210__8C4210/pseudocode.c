bhkRefObject *sub_8C4210()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c4234*/
  v1 = v0; /*0x8c4239*/
  if ( !v0 ) /*0x8c424c*/
    return 0; /*0x8c429f*/
  bhkRefObject::bhkRefObject(v0); /*0x8c4250*/
  v1->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8c4255*/
  v1[1].__vftable = 0; /*0x8c4260*/
  v1[1].members.m_uiRefCount = 0; /*0x8c4267*/
  ++unk_BA7D70; /*0x8c426e*/
  v1->__vftable = (NiObjectVtbl *)&bhkHeightFieldShape::`vftable'; /*0x8c4274*/
  ++unk_BA8400; /*0x8c427a*/
  v1->__vftable = (NiObjectVtbl *)&bhkPlaneShape::`vftable'; /*0x8c4280*/
  ++unk_BA810C; /*0x8c4286*/
  return v1; /*0x8c428e*/
}
