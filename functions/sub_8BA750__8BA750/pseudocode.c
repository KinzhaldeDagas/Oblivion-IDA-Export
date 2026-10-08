bhkRefObject *sub_8BA750()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8ba775*/
  v1 = v0; /*0x8ba77a*/
  if ( !v0 ) /*0x8ba78b*/
    return 0; /*0x8ba7da*/
  bhkRefObject::bhkRefObject(v0); /*0x8ba78f*/
  v1->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable'; /*0x8ba794*/
  v1[1].__vftable = 0; /*0x8ba79f*/
  ++unk_BA7D34; /*0x8ba7a2*/
  v1->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable'; /*0x8ba7a8*/
  ++unk_BA7F5C; /*0x8ba7ae*/
  LOBYTE(v1[1].members.m_uiRefCount) = 0; /*0x8ba7b4*/
  v1->__vftable = (NiObjectVtbl *)&bhkAabbPhantom::`vftable'; /*0x8ba7b7*/
  ++unk_BA802C; /*0x8ba7bd*/
  LOBYTE(v1[1].members.m_uiRefCount) = 0; /*0x8ba7c3*/
  return v1; /*0x8ba7c8*/
}
