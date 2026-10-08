// Pass324: generic NiD3DShader setup consumes a5 renderer propertyState and immediately calls UpdateRenderState(a5). CD crash at 0x00780848 proves a5 was null; no call-edge to the native shadow-map renderer/projector boundary.
unsigned int __thiscall sub_76C9A0(NiD3DShader *this, int a2, int a3, int a4, int a5, unsigned int a6, int a7, int a8)
{
  unsigned int v9; // edi

  ((void (__thiscall *)(NiDX9RenderState *, int))this->member.super.D3DRenderState->vtbl->UpdateRenderState)( /*0x76c9b2*/
    this->member.super.D3DRenderState,
    a5);
  sub_776880( /*0x76c9ca*/
    (int)this->member.super.D3DRenderer->member.lightMgr,
    a5,
    a6,
    *(_DWORD *)(a5 + 0x20),
    *(_DWORD *)(a5 + 0x24));                    // NiD3DShader setup receives the forwarded renderer propertyState argument and passes it directly to NiDX9RenderState::UpdateRenderState.
  v9 = sub_77A150(this, a2, a3, a4, a5, a6, a7, a8); /*0x76c9f6*/
  this->member.Unk050[4] = ((int (__thiscall *)(NiDX9RenderState *, int))this->member.super.D3DRenderState->vtbl->GetRenderState)( /*0x76ca02*/
                             this->member.super.D3DRenderState,
                             0x89);
  return v9; /*0x76ca07*/
}
