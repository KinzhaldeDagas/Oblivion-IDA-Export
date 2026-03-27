unsigned int __thiscall sub_77A150(NiD3DShader *this, int a2, int a3, int a4, int a5, unsigned int a6, int a7, int a8)
{
  NiDX9LightManager *lightMgr; // ecx
  NiD3DRenderStateGroup *RenderStateGroup; // ecx

  if ( !this->member.super.IsRenderSet )
    return 0xFFFFFFFF;
  if ( this->member.IsInitialized )
    ((void (__thiscall *)(NiDX9RenderState *, int))this->member.super.D3DRenderState->vtbl->UpdateRenderState)(
      this->member.super.D3DRenderState,
      a5);
  if ( this->member.Unk021 )
  {
    lightMgr = this->member.super.D3DRenderer->member.lightMgr;
    if ( lightMgr )
      sub_776880((int)lightMgr, a5, a6, *(_DWORD *)(a5 + 0x20), *(_DWORD *)(a5 + 0x24));
  }
  RenderStateGroup = this->member.RenderStateGroup;
  if ( RenderStateGroup )
    NiD3DRenderStateGroup::SetRenderStates(RenderStateGroup);
  return 0;
}
