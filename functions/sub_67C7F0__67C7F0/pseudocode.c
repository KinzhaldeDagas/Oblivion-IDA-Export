int __thiscall sub_67C7F0(_DWORD *this, int a2, char a3)
{
  int result; // eax

  if ( !a3 )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x58) + 0x49C))(*(_DWORD *)(a2 + 0x58));
  result = *(_DWORD *)(*(this + 0xF) + 4);
  if ( result )
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 0x58) + 0x484))(*(_DWORD *)(a2 + 0x58), result);
  return result;
}
