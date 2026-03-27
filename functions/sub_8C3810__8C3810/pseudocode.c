float *__thiscall sub_8C3810(float *this, int a2, int a3, float a4)
{
  sub_914420(this, a2, a3);
  *(_DWORD *)this = &hkScaledMoppBvTreeShape::`vftable';
  EnterCriticalSection(&stru_BA8380);
  dword_BA83F8 = GetCurrentThreadId();
  ++dword_BA83FC;
  *(this + 5) = a4;
  if ( dword_BA83FC-- == 1 )
    dword_BA83F8 = 0;
  LeaveCriticalSection(&stru_BA8380);
  return this;
}
