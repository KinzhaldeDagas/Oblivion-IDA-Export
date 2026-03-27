NiTimeController *sub_6D56A0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x58u);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiTimeController::NiTimeController(v0);
  v1->vtbl = (NiTimeControllerVtbl *)&NiUVController::`vftable';
  v1[1].members.m_fLoKeyTime = 0.0;
  LOWORD(v1[1].members.m_fPhase) = 0;
  v1[1].vtbl = 0;
  *(_DWORD *)&v1[1].members.flags = 0;
  v1[1].members.super.m_uiRefCount = 0;
  v1[1].members.m_fFrequency = 0.0;
  LOBYTE(v1[1].members.m_fHiKeyTime) = 0;
  return v1;
}
