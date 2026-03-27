int __cdecl __time64_t_from_ft(FILETIME *lpFileTime)
{
  struct _SYSTEMTIME SystemTime; // [esp+0h] [ebp-18h] BYREF
  struct _FILETIME LocalFileTime; // [esp+10h] [ebp-8h] BYREF

  if ( (lpFileTime->dwLowDateTime || lpFileTime->dwHighDateTime)
    && FileTimeToLocalFileTime(lpFileTime, &LocalFileTime)
    && FileTimeToSystemTime(&LocalFileTime, &SystemTime) )
  {
    return __loctotime64_t(
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
    return 0xFFFFFFFF;
  }
}
