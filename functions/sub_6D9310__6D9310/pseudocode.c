NiTimeController *sub_6D9310()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x44u);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiTimeController::NiTimeController(v0);
  v1[1].members.super.m_uiRefCount = 0;
  v1[1].vtbl = 0;
  v1->vtbl = (NiTimeControllerVtbl *)&NiRollController::`vftable';
  return v1;
}
