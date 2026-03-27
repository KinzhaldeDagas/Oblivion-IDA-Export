int __thiscall sub_4BDE50(int this, int a2)
{
  int v2; // esi
  int v3; // eax

  v2 = *(_DWORD *)(this + 0x18);
  v3 = sub_4EF1D0(**(_DWORD **)(this + 0x1C), *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 4));
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x10))(v2, v3);
}
