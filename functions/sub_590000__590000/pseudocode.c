TileImage *sub_590000()
{
  TileImage *v0; // eax

  v0 = (TileImage *)FormHeapAlloc(0x4Cu);
  if ( v0 )
    return TileImage::TileImage(v0);
  else
    return 0;
}
