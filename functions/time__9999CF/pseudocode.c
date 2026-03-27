time_t __cdecl time(time_t *Time)
{
  time_t result; // rax
  struct _FILETIME SystemTimeAsFileTime; // [esp+0h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  result = (*(_QWORD *)&SystemTimeAsFileTime - 0x19DB1DED53E8000LL) / 0x989680uLL;
  if ( Time )
    *(_DWORD *)Time = result;
  return result;
}
