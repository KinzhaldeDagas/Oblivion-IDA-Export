DWORD __thiscall sub_47CF50(struct _RTL_CRITICAL_SECTION **this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // ecx

  NiEnterCriticalSection(*(this + 1), (int)"Resume_Thread"); /*0x47cf5b*/
  if ( *((_BYTE *)this + 0x18) ) /*0x47cf60*/
    return NiLeaveCriticalSection_0((LPCRITICAL_SECTION)*(this + 1)); /*0x47cf8e*/
  SetThreadPriority(*(this + 2), 0xFFFFFFFF); /*0x47cf6c*/
  v2 = (_RTL_CRITICAL_SECTION_0 *)*(this + 1); /*0x47cf72*/
  *((_BYTE *)this + 0x18) = 1; /*0x47cf75*/
  NiLeaveCriticalSection_0(v2); /*0x47cf79*/
  return ResumeThread(*(this + 2)); /*0x47cf88*/
}
