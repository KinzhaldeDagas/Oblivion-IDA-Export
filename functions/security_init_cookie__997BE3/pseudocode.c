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

  SystemTimeAsFileTime.dwLowDateTime = 0; /*0x997bee*/
  SystemTimeAsFileTime.dwHighDateTime = 0; /*0x997bf2*/
  if ( __security_cookie == 0xBB40E64E || (__security_cookie & 0xFFFF0000) == 0 ) /*0x997c08*/
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime); /*0x997c18*/
    v1 = SystemTimeAsFileTime.dwLowDateTime ^ SystemTimeAsFileTime.dwHighDateTime; /*0x997c21*/
    v2 = GetCurrentProcessId() ^ v1; /*0x997c2a*/
    v3 = GetCurrentThreadId() ^ v2; /*0x997c32*/
    v4 = GetTickCount() ^ v3; /*0x997c3a*/
    QueryPerformanceCounter(&PerformanceCount); /*0x997c40*/
    result = PerformanceCount.LowPart ^ PerformanceCount.HighPart; /*0x997c49*/
    v5 = PerformanceCount.LowPart ^ PerformanceCount.HighPart ^ v4; /*0x997c4c*/
    if ( v5 == 0xBB40E64E ) /*0x997c50*/
    {
      v5 = 0xBB40E64F; /*0x997c52*/
    }
    else if ( (v5 & 0xFFFF0000) == 0 ) /*0x997c5b*/
    {
      result = v5 << 0x10; /*0x997c5f*/
      v5 |= v5 << 0x10; /*0x997c62*/
    }
    __security_cookie = v5; /*0x997c64*/
    dword_B30AB0 = ~v5; /*0x997c6c*/
  }
  else
  {
    dword_B30AB0 = ~__security_cookie; /*0x997c0c*/
    return ~__security_cookie; /*0x997c0a*/
  }
  return result; /*0x997c73*/
}
