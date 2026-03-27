char *__thiscall sub_8DBE70(int *this, int a2, int a3, int a4)
{
  _WORD *v4; // esi
  int v6; // edi
  int v7; // eax

  v4 = (_WORD *)(a2 + *(_DWORD *)(a2 + 0x10));
  v6 = a3 + *(_DWORD *)(a3 + 0x10);
  v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x9C, 0x1F);
  *(_WORD *)(v7 + 4) = 0x9C;
  return sub_8DBD90((char *)v7, *(this + 2), v4, v6);
}
