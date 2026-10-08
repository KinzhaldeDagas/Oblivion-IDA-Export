int __thiscall sub_940D60(int *this, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // eax

  v5 = *this; /*0x940d70*/
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)unk_BA94BC + 0x10))(unk_BA94BC, a4); /*0x940d73*/
  return (*(int (__thiscall **)(int *, int, int, int))(v5 + 8))(this, a3, a4, v6); /*0x940d86*/
}
