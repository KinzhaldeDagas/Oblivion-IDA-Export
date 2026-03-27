LPSYSTEMTIME __thiscall sub_4301A0(int this, LPSYSTEMTIME lpLocalTime)
{
  HANDLE FirstFileA; // eax
  FILETIME FileTime; // [esp+4h] [ebp-15Ch] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+Ch] [ebp-154h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1Ch] [ebp-144h] BYREF

  if ( *(_DWORD *)(this + 0x1C) )
  {
    FirstFileA = FindFirstFileA((LPCSTR)(this + 0x3C), &FindFileData);
    if ( FirstFileA != (HANDLE)0xFFFFFFFF )
      FileTime = FindFileData.ftLastWriteTime;
    FindClose(FirstFileA);
    FileTimeToSystemTime(&FileTime, &SystemTime);
    SystemTimeToTzSpecificLocalTime(0, &SystemTime, lpLocalTime);
  }
  else
  {
    *(_DWORD *)&lpLocalTime->wYear = 0;
    *(_DWORD *)&lpLocalTime->wDayOfWeek = 0;
    *(_DWORD *)&lpLocalTime->wHour = 0;
    *(_DWORD *)&lpLocalTime->wSecond = 0;
  }
  return lpLocalTime;
}
