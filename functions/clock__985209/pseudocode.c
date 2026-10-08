clock_t __cdecl clock()
{
  struct _FILETIME SystemTimeAsFileTime; // [esp+4h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime); /*0x985213*/
  return (SystemTimeAsFileTime.dwLowDateTime /*0x985249*/
        + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 0x20)
        - *(_QWORD *)&byte_BA9DCC[0x24])
       / 0x2710;
}
