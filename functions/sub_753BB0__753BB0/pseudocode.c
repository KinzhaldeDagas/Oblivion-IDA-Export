NiTimeController *sub_753BB0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x3Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiTimeController::NiTimeController(v0);
  v1->members.m_fHiKeyTime = 0.0;
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysUpdateCtlr::`vftable';
  v1->members.m_fLoKeyTime = 0.0;
  return v1;
}
