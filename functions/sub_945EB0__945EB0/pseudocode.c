char __usercall sub_945EB0@<al>(int a1@<ebx>)
{
  int v1; // eax
  int *v3[3]; // [esp+14h] [ebp-3A0h] BYREF
  char v4[512]; // [esp+20h] [ebp-394h] BYREF
  struct WSAData WSAData; // [esp+220h] [ebp-194h] BYREF

  if ( (dword_BA94FC & 1) != 0 )
  {
    LOBYTE(v1) = byte_BA94F8;
    if ( byte_BA94F8 )
      return v1;
  }
  else
  {
    dword_BA94FC |= 1u;
    byte_BA94F8 = 0;
  }
  v1 = WSAStartup_0(0x202u, &WSAData);
  if ( v1 == 0xFFFFFFFF )
  {
    sub_8BBFB0((int)v3, a1, v4, 0x200u, 1);
    sub_8BBDB0(v3, "(Windows)WSAStartup failed with error!");
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
      dword_BA7FB0,
      3,
      0x321825F8,
      v4,
      ".\\stream\\impl\\hkBsdSocket.cpp",
      0x41);
    LOBYTE(v1) = sub_8BC000(v3);
  }
  byte_BA94F8 = 1;
  return v1;
}
