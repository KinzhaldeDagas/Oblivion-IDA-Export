char __cdecl sub_471B80(int a1)
{
  char result; // al
  unsigned int i; // edi
  int v3; // esi
  int v4; // eax
  int v5; // eax

  if ( !a1 )
    return 0;
  for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; ++i )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i);
    if ( v3 )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( v4 )
      {
        result = sub_471B80(v4);
        if ( result )
          return result;
      }
      else
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xC))(v3);
        if ( v5 && *(_DWORD *)(v5 + 0xB8) )
          return 1;
      }
    }
  }
  return 0;
}
