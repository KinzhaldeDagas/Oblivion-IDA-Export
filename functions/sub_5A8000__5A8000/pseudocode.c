int __cdecl sub_5A8000(_DWORD *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  bool v3; // zf

  if ( a1 ) /*0x5a8007*/
  {
    dword_B3B0B4[0xA7] = (int)sub_5894F0(a1, 1); /*0x5a8014*/
    dword_B3B0B4[0xA9] = (int)sub_5894F0(a1, 2); /*0x5a8021*/
    v1 = sub_5894F0(a1, 3); /*0x5a8026*/
    v2 = (_DWORD *)dword_B3B0B4[0xA7]; /*0x5a802b*/
    v3 = dword_B3B0B4[0xA7] == 0; /*0x5a8034*/
    dword_B3B0B4[0xA8] = (int)v1; /*0x5a8036*/
    if ( !v3 ) /*0x5a803b*/
    {
      if ( dword_B3B0B4[0xA9] ) /*0x5a803d*/
      {
        if ( v1 ) /*0x5a8048*/
        {
          flt_B140BC = Tile_GetFloat(v2, 0xFB1); /*0x5a8054*/
          flt_B140C0 = Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA9], 0xFB7); /*0x5a806a*/
          flt_B140C4 = Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA8], 0xFB7); /*0x5a8080*/
        }
      }
    }
  }
  return 0; /*0x5a8088*/
}
