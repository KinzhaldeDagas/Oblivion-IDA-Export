unsigned int __thiscall sub_800FE0(NiD3DShader *this, int a2, int a3, int a4, int a5, unsigned int a6, int a7, int a8)
{
  ((void (__thiscall *)(NiDX9RenderState *, int))this->member.super.D3DRenderState->vtbl->UpdateRenderState)(
    this->member.super.D3DRenderState,
    a5);
  return sub_77A150(this, a2, a3, a4, a5, a6, a7, a8);
}
