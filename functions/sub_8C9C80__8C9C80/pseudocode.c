bhkRefObject *sub_8C9C80()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c9ca4*/
  v1 = v0; /*0x8c9ca9*/
  if ( !v0 ) /*0x8c9cbc*/
    return 0; /*0x8c9d15*/
  bhkRefObject::bhkRefObject(v0); /*0x8c9cc0*/
  v1->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8c9cc5*/
  v1[1].__vftable = 0; /*0x8c9cd0*/
  v1[1].members.m_uiRefCount = 0; /*0x8c9cd7*/
  ++unk_BA7D70; /*0x8c9cde*/
  v1->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x8c9ce4*/
  ++unk_BA7F44; /*0x8c9cea*/
  v1->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x8c9cf0*/
  ++unk_BA7F50; /*0x8c9cf6*/
  v1->__vftable = (NiObjectVtbl *)&bhkConvexSweepShape::`vftable'; /*0x8c9cfc*/
  return v1; /*0x8c9d04*/
}
