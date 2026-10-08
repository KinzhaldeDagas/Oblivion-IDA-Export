bhkConvexTransformShape *sub_8C93F0()
{
  bhkConvexTransformShape *v0; // eax

  v0 = (bhkConvexTransformShape *)FormHeapAlloc(0x14u); /*0x8c9413*/
  if ( v0 ) /*0x8c9429*/
    return bhkConvexTransformShape::bhkConvexTransformShape(v0); /*0x8c942d*/
  else
    return 0; /*0x8c9442*/
}
