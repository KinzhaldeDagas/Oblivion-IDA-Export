// MoonSugarEffect decode: NiD3DShader vtable +0x28 begin/check. Requires IsRenderSet, updates render state/light manager, applies shader render-state group.
unsigned int __thiscall sub_77A150(NiD3DShader *this, int a2, int a3, int a4, int a5, unsigned int a6, int a7, int a8)
{
  NiDX9LightManager *lightMgr; // ecx
  NiD3DRenderStateGroup *RenderStateGroup; // ecx

  if ( !this->member.super.IsRenderSet ) /*0x77a153*/
    return 0xFFFFFFFF; /*0x77a159*/
  if ( this->member.IsInitialized ) /*0x77a160*/
    ((void (__thiscall *)(NiDX9RenderState *, int))this->member.super.D3DRenderState->vtbl->UpdateRenderState)( /*0x77a174*/
      this->member.super.D3DRenderState,
      a5);
  if ( this->member.Unk021 ) /*0x77a176*/
  {
    lightMgr = this->member.super.D3DRenderer->member.lightMgr; /*0x77a17f*/
    if ( lightMgr ) /*0x77a187*/
      sub_776880((int)lightMgr, a5, a6, *(_DWORD *)(a5 + 0x20), *(_DWORD *)(a5 + 0x24)); /*0x77a196*/
  }
  RenderStateGroup = this->member.RenderStateGroup; /*0x77a19b*/
  if ( RenderStateGroup ) /*0x77a1a1*/
    NiD3DRenderStateGroup::SetRenderStates(RenderStateGroup); /*0x77a1a3*/
  return 0; /*0x77a15c*/
}
