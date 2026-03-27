int __thiscall sub_90D8A0(int this, int a2, int a3)
{
  if ( a3 )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 8) + 0x18))(*(_DWORD *)(this + 8), a2, a3);
  else
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 8) + 0x18))(
             *(_DWORD *)(this + 8),
             a2 + *(_DWORD *)(this + 0xC),
             0);
}
