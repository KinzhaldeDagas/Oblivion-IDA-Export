char __thiscall sub_5DD160(char *this, int a2)
{
  char *v3; // esi
  char *v4; // eax

  v3 = this + 0x34; /*0x5dd164*/
  if ( !sub_57D2F0(this + 0x34) ) /*0x5dd169*/
    return 0; /*0x5dd19b*/
  sub_57FF50(v3, a2); /*0x5dd179*/
  v4 = sub_580120(v3); /*0x5dd180*/
  Tile_SetString(*((_DWORD **)this + 0xA), (_DWORD *)0xFDE, v4); /*0x5dd18e*/
  return 1; /*0x5dd193*/
}
