void __thiscall sub_5A8F30(float *this)
{
  if ( !sub_5790E0(0x3F5, 0) )
    Tile_SetString(*((_DWORD **)this + 0xA), (_DWORD *)0xFDE, word_A36430);
  Tile_SetFloat(*((Tile **)this + 0xA), (_DWORD *)0xFA1, 1.0);
  *(this + 0xF) = 0.0;
  *((_BYTE *)this + 0x38) = 1;
  *(this + 0x10) = 0.0;
}
