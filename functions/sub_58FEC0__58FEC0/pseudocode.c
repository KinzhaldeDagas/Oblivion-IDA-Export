TileText *sub_58FEC0()
{
  TileText *v0; // eax

  v0 = (TileText *)FormHeapAlloc(0x54u);
  if ( v0 )
    return TileText::TileText(v0, 0.0);
  else
    return 0;
}
