NiObject *sub_751D10()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x34u); /*0x751d13*/
  v1 = v0; /*0x751d18*/
  if ( !v0 ) /*0x751d1f*/
    return 0; /*0x751d56*/
  sub_752BF0(v0); /*0x751d23*/
  *(float *)&v1[3].members.m_uiRefCount = 1.0; /*0x751d2a*/
  LOWORD(v1[3].__vftable) = 1; /*0x751d34*/
  *(float *)&v1[4].members.m_uiRefCount = 0.0; /*0x751d38*/
  LOWORD(v1[4].__vftable) = 1; /*0x751d3b*/
  *(float *)&v1[5].__vftable = 0.0; /*0x751d3f*/
  HIWORD(v1[4].__vftable) = 1; /*0x751d42*/
  *(float *)&v1[5].members.m_uiRefCount = 0.0; /*0x751d46*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysSpawnModifier::`vftable'; /*0x751d49*/
  *(float *)&v1[6].__vftable = 0.0; /*0x751d4f*/
  return v1; /*0x751d54*/
}
