NiTimeController *__thiscall sub_6FD660(float *this, int *a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x54u); /*0x6fd687*/
  v4 = 0; /*0x6fd693*/
  if ( v3 ) /*0x6fd69b*/
    v4 = sub_6FD530(v3); /*0x6fd6a4*/
  NiTimeController_CopyMembers(this, (int)v4, a2); /*0x6fd6b6*/
  v4[1].vtbl = *(NiTimeControllerVtbl **)(this + 0xF); /*0x6fd6be*/
  v4[1].members.super.m_uiRefCount = *(UInt32 *)(this + 0x10); /*0x6fd6c4*/
  return v4; /*0x6fd6c9*/
}
