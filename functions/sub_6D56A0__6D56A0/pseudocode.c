NiTimeController *sub_6D56A0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x58u); /*0x6d56c5*/
  v1 = v0; /*0x6d56ca*/
  if ( !v0 ) /*0x6d56db*/
    return 0; /*0x6d5714*/
  NiTimeController::NiTimeController(v0); /*0x6d56df*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiUVController::`vftable'; /*0x6d56e4*/
  v1[1].members.m_fLoKeyTime = 0.0; /*0x6d56ea*/
  LOWORD(v1[1].members.m_fPhase) = 0; /*0x6d56ed*/
  v1[1].vtbl = 0; /*0x6d56f1*/
  *(_DWORD *)&v1[1].members.flags = 0; /*0x6d56f4*/
  v1[1].members.super.m_uiRefCount = 0; /*0x6d56f7*/
  v1[1].members.m_fFrequency = 0.0; /*0x6d56fa*/
  LOBYTE(v1[1].members.m_fHiKeyTime) = 0; /*0x6d56fd*/
  return v1; /*0x6d5702*/
}
