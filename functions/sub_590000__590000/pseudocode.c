TileImage *sub_590000()
{
  TileImage *v0; // eax

  v0 = (TileImage *)FormHeapAlloc(0x4Cu); /*0x590023*/
  if ( v0 ) /*0x590039*/
    return TileImage::TileImage(v0); /*0x59003d*/
  else
    return 0; /*0x590052*/
}
