NiObject *sub_6E8740()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x6e8765*/
  v1 = v0; /*0x6e876a*/
  if ( !v0 ) /*0x6e877b*/
    return 0; /*0x6e87aa*/
  NiObject_constr(v0); /*0x6e877f*/
  v1->__vftable = (NiObjectVtbl *)&NiBoolData::`vftable'; /*0x6e8784*/
  v1[1].__vftable = 0; /*0x6e878a*/
  v1[1].members.m_uiRefCount = 0; /*0x6e878d*/
  v1[2].__vftable = 0; /*0x6e8790*/
  LOBYTE(v1[2].members.m_uiRefCount) = 0; /*0x6e8793*/
  return v1; /*0x6e8798*/
}
