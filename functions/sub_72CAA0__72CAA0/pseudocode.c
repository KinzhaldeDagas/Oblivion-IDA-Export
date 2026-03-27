NiObject *sub_72CAA0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x10u);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiObject_constr(v0);
  v1->__vftable = (NiObjectVtbl *)&NiSkinPartition::`vftable';
  v1[1].members.m_uiRefCount = 0;
  return v1;
}
