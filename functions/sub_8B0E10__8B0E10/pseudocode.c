char **__usercall sub_8B0E10@<eax>(char **a1@<ecx>, int a2@<ebx>)
{
  char *v3; // eax
  char *v5; // [esp-18h] [ebp-1Ch]

  v3 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x80, 0x14); /*0x8b0e22*/
  *a1 = v3; /*0x8b0e2d*/
  sub_8B18C0(a2, v3, 0, 0x80u); /*0x8b0e2f*/
  v5 = *a1; /*0x8b0e3d*/
  a1[1] = 0; /*0x8b0e3e*/
  a1[2] = (char *)0xF; /*0x8b0e45*/
  sub_8B18C0(a2, v5, 0, 0x80u); /*0x8b0e4c*/
  a1[1] = 0; /*0x8b0e54*/
  return a1; /*0x8b0e5d*/
}
