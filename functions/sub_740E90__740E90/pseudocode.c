NiObjectNET *sub_740E90()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi

  v0 = (NiObjectNET *)FormHeapAlloc(0x2Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiObjectNET::NiObjectNET(v0);
  v1->vtbl = (NiObjectVtbl **)&NiFogProperty::`vftable';
  *(float *)&v1[1].members.m_pcName = 0.0;
  *(float *)&v1[1].members.m_controller = 0.0;
  *(float *)&v1[1].members.m_extraDataList = 0.0;
  LOWORD(v1[1].vtbl) = 0;
  *(float *)&v1[1].members.super.m_uiRefCount = 1.0;
  v1[1].members.m_pcName = (const char *)dword_B3FA90;
  v1[1].members.m_controller = (NiInterpController *)dword_B3FA94;
  v1[1].members.m_extraDataList = (NiExtraData **)dword_B3FA98;
  return v1;
}
