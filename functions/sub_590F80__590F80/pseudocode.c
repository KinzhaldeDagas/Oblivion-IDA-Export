void __thiscall sub_590F80(Tile *this, Tile *parent, char *name, Tile *sibling)
{
  int v5; // edi

  Tile::Init(this, parent, name, sibling); /*0x590f95*/
  Tile_SetFloat(this, 0xFCCu, flt_A40098); /*0x590fab*/
  Tile_SetFloat(this, 0xFCDu, flt_A40098); /*0x590fc1*/
  Tile_SetFloat(this, 0xFCEu, flt_A40098); /*0x590fd7*/
  Tile_SetFloat(this, 0xFA7u, flt_A40098); /*0x590fed*/
  *((float *)this + 0x10) = 1.0; /*0x590ff4*/
  v5 = *((_DWORD *)this + 0x11); /*0x590ff7*/
  if ( v5 ) /*0x590ffc*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x591002*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x591018*/
    *((_DWORD *)this + 0x11) = 0; /*0x59101a*/
  }
  *((_BYTE *)this + 0x48) = 0; /*0x591022*/
}
