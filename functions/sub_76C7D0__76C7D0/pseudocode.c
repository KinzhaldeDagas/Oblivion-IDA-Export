int __thiscall sub_76C7D0(BSImageSpaceShader *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  ((void (__thiscall *)(NiDX9RenderState *, int, UInt32, _DWORD))this->member.super.super.super.D3DRenderState->vtbl->SetRenderState)(
    this->member.super.super.super.D3DRenderState,
    0x89,
    this->member.super.super.Unk050[4],
    0);
  return sub_779790((NiD3DShader *)this, a2, a3, a4, a5, a6, a7, a8);
}
