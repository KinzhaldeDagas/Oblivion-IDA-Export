void __thiscall sub_5B6FA0(_DWORD *this, int a2, int a3)
{
  Tile *v4; // ecx
  Tile *v5; // ecx

  v4 = (Tile *)*(this + 0x13); /*0x5b6fa9*/
  *((_BYTE *)this + 0x84) = 2; /*0x5b6fb1*/
  *(this + 0x1E) = 0; /*0x5b6fb8*/
  Tile_SetFloat(v4, 0xFA1u, 1.0); /*0x5b6fbf*/
  Tile_SetFloat((Tile *)*(this + 0x17), 0xFA1u, 1.0); /*0x5b6fd2*/
  Tile_SetString((_DWORD *)*(this + 0x17), (_DWORD *)0xFDE, word_A36430); /*0x5b6fe4*/
  v5 = (Tile *)*(this + 0x3D); /*0x5b6fe9*/
  if ( v5 ) /*0x5b6ff1*/
    Tile_SetFloat(v5, 0xFB5u, 0.0); /*0x5b6ffe*/
  *(this + 0x3D) = 0; /*0x5b7003*/
}
