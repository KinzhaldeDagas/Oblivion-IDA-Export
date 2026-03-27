int __thiscall sub_5BE800(Tile **this)
{
  Tile *v1; // esi
  double v2; // st7
  float a2; // [esp+0h] [ebp-8h]

  v1 = *(this + 0x2A);
  if ( !v1 )
    JUMPOUT(0x5BE850);
  switch ( (unsigned int)*(this + 0x21) )
  {
    case 0u:
      v2 = 1.0;
      break;
    case 1u:
      v2 = fConstant_2;
      break;
    case 2u:
      v2 = *(float *)&dword_A46C30;
      break;
    case 3u:
      v2 = flt_A46B10;
      break;
    default:
      JUMPOUT(0x5BE847);
  }
  a2 = v2;
  Tile_SetFloat(v1, (_DWORD *)0xFAE, a2);
  return def_5BE816();
}
