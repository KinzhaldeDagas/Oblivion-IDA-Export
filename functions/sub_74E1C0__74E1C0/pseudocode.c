NiObject *sub_74E1C0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x38u); /*0x74e1c3*/
  v1 = v0; /*0x74e1c8*/
  if ( !v0 ) /*0x74e1cf*/
    return 0; /*0x74e212*/
  sub_752BF0(v0); /*0x74e1d3*/
  *(float *)&v1[3].__vftable = 0.0; /*0x74e1da*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysRotationModifier::`vftable'; /*0x74e1dd*/
  *(float *)&v1[3].members.m_uiRefCount = 0.0; /*0x74e1e3*/
  *(float *)&v1[4].__vftable = 0.0; /*0x74e1e6*/
  *(float *)&v1[4].members.m_uiRefCount = 0.0; /*0x74e1e9*/
  v1[5].__vftable = (NiObjectVtbl *)LODWORD(stru_B258D0.x); /*0x74e1f1*/
  v1[5].members.m_uiRefCount = LODWORD(stru_B258D0.y); /*0x74e1fa*/
  v1[6].__vftable = (NiObjectVtbl *)LODWORD(stru_B258D0.z); /*0x74e203*/
  LOBYTE(v1[6].members.m_uiRefCount) = 1; /*0x74e206*/
  BYTE1(v1[6].members.m_uiRefCount) = 0; /*0x74e20a*/
  return v1; /*0x74e210*/
}
