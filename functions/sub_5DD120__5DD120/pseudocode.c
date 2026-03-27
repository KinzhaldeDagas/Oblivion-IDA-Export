void __thiscall sub_5DD120(char *this)
{
  char *v2; // esi
  char *v3; // eax

  v2 = this + 0x34;
  if ( sub_57D2F0(this + 0x34) )
  {
    sub_57DDE0((int)v2);
    v3 = sub_580120(v2);
    Tile_SetString(*((_DWORD **)this + 0xA), (_DWORD *)0xFDE, v3);
  }
}
