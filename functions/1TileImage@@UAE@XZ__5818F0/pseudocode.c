void __thiscall TileImage::~TileImage(TileImage *this)
{
  int v6; // esi

  *(_DWORD *)this = &TileImage::`vftable'; /*0x581919*/
  if ( !*((_BYTE *)this + 4) ) /*0x58191f*/
    Tile::Release(this); /*0x58192d*/
  v6 = *((_DWORD *)this + 0x11); /*0x581932*/
  if ( v6 ) /*0x58193c*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x581942*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x581958*/
  }
  Tile::~Tile(this); /*0x581964*/
}
