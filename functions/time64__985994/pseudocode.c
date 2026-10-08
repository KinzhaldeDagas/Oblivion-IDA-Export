__time64_t __cdecl _time64(__time64_t *Time)
{
  __time64_t result; // rax
  struct _FILETIME SystemTimeAsFileTime; // [esp+0h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime); /*0x98599d*/
  result = (*(_QWORD *)&SystemTimeAsFileTime - 0x19DB1DED53E8000LL) / (unsigned __int64)((unsigned int)&loc_98967F + 1); /*0x9859bd*/
  if ( Time ) /*0x9859c7*/
    *Time = result; /*0x9859c9*/
  return result; /*0x9859ce*/
}
