void sub_7487D0()
{
  DWORD *v0; // esi
  struct _SYSTEM_INFO SystemInfo; // [esp+4h] [ebp-24h] BYREF

  v0 = (DWORD *)FormHeapAlloc(4u);
  if ( v0 )
  {
    GetSystemInfo((LPSYSTEM_INFO)&SystemInfo);
    *v0 = SystemInfo.dwNumberOfProcessors;
    dword_B407B8 = (int)v0;
  }
  else
  {
    dword_B407B8 = 0;
  }
}
