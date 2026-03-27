bool __thiscall sub_897AC0(_DWORD *this)
{
  int v1; // ecx
  bool result; // al
  int v3; // ecx
  int v4; // edx
  int v5; // ecx

  v1 = *(this + 4);
  result = 1;
  if ( v1 && ((v3 = *(_DWORD *)(v1 + 8)) == 0 ? (v4 = 0) : (v4 = v3 + 0x14), *(_BYTE *)(v4 + 0x18) == 1) )
    v5 = v4 + *(_DWORD *)(v4 + 0x10);
  else
    v5 = 0;
  if ( v5 )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 0x50) + 8))(*(_DWORD *)(v5 + 0x50)) >= 6;
  return result;
}
