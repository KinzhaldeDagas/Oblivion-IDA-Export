bhkRefObject *sub_8C62B0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c62d4*/
  v1 = v0; /*0x8c62d9*/
  if ( !v0 ) /*0x8c62ec*/
    return 0; /*0x8c633f*/
  bhkRefObject::bhkRefObject(v0); /*0x8c62f0*/
  v1->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8c62f5*/
  v1[1].__vftable = 0; /*0x8c6300*/
  v1[1].members.m_uiRefCount = 0; /*0x8c6307*/
  ++unk_BA7D70; /*0x8c630e*/
  v1->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable'; /*0x8c6314*/
  ++unk_BA816C; /*0x8c631a*/
  v1->__vftable = (NiObjectVtbl *)&bhkNiTriStripsShape::`vftable'; /*0x8c6320*/
  ++unk_BA812C; /*0x8c6326*/
  return v1; /*0x8c632e*/
}
