unsigned int __thiscall sub_76C9A0(NiD3DShader *this, int a2, int a3, int a4, int a5, unsigned int a6, int a7, int a8)
{
  unsigned int v9; // edi

  ((void (__thiscall *)(NiDX9RenderState *, int))this->member.super.D3DRenderState->vtbl->UpdateRenderState)(
    this->member.super.D3DRenderState,
    a5);
  sub_776880(
    (int)this->member.super.D3DRenderer->member.lightMgr,
    a5,
    a6,
    *(_DWORD *)(a5 + 0x20),
    *(_DWORD *)(a5 + 0x24));
  v9 = sub_77A150(this, a2, a3, a4, a5, a6, a7, a8);
  this->member.Unk050[4] = ((int (__thiscall *)(NiDX9RenderState *, int))this->member.super.D3DRenderState->vtbl->GetRenderState)(
                             this->member.super.D3DRenderState,
                             0x89);
  return v9;
}
