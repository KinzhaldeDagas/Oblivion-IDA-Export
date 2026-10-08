int __inittime()
{
  struct _FILETIME SystemTimeAsFileTime; // [esp+4h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime); /*0x985256*/
  *(_QWORD *)&byte_BA9DCC[0x24] = SystemTimeAsFileTime.dwLowDateTime /*0x985273*/
                                + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 0x20);
  return 0; /*0x985280*/
}
