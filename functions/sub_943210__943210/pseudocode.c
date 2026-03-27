_DWORD *__usercall sub_943210@<eax>(int a1@<ebx>)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x14, 0x15);
  *(_WORD *)(v1 + 4) = 0x14;
  return sub_943070(v1, a1);
}
