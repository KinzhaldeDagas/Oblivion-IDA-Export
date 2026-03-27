bhkCylinderShape *sub_8C8100()
{
  bhkCylinderShape *v0; // eax

  v0 = (bhkCylinderShape *)FormHeapAlloc(0x14u);
  if ( v0 )
    return bhkCylinderShape::bhkCylinderShape(v0);
  else
    return 0;
}
