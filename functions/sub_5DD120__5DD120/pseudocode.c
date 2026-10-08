void __thiscall sub_5DD120(char *this)
{
  char *v2; // esi
  char *v3; // eax

  v2 = this + 0x34; /*0x5dd124*/
  if ( sub_57D2F0(this + 0x34) ) /*0x5dd129*/
  {
    sub_57DDE0((int)v2); /*0x5dd134*/
    v3 = sub_580120(v2); /*0x5dd13b*/
    Tile_SetString(*((_DWORD **)this + 0xA), (_DWORD *)0xFDE, v3); /*0x5dd149*/
  }
}
