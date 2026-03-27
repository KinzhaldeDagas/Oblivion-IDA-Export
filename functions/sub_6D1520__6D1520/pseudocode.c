NiTimeController *sub_6D1520()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x5Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_6D04E0(v0);
  v1->vtbl = (NiTimeControllerVtbl *)&NiGeomMorpherController::`vftable';
  v1[1].members.super.m_uiRefCount = (UInt32)&NiTArray<float>::`vftable';
  LOWORD(v1[1].members.m_fFrequency) = 0;
  HIWORD(v1[1].members.m_fPhase) = 1;
  HIWORD(v1[1].members.m_fFrequency) = 0;
  LOWORD(v1[1].members.m_fPhase) = 0;
  *(_DWORD *)&v1[1].members.flags = 0;
  v1[1].members.m_fLoKeyTime = 0.0;
  v1[1].members.m_fHiKeyTime = 0.0;
  LOWORD(v1[1].vtbl) = 0;
  LOBYTE(v1[1].members.m_fStartTime) = 0;
  BYTE1(v1[1].members.m_fStartTime) = 0;
  BYTE2(v1[1].members.m_fStartTime) = 0;
  HIBYTE(v1[1].members.m_fStartTime) = 0;
  return v1;
}
