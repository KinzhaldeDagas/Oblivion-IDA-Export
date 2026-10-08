// MoonSugar build 39: base shader +0x34 transform slot branches skinned partition to CalculateBoneMatrixes/sub_765560, otherwise pass-0 non-skinned to sub_765480. Confirms hardware skin needs separate post-flush hook.
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
  if ( a3 ) /*0x77971a*/
  {
    if ( !this->member.CurrentPassIndex ) /*0x77971c*/
      NiDX9Renderer::CalculateBoneMatrixes(this->member.super.D3DRenderer, a2, a4, 0, 4, 0); /*0x779737*/
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD))this->member.super.D3DRenderState->vtbl->SetVertexBlending)( /*0x779749*/
      this->member.super.D3DRenderState,
      *(unsigned __int16 *)(a3 + 0x24));
    sub_765560(this->member.super.D3DRenderer, (int)a2, a3, (int)a4); /*0x779751*/
    return 0; /*0x779759*/
  }
  else
  {
    if ( !this->member.CurrentPassIndex ) /*0x77975f*/
    {
      ((void (__thiscall *)(NiDX9RenderState *, _DWORD))this->member.super.D3DRenderState->vtbl->SetVertexBlending)( /*0x77976f*/
        this->member.super.D3DRenderState,
        0);
      NiDX9Renderer_SetModelTransform(this->member.super.D3DRenderer, (float *)a4, 1); /*0x77977b*/
    }
    return 0; /*0x779781*/
  }
}
