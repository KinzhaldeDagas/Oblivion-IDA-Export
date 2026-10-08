NiObject *sub_75BD90()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x20u); /*0x75bd93*/
  v1 = v0; /*0x75bd98*/
  if ( !v0 ) /*0x75bd9f*/
    return 0; /*0x75bdbd*/
  sub_752BF0(v0); /*0x75bda3*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysAgeDeathModifier::`vftable'; /*0x75bda8*/
  LOBYTE(v1[3].__vftable) = 0; /*0x75bdae*/
  v1[3].members.m_uiRefCount = 0; /*0x75bdb2*/
  return v1; /*0x75bdbb*/
}
