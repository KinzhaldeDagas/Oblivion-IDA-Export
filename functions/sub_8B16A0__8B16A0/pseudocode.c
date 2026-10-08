int __usercall sub_8B16A0@<eax>(int a1@<ebx>, const char *a2)
{
  int *v3[3]; // [esp+14h] [ebp-210h] BYREF
  char v4[512]; // [esp+20h] [ebp-204h] BYREF
  int v5; // [esp+220h] [ebp-4h]

  v5 = __security_cookie; /*0x8b16ac*/
  sub_8BBFB0((int)v3, a1, v4, 0x200u, 1); /*0x8b16c6*/
  sub_8BBDB0(v3, a2); /*0x8b16d7*/
  (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8b16f7*/
    unk_BA7FB0,
    3,
    0x2636FE25,
    v4,
    ".\\error\\hkError.cpp",
    0x1B);
  return sub_8BC000(v3); /*0x8b1702*/
}
