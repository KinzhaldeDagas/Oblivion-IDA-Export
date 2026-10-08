char __usercall sub_945EB0@<al>(int a1@<ebx>)
{
  int v1; // eax
  int *v3[3]; // [esp+14h] [ebp-3A0h] BYREF
  char v4[512]; // [esp+20h] [ebp-394h] BYREF
  struct WSAData WSAData; // [esp+220h] [ebp-194h] BYREF

  if ( (stru_BA94F0[1].QuadPart & 0x100000000LL) != 0 ) /*0x945ec9*/
  {
    LOBYTE(v1) = stru_BA94F0[1].LowPart; /*0x945edb*/
    if ( LOBYTE(stru_BA94F0[1].LowPart) ) /*0x945edb*/
      return v1; /*0x945ee2*/
  }
  else
  {
    stru_BA94F0[1].HighPart |= 1u; /*0x945ecb*/
    LOBYTE(stru_BA94F0[1].LowPart) = 0; /*0x945ed2*/
  }
  v1 = WSAStartup_0(0x202u, &WSAData); /*0x945ef1*/
  if ( v1 == 0xFFFFFFFF ) /*0x945ef9*/
  {
    sub_8BBFB0((int)v3, a1, v4, 0x200u, 1); /*0x945f0f*/
    sub_8BBDB0(v3, "(Windows)WSAStartup failed with error!"); /*0x945f1d*/
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x945f3d*/
      unk_BA7FB0,
      3,
      0x321825F8,
      v4,
      ".\\stream\\impl\\hkBsdSocket.cpp",
      0x41);
    LOBYTE(v1) = sub_8BC000(v3); /*0x945f43*/
  }
  LOBYTE(stru_BA94F0[1].LowPart) = 1; /*0x945f48*/
  return v1; /*0x945f4f*/
}
