int __thiscall sub_77B350(int this, int a2, char a3)
{
  int result; // eax

  if ( a3 )
    *(_DWORD *)(this + 0xFE4) = *(_DWORD *)(this + 0xFE0);
  result = a2;
  if ( *(_DWORD *)(this + 0xFE0) != a2 )
  {
    *(_DWORD *)(this + 0xFE0) = a2;
    return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 0xFF8) + 0x170))(*(_DWORD *)(this + 0xFF8), a2);
  }
  return result;
}
