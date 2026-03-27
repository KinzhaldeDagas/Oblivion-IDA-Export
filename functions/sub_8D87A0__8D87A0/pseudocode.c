char *__thiscall sub_8D87A0(char *this, int a2)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0x80000000;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 0x10), 0xFA0);
  *((_DWORD *)this + 3) = a2;
  return this;
}
