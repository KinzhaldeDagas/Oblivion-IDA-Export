TileImage *__thiscall TileImage::TileImage(TileImage *this)
{
  int v2; // edi

  *((_DWORD *)this + 2) = 0; /*0x58183c*/
  *((_WORD *)this + 6) = 0; /*0x58183f*/
  *((_WORD *)this + 7) = 0; /*0x581843*/
  *((_DWORD *)this + 8) = 0; /*0x581847*/
  *((_DWORD *)this + 6) = 0; /*0x58184a*/
  *((_DWORD *)this + 7) = 0; /*0x58184d*/
  *((_DWORD *)this + 5) = &NiTList<Tile::Value *>::`vftable'; /*0x581850*/
  *((_DWORD *)this + 0xF) = 0; /*0x581857*/
  *((_DWORD *)this + 0xD) = 0; /*0x58185a*/
  *((_DWORD *)this + 0xE) = 0; /*0x58185d*/
  *((_DWORD *)this + 0xC) = &NiTList<Tile *>::`vftable'; /*0x581860*/
  *((_DWORD *)this + 9) = 0; /*0x581867*/
  *((_DWORD *)this + 4) = 0; /*0x58186a*/
  *((_BYTE *)this + 4) = 0; /*0x58186d*/
  *((_BYTE *)this + 6) = 0; /*0x581870*/
  *(_DWORD *)this = &TileImage::`vftable'; /*0x581873*/
  *((_DWORD *)this + 0x11) = 0; /*0x58187d*/
  *((float *)this + 0x10) = 1.0; /*0x581882*/
  v2 = *((_DWORD *)this + 0x11); /*0x58188a*/
  if ( v2 ) /*0x58188f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x581895*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x5818ab*/
    *((_DWORD *)this + 0x11) = 0; /*0x5818ad*/
  }
  *((_BYTE *)this + 0x48) = 0; /*0x5818b2*/
  return this; /*0x5818b5*/
}
