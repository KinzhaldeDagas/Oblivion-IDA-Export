NiTimeController *__thiscall sub_6D9280(float *this, int *a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x44u); /*0x6d92a7*/
  v4 = v3; /*0x6d92ac*/
  if ( v3 ) /*0x6d92bf*/
  {
    NiTimeController::NiTimeController(v3); /*0x6d92c3*/
    v4[1].members.super.m_uiRefCount = 0; /*0x6d92c8*/
    v4[1].vtbl = 0; /*0x6d92cf*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiRollController::`vftable'; /*0x6d92d6*/
  }
  else
  {
    v4 = 0; /*0x6d92de*/
  }
  sub_6EC910(this, v4, a2); /*0x6d92f0*/
  return v4; /*0x6d92f7*/
}
