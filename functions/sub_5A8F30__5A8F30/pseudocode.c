void __thiscall sub_5A8F30(float *this)
{
  if ( !InterfaceManager_IsMenuVisibleByID(0x3F5, 0) ) /*0x5a8f3a*/
    Tile_SetString(*((_DWORD **)this + 0xA), (_DWORD *)0xFDE, word_A36430); /*0x5a8f53*/
  Tile_SetFloat(*((Tile **)this + 0xA), 0xFA1u, 1.0); /*0x5a8f66*/
  *(this + 0xF) = 0.0; /*0x5a8f6d*/
  *((_BYTE *)this + 0x38) = 1; /*0x5a8f70*/
  *(this + 0x10) = 0.0; /*0x5a8f74*/
}
