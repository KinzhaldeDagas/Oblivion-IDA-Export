_DWORD *__cdecl sub_5894F0(_DWORD *a1, signed int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax

  if ( a1 && (double)a2 == Tile_GetFloat(a1, 0xFA8) ) /*0x589510*/
    return a1; /*0x589512*/
  v3 = (_DWORD *)a1[0xD]; /*0x589516*/
  if ( !v3 ) /*0x58951c*/
    return 0; /*0x58953b*/
  while ( 1 ) /*0x589525*/
  {
    v4 = (_DWORD *)v3[2]; /*0x589525*/
    v3 = (_DWORD *)*v3; /*0x589527*/
    result = sub_5894F0(v4, a2); /*0x58952b*/
    if ( result ) /*0x589535*/
      break; /*0x589535*/
    if ( !v3 ) /*0x589539*/
      return 0; /*0x589539*/
  }
  return result; /*0x589514*/
}
