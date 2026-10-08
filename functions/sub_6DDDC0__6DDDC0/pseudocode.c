NiTimeController *sub_6DDDC0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi
  double v2; // st7

  v0 = (NiTimeController *)FormHeapAlloc(0x6Cu); /*0x6ddde5*/
  v1 = v0; /*0x6dddea*/
  if ( !v0 ) /*0x6dddfb*/
    return 0; /*0x6dde52*/
  NiTimeController::NiTimeController(v0); /*0x6dddff*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPathController::`vftable'; /*0x6dde04*/
  v1[1].members.m_fFrequency = 0.0; /*0x6dde0a*/
  v1[1].members.m_fPhase = 0.0; /*0x6dde0d*/
  v1[1].members.m_fStartTime = 0.0; /*0x6dde12*/
  v1[1].members.super.m_uiRefCount = 0; /*0x6dde15*/
  v1[1].members.m_fLastTime = 0.0; /*0x6dde18*/
  *(_DWORD *)&v1[1].members.flags = 0; /*0x6dde1b*/
  v1[1].members.cachedScaledTime = 0.0; /*0x6dde1e*/
  *(_DWORD *)&v1[1].members.computeScaledTimeOnUpdate = 1; /*0x6dde21*/
  v2 = kTerrainLODQuadRayDirectionZ; /*0x6dde28*/
  LOWORD(v1[1].members.scaledTimeAccumulator) = 0; /*0x6dde2e*/
  v1[1].members.m_fHiKeyTime = v2; /*0x6dde32*/
  v1[1].members.m_fLoKeyTime = 0.0; /*0x6dde35*/
  LOWORD(v1[1].vtbl) = 3; /*0x6dde38*/
  return v1; /*0x6dde40*/
}
