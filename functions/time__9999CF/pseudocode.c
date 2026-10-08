time_t __cdecl time(time_t *Time)
{
  time_t result; // rax
  struct _FILETIME SystemTimeAsFileTime; // [esp+0h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime); /*0x9999d8*/
  result = (*(_QWORD *)&SystemTimeAsFileTime - 0x19DB1DED53E8000LL) / 0x989680uLL; /*0x9999f8*/
  if ( Time ) /*0x999a02*/
    *(_DWORD *)Time = result; /*0x999a04*/
  return result; /*0x999a06*/
}
