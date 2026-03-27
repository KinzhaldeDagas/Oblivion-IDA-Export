char __thiscall sub_8B8350(_DWORD *this)
{
  int v1; // ecx
  int v2; // eax

  v1 = *(this + 0xC);
  if ( !v1 )
    return 0;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1);
  if ( !v2 )
    return 0;
  while ( (char *)v2 != dword_B3FA80 )
  {
    v2 = *(_DWORD *)(v2 + 4);
    if ( !v2 )
      return 0;
  }
  return 1;
}
