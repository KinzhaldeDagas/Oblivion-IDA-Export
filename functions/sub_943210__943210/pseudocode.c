_DWORD *__usercall sub_943210@<eax>(int a1@<ebx>)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x15); /*0x94321c*/
  *(_WORD *)(v1 + 4) = 0x14; /*0x94321f*/
  return sub_943070(v1, a1);
}
