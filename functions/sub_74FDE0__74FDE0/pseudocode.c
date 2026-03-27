NiTimeController *sub_74FDE0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi
  double v2; // st7

  v0 = (NiTimeController *)FormHeapAlloc(0x64u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_75E540(v0);
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterCtlr::`vftable';
  v1[1].members.m_fFrequency = 0.0;
  v2 = flt_A7DEB4;
  LOBYTE(v1[1].members.m_fHiKeyTime) = 0;
  v1[1].members.m_fLoKeyTime = -v2;
  v1[1].members.m_fStartTime = 0.0;
  v1[1].members.m_fLastTime = 0.0;
  v1[1].members.unk024 = 0.0;
  return v1;
}
