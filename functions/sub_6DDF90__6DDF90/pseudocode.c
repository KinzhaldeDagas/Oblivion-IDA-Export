NiObject *sub_6DDF90()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x6ddfb5*/
  v1 = v0; /*0x6ddfba*/
  if ( !v0 ) /*0x6ddfcb*/
    return 0; /*0x6ddffa*/
  NiObject_constr(v0); /*0x6ddfcf*/
  v1->__vftable = (NiObjectVtbl *)&NiMorphData::`vftable'; /*0x6ddfd4*/
  v1[1].__vftable = 0; /*0x6ddfda*/
  v1[1].members.m_uiRefCount = 0; /*0x6ddfdd*/
  v1[2].__vftable = 0; /*0x6ddfe0*/
  LOBYTE(v1[2].members.m_uiRefCount) = 0; /*0x6ddfe3*/
  return v1; /*0x6ddfe8*/
}
