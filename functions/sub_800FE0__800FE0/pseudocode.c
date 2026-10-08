// SpeedTree leaf shader begin/check: apply current property state, then generic shader begin state.
unsigned int __thiscall OB_SpeedTreeLeafShader_BeginPropertyState_010201A0(
        NiD3DShader *this,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  ((void (__thiscall *)(NiDX9RenderState *, int))this->member.super.D3DRenderState->vtbl->UpdateRenderState)( /*0x800ff1*/
    this->member.super.D3DRenderState,
    a5);                                        // Leaf draw entry applies the current NiPropertyState before building/applying the SpeedTree leaf pass.
  return sub_77A150(this, a2, a3, a4, a5, a6, a7, a8); /*0x801019*/
}
