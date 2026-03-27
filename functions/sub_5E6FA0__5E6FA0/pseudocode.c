char __thiscall sub_5E6FA0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // esi
  bool v4; // zf
  char result; // al

  v1 = *(this + 0x16);
  if ( !v1 )
    return 0;
  v2 = *(_DWORD *)(v1 + 8);
  if ( !v2 )
    return 0;
  if ( *(_BYTE *)(v2 + 0x20) != 3 )
    return 0;
  v3 = *(_DWORD *)(v2 + 0x18);
  v4 = *(_DWORD *)(*(_DWORD *)(4 * v3 + 0xB152B0)
                 + 4 * (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x180))(*(this + 0x16))) == 5;
  result = 1;
  if ( !v4 )
    return 0;
  return result;
}
