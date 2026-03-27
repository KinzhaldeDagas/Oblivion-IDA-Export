void __thiscall sub_57D530(_DWORD *this, signed int arg0)
{
  signed int v2; // esi
  float a2; // [esp+0h] [ebp-8h]

  v2 = arg0;
  if ( !arg0 )
  {
    v2 = 0x3EB;
    arg0 = 0x3EB;
  }
  a2 = (float)arg0;
  Tile_SetFloat((Tile *)*(this + 0x1A), (_DWORD *)0x1771, a2);
  switch ( v2 )
  {
    case 0x3EB:
      sub_5A5E00(1);
      break;
    case 0x3EA:
      sub_5A5E00(2);
      break;
    case 0x3FE:
      sub_5A5E00(3);
      break;
    case 0x3FF:
      sub_5A5E00(4);
      break;
  }
}
