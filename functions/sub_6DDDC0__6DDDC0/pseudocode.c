NiTimeController *sub_6DDDC0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi
  double v2; // st7

  v0 = (NiTimeController *)FormHeapAlloc(0x6Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiTimeController::NiTimeController(v0);
  v1->vtbl = (NiTimeControllerVtbl *)&NiPathController::`vftable';
  v1[1].members.m_fFrequency = 0.0;
  v1[1].members.m_fPhase = 0.0;
  v1[1].members.m_fStartTime = 0.0;
  v1[1].members.super.m_uiRefCount = 0;
  v1[1].members.m_fLastTime = 0.0;
  *(_DWORD *)&v1[1].members.flags = 0;
  v1[1].members.unk028 = 0.0;
  *(_DWORD *)&v1[1].members.unk02C = 1;
  v2 = flt_A30634;
  LOWORD(v1[1].members.unk024) = 0;
  v1[1].members.m_fHiKeyTime = v2;
  v1[1].members.m_fLoKeyTime = 0.0;
  LOWORD(v1[1].vtbl) = 3;
  return v1;
}
