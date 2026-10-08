float *__thiscall sub_8C3810(float *this, int a2, int a3, float a4)
{
  sub_914420(this, a2, a3); /*0x8c381f*/
  *(_DWORD *)this = &hkScaledMoppBvTreeShape::`vftable'; /*0x8c3829*/
  EnterCriticalSection(&unk_BA8380); /*0x8c382f*/
  unk_BA83F8 = GetCurrentThreadId(); /*0x8c383f*/
  ++unk_BA83FC; /*0x8c3849*/
  *(this + 5) = a4; /*0x8c384f*/
  if ( unk_BA83FC-- == 1 ) /*0x8c3852*/
    unk_BA83F8 = 0; /*0x8c385a*/
  LeaveCriticalSection(&unk_BA8380); /*0x8c3869*/
  return this; /*0x8c3871*/
}
