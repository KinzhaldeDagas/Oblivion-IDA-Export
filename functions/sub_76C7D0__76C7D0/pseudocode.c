// Generic NiD3DShader vtable +0x44 geometry-finish callback used by Lighting30 and other shaders. It restores D3DRS_LIGHTING (state 0x89) from the shader's saved field, then restores every state recorded by the shader render-state group. The renderer invokes it even when BeginPassLoop returned zero.
int __thiscall NiD3DShader_FinishGeometryRender(
        NiD3DShader *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  ((void (__thiscall *)(NiDX9RenderState *, int, UInt32, _DWORD))this->member.super.D3DRenderState->vtbl->SetRenderState)( /*0x76c7e6*/
    this->member.super.D3DRenderState,
    0x89,
    this->member.Unk050[4],
    0);                                         // Geometry-finish restores D3DRS_LIGHTING (0x89) from the shader's saved value even after a zero-pass submission.
  return NiD3DShader_RestoreRenderStateGroup(this, a2, a3, a4, a5, a6, a7, a8);// Then restore the shader's NiD3DRenderStateGroup; this is unconditional with respect to PassCount. /*0x76c812*/
}
