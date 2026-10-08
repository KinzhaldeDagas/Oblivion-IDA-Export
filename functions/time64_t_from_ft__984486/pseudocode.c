unsigned int __usercall __time64_t_from_ft@<eax>(int a1@<ebx>, int a2@<edi>, FILETIME *lpFileTime)
{
  struct _SYSTEMTIME SystemTime; // [esp+0h] [ebp-18h] BYREF
  struct _FILETIME LocalFileTime; // [esp+10h] [ebp-8h] BYREF

  if ( (lpFileTime->dwLowDateTime || lpFileTime->dwHighDateTime) /*0x9844b1*/
    && FileTimeToLocalFileTime(lpFileTime, &LocalFileTime)
    && FileTimeToSystemTime(&LocalFileTime, &SystemTime) )
  {
    return __loctotime64_t( /*0x9844db*/
             a1,
             a2,
             SystemTime.wYear,
             SystemTime.wMonth,
             SystemTime.wDay,
             SystemTime.wHour,
             SystemTime.wMinute,
             SystemTime.wSecond,
             0xFFFFFFFF);
  }
  else
  {
    return 0xFFFFFFFF; /*0x9844e8*/
  }
}
