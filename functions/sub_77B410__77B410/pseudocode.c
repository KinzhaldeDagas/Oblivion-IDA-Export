int __thiscall sub_77B410(int this, int a2, char a3)
{
  int result; // eax

  result = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(this + 0x1000) || *(_DWORD *)(this + 0x1004) != a2 )
    {
      *(_BYTE *)(this + 0x1000) = 0;
      if ( a3 )
        *(_DWORD *)(this + 0x1008) = *(_DWORD *)(this + 0x1004);
      *(_DWORD *)(this + 0x1004) = a2;
      return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 0xFF8) + 0x164))(*(_DWORD *)(this + 0xFF8), a2);
    }
  }
  return result;
}
