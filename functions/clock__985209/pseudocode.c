clock_t __cdecl clock()
{
  struct _FILETIME SystemTimeAsFileTime; // [esp+4h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  return (SystemTimeAsFileTime.dwLowDateTime
        + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 0x20)
        - *(_QWORD *)&dword_BA9DF0)
       / 0x2710;
}
