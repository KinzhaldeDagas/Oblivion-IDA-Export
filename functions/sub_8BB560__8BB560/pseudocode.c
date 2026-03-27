_DWORD *__userpurge sub_8BB560@<eax>(int a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  *(_WORD *)(a1 + 6) = 1;
  *(_DWORD *)a1 = &off_A982C0;
  sub_8B0E10((char **)(a1 + 8), a2);
  *(_DWORD *)(a1 + 0x14) = 0;
  *(_DWORD *)(a1 + 0x18) = 0;
  *(_DWORD *)(a1 + 0x1C) = 0x80000000;
  *(_DWORD *)(a1 + 0x20) = a3;
  *(_DWORD *)(a1 + 0x24) = a4;
  return (_DWORD *)a1;
}
