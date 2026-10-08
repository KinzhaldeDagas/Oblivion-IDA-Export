_DWORD *__thiscall sub_91E3F0(_WORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax

  sub_9491F0(this, a2); /*0x91e3fa*/
  *((_DWORD *)this + 0xA) = &off_A9D2B4; /*0x91e3ff*/
  v3 = 0; /*0x91e409*/
  *(_DWORD *)this = &off_A9D86C; /*0x91e40b*/
  *((_DWORD *)this + 2) = &off_A9D854; /*0x91e411*/
  *((_DWORD *)this + 8) = off_A9D84C; /*0x91e418*/
  *((_DWORD *)this + 0xA) = &off_A9D840; /*0x91e41f*/
  *((_DWORD *)this + 0xB) = 0; /*0x91e425*/
  *((_DWORD *)this + 0xC) = 0; /*0x91e428*/
  *((_DWORD *)this + 0xD) = 0x80000000; /*0x91e42b*/
  v4 = *((_DWORD *)this + 9); /*0x91e432*/
  if ( v4 ) /*0x91e437*/
  {
    if ( *(int *)(v4 + 0x60) > 0 ) /*0x91e43c*/
    {
      do /*0x91e458*/
        sub_899D20(*(const void ***)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x5C) + 4 * v3++), (int)(this + 0x14)); /*0x91e44a*/
      while ( v3 < *(_DWORD *)(*((_DWORD *)this + 9) + 0x60) ); /*0x91e458*/
    }
  }
  return this; /*0x91e45a*/
}
