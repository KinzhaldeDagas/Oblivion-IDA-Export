bhkTriangleShape *sub_8C3D20()
{
  bhkTriangleShape *v0; // eax

  v0 = (bhkTriangleShape *)FormHeapAlloc(0x14u); /*0x8c3d43*/
  if ( v0 ) /*0x8c3d59*/
    return bhkTriangleShape::bhkTriangleShape(v0); /*0x8c3d5d*/
  else
    return 0; /*0x8c3d72*/
}
