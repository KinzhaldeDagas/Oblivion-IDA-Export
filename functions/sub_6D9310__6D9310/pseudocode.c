NiTimeController *sub_6D9310()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x44u); /*0x6d9334*/
  v1 = v0; /*0x6d9339*/
  if ( !v0 ) /*0x6d934c*/
    return 0; /*0x6d937c*/
  NiTimeController::NiTimeController(v0); /*0x6d9350*/
  v1[1].members.super.m_uiRefCount = 0; /*0x6d9355*/
  v1[1].vtbl = 0; /*0x6d935c*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiRollController::`vftable'; /*0x6d9363*/
  return v1; /*0x6d936b*/
}
