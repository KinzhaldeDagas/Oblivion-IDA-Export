bool __thiscall sub_6077F0(_DWORD *this, int a2, int a3)
{
  int v3; // ecx

  return this
      && (v3 = *(this + 2)) != 0
      && *(_BYTE *)(*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)v3 + 0x14))(v3, &a3, a2, a3) != 0;
}
