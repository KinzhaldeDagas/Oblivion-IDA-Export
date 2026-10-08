bhkRefObject *sub_8B7470()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8b7494*/
  v1 = v0; /*0x8b7499*/
  if ( !v0 ) /*0x8b74ac*/
    return 0; /*0x8b74ff*/
  bhkRefObject::bhkRefObject(v0); /*0x8b74b0*/
  v1->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8b74b5*/
  v1[1].__vftable = 0; /*0x8b74c0*/
  v1[1].members.m_uiRefCount = 0; /*0x8b74c7*/
  ++unk_BA7D70; /*0x8b74ce*/
  v1->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x8b74d4*/
  ++unk_BA7F44; /*0x8b74da*/
  v1->__vftable = (NiObjectVtbl *)&bhkMultiSphereShape::`vftable'; /*0x8b74e0*/
  ++unk_BA7FE8; /*0x8b74e6*/
  return v1; /*0x8b74ee*/
}
