NiTimeController *sub_74FDE0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi
  double v2; // st7

  v0 = (NiTimeController *)FormHeapAlloc(0x64u); /*0x74fde4*/
  v1 = v0; /*0x74fde9*/
  if ( !v0 ) /*0x74fdf2*/
    return 0; /*0x74fe21*/
  sub_75E540(v0); /*0x74fdf6*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterCtlr::`vftable'; /*0x74fdfb*/
  v1[1].members.m_fFrequency = 0.0; /*0x74fe01*/
  v2 = flt_A7DEB4; /*0x74fe04*/
  LOBYTE(v1[1].members.m_fHiKeyTime) = 0; /*0x74fe0a*/
  v1[1].members.m_fLoKeyTime = -v2; /*0x74fe0f*/
  v1[1].members.m_fStartTime = 0.0; /*0x74fe12*/
  v1[1].members.m_fLastTime = 0.0; /*0x74fe15*/
  v1[1].members.scaledTimeAccumulator = 0.0; /*0x74fe18*/
  return v1; /*0x74fe1d*/
}
