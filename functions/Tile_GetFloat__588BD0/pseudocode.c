double __thiscall Tile_GetFloat(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // ecx

  v2 = (_DWORD *)*(this + 6); /*0x588bd0*/
  if ( !v2 ) /*0x588bd6*/
    return 0.0; /*0x588bf6*/
  while ( 1 ) /*0x588be0*/
  {
    v3 = v2[2]; /*0x588be0*/
    v4 = *(unsigned __int16 *)(v3 + 0x18); /*0x588be6*/
    v2 = (_DWORD *)*v2; /*0x588bec*/
    if ( v4 == a2 ) /*0x588bee*/
      break; /*0x588bee*/
    if ( v4 > a2 || !v2 ) /*0x588bf4*/
      return 0.0; /*0x588bf4*/
  }
  return *(float *)(v3 + 4); /*0x588bf8*/
}
