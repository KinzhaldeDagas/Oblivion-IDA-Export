int __thiscall sub_75F9E0(NiD3DPass *this, int a2)
{
  NiD3DRenderStateGroup *RenderStateGroup; // ecx

  RenderStateGroup = this->RenderStateGroup;
  if ( RenderStateGroup )
    NiD3DRenderStateGroup::RestoreRenderState(RenderStateGroup);
  return 0;
}
