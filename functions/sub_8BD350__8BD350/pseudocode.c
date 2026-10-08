bhkCachingShapePhantom *sub_8BD350()
{
  bhkCachingShapePhantom *v0; // eax

  v0 = (bhkCachingShapePhantom *)FormHeapAlloc(0x14u); /*0x8bd373*/
  if ( v0 ) /*0x8bd389*/
    return bhkCachingShapePhantom::bhkCachingShapePhantom(v0); /*0x8bd38d*/
  else
    return 0; /*0x8bd3a2*/
}
