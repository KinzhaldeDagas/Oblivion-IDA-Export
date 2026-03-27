int __inittime()
{
  struct _FILETIME SystemTimeAsFileTime; // [esp+4h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  *(_QWORD *)&dword_BA9DF0 = SystemTimeAsFileTime.dwLowDateTime
                           + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 0x20);
  return 0;
}
