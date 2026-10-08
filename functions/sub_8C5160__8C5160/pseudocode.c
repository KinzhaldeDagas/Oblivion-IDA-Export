bhkRefObject *sub_8C5160()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c5184*/
  v1 = v0; /*0x8c5189*/
  if ( !v0 ) /*0x8c519c*/
    return 0; /*0x8c51ef*/
  bhkRefObject::bhkRefObject(v0); /*0x8c51a0*/
  v1->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8c51a5*/
  v1[1].__vftable = 0; /*0x8c51b0*/
  v1[1].members.m_uiRefCount = 0; /*0x8c51b7*/
  ++unk_BA7D70; /*0x8c51be*/
  v1->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable'; /*0x8c51c4*/
  ++unk_BA816C; /*0x8c51ca*/
  v1->__vftable = (NiObjectVtbl *)&bhkPackedNiTriStripsShape::`vftable'; /*0x8c51d0*/
  ++unk_BA8120; /*0x8c51d6*/
  return v1; /*0x8c51de*/
}
