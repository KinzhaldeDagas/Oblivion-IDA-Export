char **__usercall sub_942B70@<eax>(char **a1@<ecx>, int a2@<ebx>)
{
  char *v3; // eax

  v3 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC0, 0x14);
  *a1 = v3;
  sub_8B18C0(a2, v3, 0xFF, 0x40u);
  a1[1] = 0;
  a1[2] = (char *)0xF;
  return a1;
}
