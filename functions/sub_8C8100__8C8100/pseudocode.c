bhkCylinderShape *sub_8C8100()
{
  bhkCylinderShape *v0; // eax

  v0 = (bhkCylinderShape *)FormHeapAlloc(0x14u); /*0x8c8123*/
  if ( v0 ) /*0x8c8139*/
    return bhkCylinderShape::bhkCylinderShape(v0); /*0x8c813d*/
  else
    return 0; /*0x8c8152*/
}
