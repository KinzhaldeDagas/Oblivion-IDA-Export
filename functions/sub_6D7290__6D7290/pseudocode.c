NiTimeController *__thiscall sub_6D7290(_DWORD *this, int a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x58u);
  v4 = 0;
  if ( v3 )
    v4 = sub_6D7120(v3, 0, 0, 0);
  sub_6ECB60(v4, a2);
  v4[1].members.super.m_uiRefCount = *(this + 0x10);
  LOBYTE(v4[1].members.m_fFrequency) = *((_BYTE *)this + 0x48);
  v4[1].members.m_fPhase = *(float *)(this + 0x13);
  v4[1].members.m_fLoKeyTime = *(float *)(this + 0x14);
  return v4;
}
