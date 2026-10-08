bhkRefObject *sub_8C33C0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c33e4*/
  v1 = v0; /*0x8c33e9*/
  if ( !v0 ) /*0x8c33fc*/
    return 0; /*0x8c344f*/
  bhkRefObject::bhkRefObject(v0); /*0x8c3400*/
  v1->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8c3405*/
  v1[1].__vftable = 0; /*0x8c3410*/
  v1[1].members.m_uiRefCount = 0; /*0x8c3417*/
  ++unk_BA7D70; /*0x8c341e*/
  v1->__vftable = (NiObjectVtbl *)&bhkBvTreeShape::`vftable'; /*0x8c3424*/
  ++unk_BA7F98; /*0x8c342a*/
  v1->__vftable = (NiObjectVtbl *)&bhkMoppBvTreeShape::`vftable'; /*0x8c3430*/
  ++unk_BA80F4; /*0x8c3436*/
  return v1; /*0x8c343e*/
}
