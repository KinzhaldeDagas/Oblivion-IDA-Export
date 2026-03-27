char __thiscall sub_768700(NiDX9Renderer *this, NiTexture *a2)
{
  NiDX9TextureData *v3; // eax

  if ( !a2->members.rendererData )
  {
    v3 = sub_761920((int)a2, a2, this);
    if ( !v3 )
      return 0;
    NiTMap_SetAt(&this->member.renderedTextures.vtbl, (int)a2, (int)v3);
  }
  return 1;
}
