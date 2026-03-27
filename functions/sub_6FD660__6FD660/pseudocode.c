NiTimeController *__thiscall sub_6FD660(float *this, int *a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x54u);
  v4 = 0;
  if ( v3 )
    v4 = sub_6FD530(v3);
  sub_715D80(this, (int)v4, a2);
  v4[1].vtbl = *(NiTimeControllerVtbl **)(this + 0xF);
  v4[1].members.super.m_uiRefCount = *(UInt32 *)(this + 0x10);
  return v4;
}
