void __thiscall sub_5B6FA0(_DWORD *this, int a2, int a3)
{
  Tile *v4; // ecx
  Tile *v5; // ecx

  v4 = (Tile *)*(this + 0x13);
  *((_BYTE *)this + 0x84) = 2;
  *(this + 0x1E) = 0;
  Tile_SetFloat(v4, (_DWORD *)0xFA1, 1.0);
  Tile_SetFloat((Tile *)*(this + 0x17), (_DWORD *)0xFA1, 1.0);
  Tile_SetString((_DWORD *)*(this + 0x17), (_DWORD *)0xFDE, word_A36430);
  v5 = (Tile *)*(this + 0x3D);
  if ( v5 )
    Tile_SetFloat(v5, (_DWORD *)0xFB5, 0.0);
  *(this + 0x3D) = 0;
}
