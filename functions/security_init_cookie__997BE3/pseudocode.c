DWORD __security_init_cookie()
{
  DWORD result; // eax
  DWORD v1; // esi
  DWORD v2; // esi
  DWORD v3; // esi
  DWORD v4; // esi
  DWORD v5; // esi
  LARGE_INTEGER PerformanceCount; // [esp+8h] [ebp-10h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [esp+10h] [ebp-8h] BYREF

  SystemTimeAsFileTime.dwLowDateTime = 0;
  SystemTimeAsFileTime.dwHighDateTime = 0;
  if ( __security_cookie == 0xBB40E64E || (__security_cookie & 0xFFFF0000) == 0 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v1 = SystemTimeAsFileTime.dwLowDateTime ^ SystemTimeAsFileTime.dwHighDateTime;
    v2 = GetCurrentProcessId() ^ v1;
    v3 = GetCurrentThreadId() ^ v2;
    v4 = GetTickCount() ^ v3;
    QueryPerformanceCounter(&PerformanceCount);
    result = PerformanceCount.LowPart ^ PerformanceCount.HighPart;
    v5 = PerformanceCount.LowPart ^ PerformanceCount.HighPart ^ v4;
    if ( v5 == 0xBB40E64E )
    {
      v5 = 0xBB40E64F;
    }
    else if ( (v5 & 0xFFFF0000) == 0 )
    {
      result = v5 << 0x10;
      v5 |= v5 << 0x10;
    }
    __security_cookie = v5;
    dword_B30AB0 = ~v5;
  }
  else
  {
    dword_B30AB0 = ~__security_cookie;
    return ~__security_cookie;
  }
  return result;
}
