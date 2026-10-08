// Set or replace one D3D render state on a NiD3DPass. Lazily acquires the pass RenderStateGroup and delegates to NiD3DRenderStateGroup_SetRenderState.
char __thiscall NiD3DPass_SetRenderState(NiD3DPass *this, int state, unsigned int value, char restore)
{
  if ( !this->RenderStateGroup ) /*0x76c733*/
    this->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x76c73e*/
  return NiD3DRenderStateGroup_SetRenderState((_DWORD *)this->RenderStateGroup, state, value, restore); /*0x76c758*/
}
