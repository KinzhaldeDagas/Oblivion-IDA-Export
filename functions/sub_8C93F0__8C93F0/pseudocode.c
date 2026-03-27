bhkConvexTransformShape *sub_8C93F0()
{
  bhkConvexTransformShape *v0; // eax

  v0 = (bhkConvexTransformShape *)FormHeapAlloc(0x14u);
  if ( v0 )
    return bhkConvexTransformShape::bhkConvexTransformShape(v0);
  else
    return 0;
}
