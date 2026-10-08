NiObject *sub_72F210()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x48u); /*0x72f234*/
  v1 = v0; /*0x72f239*/
  if ( !v0 ) /*0x72f24c*/
    return 0; /*0x72f27c*/
  NiObject_constr(v0); /*0x72f250*/
  v1->__vftable = (NiObjectVtbl *)&NiSkinData::`vftable'; /*0x72f255*/
  v1[1].__vftable = 0; /*0x72f25b*/
  v1[8].members.m_uiRefCount = 0; /*0x72f262*/
  return v1; /*0x72f26b*/
}
