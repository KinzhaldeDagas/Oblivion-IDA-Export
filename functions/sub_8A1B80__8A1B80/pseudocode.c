bhkRefObject *sub_8A1B80()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u);
  v1 = v0;
  if ( !v0 )
    return 0;
  bhkRefObject::bhkRefObject(v0);
  v1->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
  v1[1].__vftable = 0;
  v1[1].members.m_uiRefCount = 0;
  ++dword_BA7D70;
  v1->__vftable = (NiObjectVtbl *)&bhkTransformShape::`vftable';
  ++dword_BA7D64;
  return v1;
}
