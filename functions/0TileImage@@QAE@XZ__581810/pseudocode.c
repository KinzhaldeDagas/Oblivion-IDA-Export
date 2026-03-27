TileImage *__thiscall TileImage::TileImage(TileImage *this)
{
  int v2; // edi

  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 5) = &NiTList<Tile::Value *>::`vftable';
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xC) = &NiTList<Tile *>::`vftable';
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 4) = 0;
  *((_BYTE *)this + 6) = 0;
  *(_DWORD *)this = &TileImage::`vftable';
  *((_DWORD *)this + 0x11) = 0;
  *((float *)this + 0x10) = 1.0;
  v2 = *((_DWORD *)this + 0x11);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x11) = 0;
  }
  *((_BYTE *)this + 0x48) = 0;
  return this;
}
