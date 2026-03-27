int __thiscall sub_779790(NiD3DShader *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DRenderStateGroup *RenderStateGroup; // ecx

  RenderStateGroup = this->member.RenderStateGroup;
  if ( RenderStateGroup )
    NiD3DRenderStateGroup::RestoreRenderState(RenderStateGroup);
  return 0;
}
