char __userpurge sub_768740@<al>(NiDX9Renderer *a1@<ecx>, int ebp0@<ebp>, NiTexture *a2)
{
  NiDX9TextureData *v4; // eax

  if ( !a2->members.rendererData )
  {
    v4 = sub_7792E0(ebp0, a2, a1);
    if ( !v4 )
      return 0;
    NiTMap_SetAt(&a1->member.renderedCubeMaps.vtbl, (int)a2, (int)v4);
  }
  return 1;
}
