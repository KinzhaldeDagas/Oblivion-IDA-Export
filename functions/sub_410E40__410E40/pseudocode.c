DWORD __cdecl sub_410E40(DWORD (*lpParameter)(LPVOID), char a2, int a3)
{
  unsigned int *v3; // ecx
  SIZE_T v5; // [esp-14h] [ebp-18h]
  DWORD ThreadId; // [esp+0h] [ebp-4h] BYREF

  HIDWORD(v5) = StartAddress; /*0x410e4c*/
  LODWORD(v5) = 0; /*0x410e51*/
  MEMORY[0xB33434] = CreateThread(0, v5, lpParameter, (LPVOID)4, (DWORD)&ThreadId, v3); /*0x410e64*/
  sub_747830(ThreadId, (int)"MoviePlayer"); /*0x410e69*/
  unk_B33427 = a2; /*0x410e72*/
  if ( a3 == 0xFFFFFFFF ) /*0x410e81*/
    BSThread_SetPriority(dword_B030C4); /*0x410e8a*/
  else
    BSThread_SetPriority(a3); /*0x410e8d*/
  return ResumeThread(MEMORY[0xB33434]); /*0x410ea3*/
}
