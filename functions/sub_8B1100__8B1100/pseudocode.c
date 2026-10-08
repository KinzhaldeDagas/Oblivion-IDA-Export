char **__usercall sub_8B1100@<eax>(char **a1@<ecx>, int a2@<ebx>)
{
  char *v3; // eax
  char *v5; // [esp-18h] [ebp-1Ch]

  v3 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x100, 0x14); /*0x8b1112*/
  *a1 = v3; /*0x8b111d*/
  sub_8B18C0(a2, v3, 0, 0x100u); /*0x8b111f*/
  v5 = *a1; /*0x8b112d*/
  a1[1] = 0; /*0x8b112e*/
  a1[2] = (char *)0xF; /*0x8b1135*/
  sub_8B18C0(a2, v5, 0, 0x100u); /*0x8b113c*/
  a1[1] = 0; /*0x8b1144*/
  return a1; /*0x8b114d*/
}
