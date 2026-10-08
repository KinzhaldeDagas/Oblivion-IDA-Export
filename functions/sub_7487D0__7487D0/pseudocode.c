void sub_7487D0()
{
  DWORD *v0; // esi
  struct _SYSTEM_INFO SystemInfo; // [esp+4h] [ebp-24h] BYREF

  v0 = (DWORD *)FormHeapAlloc(4u); /*0x7487db*/
  if ( v0 ) /*0x7487e2*/
  {
    GetSystemInfo((LPSYSTEM_INFO)&SystemInfo); /*0x7487e9*/
    *v0 = SystemInfo.dwNumberOfProcessors; /*0x7487f3*/
    stru_B407B0[1].LowPart = (DWORD)v0; /*0x7487f5*/
  }
  else
  {
    stru_B407B0[1].LowPart = 0; /*0x748800*/
  }
}
