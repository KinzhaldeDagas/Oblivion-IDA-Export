bool *__thiscall sub_927970(char *this, bool *a2, int a3, int a4, int a5)
{
  int v6; // eax

  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 0x2C))(a4, a5);
  sub_927680((int)(this + 0xFFFFFFF0), a2, *(_DWORD *)(a3 + 0x20), v6);
  return a2;
}
