NiObject *sub_756DA0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x28u); /*0x756da3*/
  v1 = v0; /*0x756da8*/
  if ( !v0 ) /*0x756daf*/
    return 0; /*0x756dd6*/
  sub_752BF0(v0); /*0x756db3*/
  *(float *)&v1[3].__vftable = 0.0; /*0x756dba*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysGrowFadeModifier::`vftable'; /*0x756dbd*/
  *(float *)&v1[4].__vftable = 0.0; /*0x756dc3*/
  LOWORD(v1[3].members.m_uiRefCount) = 0; /*0x756dc6*/
  LOWORD(v1[4].members.m_uiRefCount) = 0; /*0x756dcc*/
  return v1; /*0x756dd4*/
}
