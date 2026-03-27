char __thiscall sub_5E6FE0(_DWORD *this)
{
  int v1; // eax
  bool v2; // zf
  char result; // al

  if ( !*(this + 0x16) )
    return 0;
  v1 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x184))(*(this + 0x16));
  if ( !v1 )
    return 0;
  v2 = *(_BYTE *)(v1 + 0x20) == 0x1C;
  result = 1;
  if ( !v2 )
    return 0;
  return result;
}
