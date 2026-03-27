bhkRefObject *sub_8BA750()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x14u);
  v1 = v0;
  if ( !v0 )
    return 0;
  bhkRefObject::bhkRefObject(v0);
  v1->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable';
  v1[1].__vftable = 0;
  ++dword_BA7D34;
  v1->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable';
  ++dword_BA7F5C;
  LOBYTE(v1[1].members.m_uiRefCount) = 0;
  v1->__vftable = (NiObjectVtbl *)&bhkAabbPhantom::`vftable';
  ++dword_BA802C;
  LOBYTE(v1[1].members.m_uiRefCount) = 0;
  return v1;
}
