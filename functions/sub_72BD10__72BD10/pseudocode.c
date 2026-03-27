NiObject *sub_72BD10()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x2Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiObject_constr(v0);
  v1->__vftable = (NiObjectVtbl *)&NiSkinInstance::`vftable';
  v1[1].__vftable = 0;
  v1[1].members.m_uiRefCount = 0;
  v1[2].__vftable = 0;
  v1[2].members.m_uiRefCount = 0;
  v1[3].__vftable = (NiObjectVtbl *)0xFFFFFFFF;
  v1[3].members.m_uiRefCount = 0;
  v1[4].__vftable = 0;
  v1[4].members.m_uiRefCount = 0;
  v1[5].__vftable = 0;
  return v1;
}
