_DWORD *__thiscall sub_8A7560(int this, signed int a2, int a3)
{
  int v3; // edx
  _DWORD *result; // eax

  if ( a2 > 0x2000 || !*(_DWORD *)(this + 0x30) )
    return (*(_DWORD *(__thiscall **)(_DWORD, signed int, int))(**(_DWORD **)(this + 0x10) + 0x10))(
             *(_DWORD *)(this + 0x10),
             a2,
             a3);
  if ( a2 > 0x200 )
    v3 = *(_DWORD *)(this + 4 * ((a2 - 1) >> 0xA) + 0x304);
  else
    v3 = *(char *)(a2 + this + 0x100);
  result = *(_DWORD **)(this + 4 * v3 + 0x34);
  if ( !result )
    return (*(_DWORD *(__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 0x10) + 0x18))(
             *(_DWORD *)(this + 0x10),
             v3,
             a3);
  --*(_DWORD *)(this + 4 * v3 + 0x78);
  *(_DWORD *)(this + 4 * v3 + 0x34) = *result;
  return result;
}
