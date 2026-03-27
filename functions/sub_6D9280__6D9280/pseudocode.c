NiTimeController *__thiscall sub_6D9280(float *this, int *a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x44u);
  v4 = v3;
  if ( v3 )
  {
    NiTimeController::NiTimeController(v3);
    v4[1].members.super.m_uiRefCount = 0;
    v4[1].vtbl = 0;
    v4->vtbl = (NiTimeControllerVtbl *)&NiRollController::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_6EC910(this, v4, a2);
  return v4;
}
