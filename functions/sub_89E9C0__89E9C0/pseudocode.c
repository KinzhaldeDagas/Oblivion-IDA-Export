bool __thiscall sub_89E9C0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  bool result; // al

  v1 = *(this + 4);
  if ( !v1 )
    return 0;
  v2 = *(_DWORD *)(v1 + 8);
  result = 1;
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 0x50) + 8))(*(_DWORD *)(v2 + 0x50));
    if ( v3 != 6 && v3 != 7 )
      return 0;
  }
  return result;
}
