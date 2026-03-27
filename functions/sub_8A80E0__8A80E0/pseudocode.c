bool *__stdcall sub_8A80E0(bool *a1, int a2, int a3, int a4)
{
  unsigned int v4; // eax

  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x2C))(a3, a4);
  *a1 = sub_8A7F70(*(_DWORD *)(a2 + 0x20), v4);
  return a1;
}
