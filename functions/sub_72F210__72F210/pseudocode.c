NiObject *sub_72F210()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x48u);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiObject_constr(v0);
  v1->__vftable = (NiObjectVtbl *)&NiSkinData::`vftable';
  v1[1].__vftable = 0;
  v1[8].members.m_uiRefCount = 0;
  return v1;
}
