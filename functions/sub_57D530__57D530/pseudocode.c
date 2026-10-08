void __thiscall sub_57D530(_DWORD *this, signed int arg0)
{
  signed int v2; // esi
  float a2; // [esp+0h] [ebp-8h]

  v2 = arg0; /*0x57d531*/
  if ( !arg0 ) /*0x57d537*/
  {
    v2 = 0x3EB; /*0x57d539*/
    arg0 = 0x3EB; /*0x57d53e*/
  }
  a2 = (float)arg0; /*0x57d54a*/
  Tile_SetFloat((Tile *)*(this + 0x1A), 0x1771u, a2); /*0x57d552*/
  switch ( v2 ) /*0x57d55d*/
  {
    case 0x3EB: /*0x57d55d*/
      sub_5A5E00(1); /*0x57d561*/
      break;
    case 0x3EA: /*0x57d55d*/
      sub_5A5E00(2); /*0x57d577*/
      break;
    case 0x3FE: /*0x57d55d*/
      sub_5A5E00(3); /*0x57d58d*/
      break;
    case 0x3FF: /*0x57d55d*/
      sub_5A5E00(4); /*0x57d5a3*/
      break;
  }
}
