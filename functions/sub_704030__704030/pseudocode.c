char __thiscall sub_704030(_DWORD *this, int a2)
{
  char result; // al
  unsigned int i; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int j; // esi
  int v9; // eax
  int v10; // eax

  result = sub_700A70(a2);
  if ( result )
  {
    for ( i = 0; i < *((unsigned __int16 *)this + 0x13); ++i )
    {
      v5 = *(_DWORD *)(*(this + 8) + 4 * i);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 8);
        if ( v6 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2);
      }
    }
    v7 = *(this + 0xB);
    if ( v7 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(v7 + 0xA); ++j )
      {
        v9 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4 * j);
        if ( v9 )
        {
          v10 = *(_DWORD *)(v9 + 8);
          if ( v10 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x24))(v10, a2);
        }
        v7 = *(this + 0xB);
      }
    }
    return 1;
  }
  return result;
}
