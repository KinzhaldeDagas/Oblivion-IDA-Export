char **__usercall sub_8B0E10@<eax>(char **a1@<ecx>, int a2@<ebx>)
{
  char *v3; // eax
  char *v5; // [esp-18h] [ebp-1Ch]

  v3 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x80, 0x14);
  *a1 = v3;
  sub_8B18C0(a2, v3, 0, 0x80u);
  v5 = *a1;
  a1[1] = 0;
  a1[2] = (char *)0xF;
  sub_8B18C0(a2, v5, 0, 0x80u);
  a1[1] = 0;
  return a1;
}
