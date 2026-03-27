char __thiscall sub_5DD160(char *this, int a2)
{
  char *v3; // esi
  char *v4; // eax

  v3 = this + 0x34;
  if ( !sub_57D2F0(this + 0x34) )
    return 0;
  sub_57FF50(v3, a2);
  v4 = sub_580120(v3);
  Tile_SetString(*((_DWORD **)this + 0xA), (_DWORD *)0xFDE, v4);
  return 1;
}
