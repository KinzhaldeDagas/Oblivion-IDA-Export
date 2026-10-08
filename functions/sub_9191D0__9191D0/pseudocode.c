_WORD *__thiscall sub_9191D0(_WORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax

  sub_9491F0(this, a2); /*0x9191da*/
  *((_DWORD *)this + 0xA) = &off_A9D2B4; /*0x9191df*/
  *(_DWORD *)this = &off_A9D2EC; /*0x9191e6*/
  *((_DWORD *)this + 2) = &off_A9D2D4; /*0x9191ec*/
  *((_DWORD *)this + 8) = off_A9D84C; /*0x9191f3*/
  *((_DWORD *)this + 0xA) = &off_A9D2C8; /*0x9191fa*/
  *((_BYTE *)this + 0x2C) = 1; /*0x919206*/
  *((_BYTE *)this + 0x2D) = 1; /*0x919209*/
  v3 = 0; /*0x91920c*/
  *((_DWORD *)this + 0xC) = 0; /*0x919213*/
  *((_DWORD *)this + 0xD) = 0; /*0x919216*/
  *((_DWORD *)this + 0xE) = 0x80000000; /*0x919219*/
  *((_DWORD *)this + 0xF) = 0; /*0x91921c*/
  *((_DWORD *)this + 0x10) = 0; /*0x91921f*/
  *((_DWORD *)this + 0x11) = 0x80000000; /*0x919222*/
  v4 = *((_DWORD *)this + 9); /*0x919225*/
  if ( v4 ) /*0x91922a*/
  {
    if ( *(int *)(v4 + 0x60) > 0 ) /*0x91922f*/
    {
      do /*0x919249*/
        sub_899D20(*(const void ***)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x5C) + 4 * v3++), (int)(this + 0x14)); /*0x91923b*/
      while ( v3 < *(_DWORD *)(*((_DWORD *)this + 9) + 0x60) ); /*0x919249*/
    }
  }
  return this; /*0x91924b*/
}
