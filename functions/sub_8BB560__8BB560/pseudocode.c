_DWORD *__userpurge sub_8BB560@<eax>(int a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  *(_WORD *)(a1 + 6) = 1; /*0x8bb566*/
  *(_DWORD *)a1 = &off_A982C0; /*0x8bb56c*/
  sub_8B0E10((char **)(a1 + 8), a2); /*0x8bb572*/
  *(_DWORD *)(a1 + 0x14) = 0; /*0x8bb57d*/
  *(_DWORD *)(a1 + 0x18) = 0; /*0x8bb580*/
  *(_DWORD *)(a1 + 0x1C) = 0x80000000; /*0x8bb587*/
  *(_DWORD *)(a1 + 0x20) = a3; /*0x8bb58e*/
  *(_DWORD *)(a1 + 0x24) = a4; /*0x8bb591*/
  return (_DWORD *)a1; /*0x8bb596*/
}
