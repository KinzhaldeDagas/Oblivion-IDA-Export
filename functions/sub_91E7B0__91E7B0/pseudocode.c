_DWORD *__thiscall sub_91E7B0(_WORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax

  sub_9491F0(this, a2); /*0x91e7ba*/
  *((_DWORD *)this + 0xA) = &off_A9D2B4; /*0x91e7bf*/
  v3 = 0; /*0x91e7c9*/
  *(_DWORD *)this = &off_A9D8B8; /*0x91e7cb*/
  *((_DWORD *)this + 2) = &off_A9D8A0; /*0x91e7d1*/
  *((_DWORD *)this + 8) = off_A9D84C; /*0x91e7d8*/
  *((_DWORD *)this + 0xA) = &off_A9D894; /*0x91e7df*/
  *((_DWORD *)this + 0xB) = 0; /*0x91e7e5*/
  *((_DWORD *)this + 0xC) = 0; /*0x91e7e8*/
  *((_DWORD *)this + 0xD) = 0x80000000; /*0x91e7eb*/
  v4 = *((_DWORD *)this + 9); /*0x91e7f2*/
  if ( v4 ) /*0x91e7f7*/
  {
    if ( *(int *)(v4 + 0x60) > 0 ) /*0x91e7fc*/
    {
      do /*0x91e818*/
        sub_899D20(*(const void ***)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x5C) + 4 * v3++), (int)(this + 0x14)); /*0x91e80a*/
      while ( v3 < *(_DWORD *)(*((_DWORD *)this + 9) + 0x60) ); /*0x91e818*/
    }
  }
  return this; /*0x91e81a*/
}
