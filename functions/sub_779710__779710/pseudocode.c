int __thiscall sub_779710(
        NiD3DShader *this,
        int _C,
        NiSkinInstance *a2,
        int a3,
        int a5,
        int a6,
        int a7,
        NiTransform *a4,
        int a9)
{
  if ( a3 )
  {
    if ( !this->member.CurrentPassIndex )
      NiDX9Renderer::CalculateBoneMatrixes(this->member.super.D3DRenderer, a2, a4, 0, 4, 0);
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD))this->member.super.D3DRenderState->vtbl->SetVertexBlending)(
      this->member.super.D3DRenderState,
      *(unsigned __int16 *)(a3 + 0x24));
    sub_765560(this->member.super.D3DRenderer, (int)a2, a3, (int)a4);
    return 0;
  }
  else
  {
    if ( !this->member.CurrentPassIndex )
    {
      ((void (__thiscall *)(NiDX9RenderState *, _DWORD))this->member.super.D3DRenderState->vtbl->SetVertexBlending)(
        this->member.super.D3DRenderState,
        0);
      sub_765480(this->member.super.D3DRenderer, (float *)a4, 1);
    }
    return 0;
  }
}
