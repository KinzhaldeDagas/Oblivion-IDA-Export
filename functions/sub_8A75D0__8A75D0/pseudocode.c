int __thiscall sub_8A75D0(int this, _DWORD *a2, signed int a3, int a4)
{
  int v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // esi

  if ( a3 > 0x2000 )
    return (*(int (__thiscall **)(_DWORD, _DWORD *, signed int, int))(**(_DWORD **)(this + 0x10) + 0x14))(
             *(_DWORD *)(this + 0x10),
             a2,
             a3,
             a4);
  v4 = *(_DWORD *)(this + 0x30);
  if ( !v4 )
    return (*(int (__thiscall **)(_DWORD, _DWORD *, signed int, int))(**(_DWORD **)(this + 0x10) + 0x14))(
             *(_DWORD *)(this + 0x10),
             a2,
             a3,
             a4);
  if ( a3 > 0x200 )
    result = *(_DWORD *)(this + 4 * ((a3 - 1) >> 0xA) + 0x304);
  else
    result = *(char *)(a3 + this + 0x100);
  v6 = *(_DWORD *)(this + 4 * result + 0x78);
  if ( v6 >= v4 )
    return (*(int (__thiscall **)(_DWORD, _DWORD *, int, int))(**(_DWORD **)(this + 0x10) + 0x1C))(
             *(_DWORD *)(this + 0x10),
             a2,
             result,
             a4);
  v7 = *(_DWORD *)(this + 4 * result + 0x34);
  *(_DWORD *)(this + 4 * result + 0x78) = v6 + 1;
  *a2 = v7;
  *(_DWORD *)(this + 4 * result + 0x34) = a2;
  return result;
}
