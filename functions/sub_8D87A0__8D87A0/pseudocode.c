char *__thiscall sub_8D87A0(char *this, int a2)
{
  *(_DWORD *)this = 0; /*0x8d87ac*/
  *((_DWORD *)this + 1) = 0; /*0x8d87b2*/
  *((_DWORD *)this + 2) = 0x80000000; /*0x8d87b9*/
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 0x10), 0xFA0); /*0x8d87c0*/
  *((_DWORD *)this + 3) = a2; /*0x8d87ca*/
  return this; /*0x8d87cf*/
}
