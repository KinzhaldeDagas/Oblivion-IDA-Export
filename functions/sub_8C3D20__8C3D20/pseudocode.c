bhkTriangleShape *sub_8C3D20()
{
  bhkTriangleShape *v0; // eax

  v0 = (bhkTriangleShape *)FormHeapAlloc(0x14u);
  if ( v0 )
    return bhkTriangleShape::bhkTriangleShape(v0);
  else
    return 0;
}
