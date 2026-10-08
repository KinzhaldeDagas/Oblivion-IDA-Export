TileText *sub_58FEC0()
{
  TileText *v0; // eax

  v0 = (TileText *)FormHeapAlloc(0x54u); /*0x58fee3*/
  if ( v0 ) /*0x58fef9*/
    return TileText::TileText(v0, 0); /*0x58feff*/
  else
    return 0; /*0x58ff14*/
}
