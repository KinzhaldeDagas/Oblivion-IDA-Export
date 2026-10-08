LPSYSTEMTIME __thiscall sub_4301A0(int this, LPSYSTEMTIME lpLocalTime)
{
  HANDLE FirstFileA; // eax
  FILETIME FileTime; // [esp+4h] [ebp-15Ch] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+Ch] [ebp-154h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1Ch] [ebp-144h] BYREF

  if ( *(_DWORD *)(this + 0x1C) ) /*0x4301b6*/
  {
    FirstFileA = FindFirstFileA((LPCSTR)(this + 0x3C), &FindFileData); /*0x4301dc*/
    if ( FirstFileA != (HANDLE)0xFFFFFFFF ) /*0x4301e5*/
      FileTime = FindFileData.ftLastWriteTime; /*0x4301ef*/
    FindClose(FirstFileA); /*0x4301f8*/
    FileTimeToSystemTime(&FileTime, &SystemTime); /*0x430208*/
    SystemTimeToTzSpecificLocalTime(0, &SystemTime, lpLocalTime); /*0x430216*/
  }
  else
  {
    *(_DWORD *)&lpLocalTime->wYear = 0; /*0x4301c6*/
    *(_DWORD *)&lpLocalTime->wDayOfWeek = 0; /*0x4301c8*/
    *(_DWORD *)&lpLocalTime->wHour = 0; /*0x4301cb*/
    *(_DWORD *)&lpLocalTime->wSecond = 0; /*0x4301ce*/
  }
  return lpLocalTime; /*0x43021c*/
}
