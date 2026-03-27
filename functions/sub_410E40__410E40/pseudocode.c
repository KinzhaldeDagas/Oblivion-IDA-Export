DWORD __cdecl sub_410E40(DWORD (*lpParameter)(LPVOID), char a2, int a3)
{
  unsigned int *v3; // ecx
  SIZE_T v5; // [esp-14h] [ebp-18h]
  DWORD ThreadId; // [esp+0h] [ebp-4h] BYREF

  HIDWORD(v5) = StartAddress;
  LODWORD(v5) = 0;
  hHandle = CreateThread(0, v5, lpParameter, (LPVOID)4, (DWORD)&ThreadId, v3);
  sub_747830(ThreadId, (int)"MoviePlayer");
  byte_B33427 = a2;
  if ( a3 == 0xFFFFFFFF )
    BSThread_SetPriority(dword_B030C4);
  else
    BSThread_SetPriority(a3);
  return ResumeThread(hHandle);
}
