bhkRefObject *sub_8A0EF0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8a0f14*/
  v1 = v0; /*0x8a0f19*/
  if ( !v0 ) /*0x8a0f2c*/
    return 0; /*0x8a0f7f*/
  bhkRefObject::bhkRefObject(v0); /*0x8a0f30*/
  v1->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8a0f35*/
  v1[1].__vftable = 0; /*0x8a0f40*/
  v1[1].members.m_uiRefCount = 0; /*0x8a0f47*/
  ++unk_BA7D70; /*0x8a0f4e*/
  v1->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable'; /*0x8a0f54*/
  ++unk_BA816C; /*0x8a0f5a*/
  v1->__vftable = (NiObjectVtbl *)&bhkListShape::`vftable'; /*0x8a0f60*/
  ++unk_BA7D58; /*0x8a0f66*/
  return v1; /*0x8a0f6e*/
}
