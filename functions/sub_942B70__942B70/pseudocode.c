char **__usercall sub_942B70@<eax>(char **a1@<ecx>, int a2@<ebx>)
{
  char *v3; // eax

  v3 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC0, 0x14); /*0x942b82*/
  *a1 = v3; /*0x942b8d*/
  sub_8B18C0(a2, v3, 0xFF, 0x40u); /*0x942b8f*/
  a1[1] = 0; /*0x942b97*/
  a1[2] = (char *)0xF; /*0x942b9e*/
  return a1; /*0x942ba7*/
}
