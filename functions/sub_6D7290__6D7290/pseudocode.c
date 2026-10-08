NiTimeController *__thiscall sub_6D7290(_DWORD *this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x58u); /*0x6d72b7*/
  v4 = 0; /*0x6d72c3*/
  if ( v3 ) /*0x6d72cb*/
    v4 = sub_6D7120(v3, 0, 0, 0); /*0x6d72d7*/
  j_NiSingleInterpController_CopyMembers(this, (int)v4, a2); /*0x6d72e9*/
  v4[1].members.super.m_uiRefCount = *(this + 0x10); /*0x6d72f1*/
  LOBYTE(v4[1].members.m_fFrequency) = *((_BYTE *)this + 0x48); /*0x6d72f7*/
  v4[1].members.m_fPhase = *(float *)(this + 0x13); /*0x6d72fd*/
  v4[1].members.m_fLoKeyTime = *(float *)(this + 0x14); /*0x6d7303*/
  return v4; /*0x6d7308*/
}
