int __userpurge sub_8BBFB0@<eax>(int a1@<ecx>, int a2@<ebx>, char *a3, unsigned int a4, char a5)
{
  int v6; // eax

  *(_WORD *)(a1 + 6) = 1;
  *(_DWORD *)a1 = &off_A98328;
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x1C, 0x17);
  *(_WORD *)(v6 + 4) = 0x1C;
  *(_DWORD *)(a1 + 8) = sub_8F5E50(v6, a2, a3, a4, a5);
  return a1;
}
