int __thiscall sub_77B080(int this, int a2, char a3)
{
  int result; // eax

  if ( a3 )
    *(_DWORD *)(this + 0xFEC) = *(_DWORD *)(this + 0xFE8);
  result = a2;
  if ( *(_DWORD *)(this + 0xFE8) != a2 )
  {
    *(_DWORD *)(this + 0xFE8) = a2;
    return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 0xFF8) + 0x1AC))(*(_DWORD *)(this + 0xFF8), a2);
  }
  return result;
}
