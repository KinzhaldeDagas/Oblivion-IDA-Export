char __thiscall sub_757A30(int *this, int a2)
{
  int v2; // edi
  int v4; // eax

  v2 = a2;
  if ( !sub_75E600(this, a2) )
    return 0;
  if ( !NiTMap_GetAt((_DWORD *)(v2 + 0xD4), *(this + 0x10), &a2) )
    return 0;
  if ( !a2 )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( !v4 )
    return 0;
  while ( (char *)v4 != dword_B41E68 )
  {
    v4 = *(_DWORD *)(v4 + 4);
    if ( !v4 )
      return 0;
  }
  return 1;
}
