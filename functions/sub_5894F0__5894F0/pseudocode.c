_DWORD *__cdecl sub_5894F0(_DWORD *a1, signed int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax

  if ( a1 && (double)a2 == Tile_GetFloat(a1, 0xFA8) )
    return a1;
  v3 = (_DWORD *)a1[0xD];
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = (_DWORD *)v3[2];
    v3 = (_DWORD *)*v3;
    result = sub_5894F0(v4, a2);
    if ( result )
      break;
    if ( !v3 )
      return 0;
  }
  return result;
}
