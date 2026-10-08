NiTimeController *sub_753BB0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x3Cu); /*0x753bb3*/
  v1 = v0; /*0x753bb8*/
  if ( !v0 ) /*0x753bbf*/
    return 0; /*0x753bda*/
  NiTimeController::NiTimeController(v0); /*0x753bc3*/
  v1->members.m_fHiKeyTime = 0.0; /*0x753bca*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysUpdateCtlr::`vftable'; /*0x753bcd*/
  v1->members.m_fLoKeyTime = 0.0; /*0x753bd3*/
  return v1; /*0x753bd8*/
}
