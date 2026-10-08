NiTimeController *sub_6D1520()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x5Cu); /*0x6d1545*/
  v1 = v0; /*0x6d154a*/
  if ( !v0 ) /*0x6d155b*/
    return 0; /*0x6d15b0*/
  NiInterpController_Construct(v0); /*0x6d155f*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiGeomMorpherController::`vftable'; /*0x6d1564*/
  v1[1].members.super.m_uiRefCount = (UInt32)&NiTArray<float>::`vftable'; /*0x6d156a*/
  LOWORD(v1[1].members.m_fFrequency) = 0; /*0x6d1571*/
  HIWORD(v1[1].members.m_fPhase) = 1; /*0x6d1575*/
  HIWORD(v1[1].members.m_fFrequency) = 0; /*0x6d157b*/
  LOWORD(v1[1].members.m_fPhase) = 0; /*0x6d157f*/
  *(_DWORD *)&v1[1].members.flags = 0; /*0x6d1583*/
  v1[1].members.m_fLoKeyTime = 0.0; /*0x6d1586*/
  v1[1].members.m_fHiKeyTime = 0.0; /*0x6d1589*/
  LOWORD(v1[1].vtbl) = 0; /*0x6d158c*/
  LOBYTE(v1[1].members.m_fStartTime) = 0; /*0x6d1590*/
  BYTE1(v1[1].members.m_fStartTime) = 0; /*0x6d1593*/
  BYTE2(v1[1].members.m_fStartTime) = 0; /*0x6d1596*/
  HIBYTE(v1[1].members.m_fStartTime) = 0; /*0x6d1599*/
  return v1; /*0x6d159e*/
}
