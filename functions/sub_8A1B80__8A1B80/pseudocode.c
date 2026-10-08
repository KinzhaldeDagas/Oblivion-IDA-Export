bhkRefObject *sub_8A1B80()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8a1ba4*/
  v1 = v0; /*0x8a1ba9*/
  if ( !v0 ) /*0x8a1bbc*/
    return 0; /*0x8a1c03*/
  bhkRefObject::bhkRefObject(v0); /*0x8a1bc0*/
  v1->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8a1bca*/
  v1[1].__vftable = 0; /*0x8a1bd0*/
  v1[1].members.m_uiRefCount = 0; /*0x8a1bd7*/
  ++unk_BA7D70; /*0x8a1bde*/
  v1->__vftable = (NiObjectVtbl *)&bhkTransformShape::`vftable'; /*0x8a1be4*/
  ++unk_BA7D64; /*0x8a1bea*/
  return v1; /*0x8a1bf2*/
}
