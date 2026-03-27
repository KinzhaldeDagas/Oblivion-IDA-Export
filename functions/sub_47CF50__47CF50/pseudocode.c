DWORD __thiscall sub_47CF50(struct _RTL_CRITICAL_SECTION **this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // ecx

  NiEnterCriticalSection(*(this + 1), (int)"Resume_Thread");
  if ( *((_BYTE *)this + 0x18) )
    return NiLeaveCriticalSection_0((LPCRITICAL_SECTION)*(this + 1));
  SetThreadPriority(*(this + 2), 0xFFFFFFFF);
  v2 = (_RTL_CRITICAL_SECTION_0 *)*(this + 1);
  *((_BYTE *)this + 0x18) = 1;
  NiLeaveCriticalSection_0(v2);
  return ResumeThread(*(this + 2));
}
