int __thiscall sub_67C7F0(_DWORD *this, int a2, char a3)
{
  int result; // eax

  if ( !a3 ) /*0x67c7f5*/
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x58) + 0x49C))(*(_DWORD *)(a2 + 0x58)); /*0x67c806*/
  result = *(_DWORD *)(*(this + 0xF) + 4); /*0x67c80e*/
  if ( result ) /*0x67c813*/
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 0x58) + 0x484))(*(_DWORD *)(a2 + 0x58), result); /*0x67c825*/
  return result; /*0x67c808*/
}
