void __thiscall sub_5B67F0(Tile **this, float a2, float a3, float a4)
{
  Tile *v4; // esi
  float v5; // [esp+14h] [ebp+Ch]
  float v6; // [esp+14h] [ebp+Ch]

  if ( LOBYTE(a4) )
    v4 = *(this + 0x16);
  else
    v4 = *(this + 0x18);
  v5 = Tile_GetFloat(v4, 0xFBA) + a2;
  Tile_SetFloat(v4, (_DWORD *)0xFB8, v5);
  v6 = Tile_GetFloat(v4, 0xFBB) + a3;
  Tile_SetFloat(v4, (_DWORD *)0xFB9, v6);
}
