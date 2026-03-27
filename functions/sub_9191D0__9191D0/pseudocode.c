_WORD *__thiscall sub_9191D0(_WORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax

  sub_9491F0(this, a2);
  *((_DWORD *)this + 0xA) = &off_A9D2B4;
  *(_DWORD *)this = &off_A9D2EC;
  *((_DWORD *)this + 2) = &off_A9D2D4;
  *((_DWORD *)this + 8) = off_A9D84C;
  *((_DWORD *)this + 0xA) = &off_A9D2C8;
  *((_BYTE *)this + 0x2C) = 1;
  *((_BYTE *)this + 0x2D) = 1;
  v3 = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0x80000000;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0x80000000;
  v4 = *((_DWORD *)this + 9);
  if ( v4 )
  {
    if ( *(int *)(v4 + 0x60) > 0 )
    {
      do
        sub_899D20(*(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x5C) + 4 * v3++), (int)(this + 0x14));
      while ( v3 < *(_DWORD *)(*((_DWORD *)this + 9) + 0x60) );
    }
  }
  return this;
}
