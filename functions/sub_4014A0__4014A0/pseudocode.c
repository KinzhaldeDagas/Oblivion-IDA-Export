char __cdecl sub_4014A0(int a1)
{
  UInt32 mainThreadID; // esi
  bool v2; // al
  char v3; // bl
  char v4; // al
  char v5; // al

  dword_B32B08 = a1;
  mainThreadID = OSGlobals->mainThreadID;
  v2 = mainThreadID == GetCurrentThreadId();
  if ( !dword_B32B04 )
    byte_B32B01 = 1;
  v3 = 0;
  if ( v2 || !byte_B350D5 || (nullsub_returnTrue_0arg(), v4) )
  {
    nullsub_returnTrue_0arg();
    v3 = v5;
  }
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B32C00, (int)&aMemoryheapMemo);
  byte_B32B00 = 1;
  if ( dword_B02184 )
    dword_B32B04 = dword_B02184(0, a1, dword_B32B04);
  else
    dword_B32B04 = 0;
  return v3;
}
