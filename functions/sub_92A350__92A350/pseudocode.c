bool *__thiscall sub_92A350(_DWORD *this, bool *a2, int a3, int a4, int a5)
{
  unsigned int v6; // eax

  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 0x2C))(a4, a5);
  sub_92A2E0(this + 0xFFFFFFFC, a2, *(_DWORD *)(a3 + 0x20), v6);
  return a2;
}
