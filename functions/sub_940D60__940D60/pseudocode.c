int __thiscall sub_940D60(int *this, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // eax

  v5 = *this;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_BA94BC + 0x10))(dword_BA94BC, a4);
  return (*(int (__thiscall **)(int *, int, int, int))(v5 + 8))(this, a3, a4, v6);
}
