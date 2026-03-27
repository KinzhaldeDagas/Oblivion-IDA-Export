char __thiscall sub_6E8FC0(_DWORD *this, int a2)
{
  char result; // al
  unsigned int i; // ebx
  _DWORD *v5; // esi
  unsigned int j; // edi
  int v7; // ecx

  result = sub_715F10(this, a2);
  if ( result )
  {
    for ( i = 0; i < *((unsigned __int16 *)this + 0x2F); ++i )
    {
      v5 = *(_DWORD **)(*(this + 0x16) + 4 * i);
      if ( v5 )
      {
        for ( j = 0; j < v5[2]; ++j )
        {
          v7 = *(_DWORD *)(*(_DWORD *)(*v5 + 4 * j) + 4);
          if ( v7 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x24))(v7, a2);
        }
      }
    }
    return 1;
  }
  return result;
}
