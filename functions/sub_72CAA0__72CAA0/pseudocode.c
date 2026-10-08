NiObject *sub_72CAA0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x10u); /*0x72cac4*/
  v1 = v0; /*0x72cac9*/
  if ( !v0 ) /*0x72cadc*/
    return 0; /*0x72cb05*/
  NiObject_constr(v0); /*0x72cae0*/
  v1->__vftable = (NiObjectVtbl *)&NiSkinPartition::`vftable'; /*0x72cae5*/
  v1[1].members.m_uiRefCount = 0; /*0x72caeb*/
  return v1; /*0x72caf4*/
}
