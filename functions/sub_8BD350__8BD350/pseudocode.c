bhkCachingShapePhantom *sub_8BD350()
{
  bhkCachingShapePhantom *v0; // eax

  v0 = (bhkCachingShapePhantom *)FormHeapAlloc(0x14u);
  if ( v0 )
    return bhkCachingShapePhantom::bhkCachingShapePhantom(v0);
  else
    return 0;
}
