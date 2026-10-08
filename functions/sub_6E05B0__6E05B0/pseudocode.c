NiTimeController *sub_6E05B0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x44u); /*0x6e05d5*/
  v1 = v0; /*0x6e05da*/
  if ( !v0 ) /*0x6e05eb*/
    return 0; /*0x6e0618*/
  NiTimeController::NiTimeController(v0); /*0x6e05ef*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiLookAtController::`vftable'; /*0x6e05f4*/
  v1[1].members.super.m_uiRefCount = 0; /*0x6e05fa*/
  LOWORD(v1[1].vtbl) = 0; /*0x6e05fd*/
  v1->members.computeScaledTimeOnUpdate = 0; /*0x6e0601*/
  return v1; /*0x6e0606*/
}
