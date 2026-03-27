char __thiscall sub_976980(int this, int a2, int a3, int a4, int a5, int a6)
{
  if ( this == a2 )
    return 0;
  else
    return (*(int (__thiscall **)(_DWORD, _DWORD, int, int, int, int, _DWORD, _DWORD))(**(_DWORD **)(this + 8) + 8))(
             *(_DWORD *)(this + 8),
             *(_DWORD *)(a2 + 8),
             a3,
             a4,
             a5,
             a6,
             *(_DWORD *)(this + 0x50),
             *(_DWORD *)(a2 + 0x50));
}
