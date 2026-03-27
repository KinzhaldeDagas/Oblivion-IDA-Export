int __thiscall sub_77B510(int this, int a2, char a3)
{
  int result; // eax

  result = a2;
  if ( a2 )
  {
    if ( !*(_BYTE *)(this + 0x1000) || *(_DWORD *)(this + 0x100C) != a2 )
    {
      *(_BYTE *)(this + 0x1000) = 1;
      if ( a3 )
        *(_DWORD *)(this + 0x1010) = *(_DWORD *)(this + 0x100C);
      *(_DWORD *)(this + 0x100C) = a2;
      return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 0xFF8) + 0x15C))(*(_DWORD *)(this + 0xFF8), a2);
    }
  }
  return result;
}
