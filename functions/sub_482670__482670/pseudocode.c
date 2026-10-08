// Clear/release canopy shadow-map state.
void __thiscall ClearCanopyShadowMap(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebx
  NiRenderedTexture *v3; // esi
  int v4; // esi

  if ( *(this + 9) ) /*0x482673*/
  {
    v2 = InterlockedDecrement; /*0x482681*/
    if ( g_CanopyShadowMap ) /*0x482679*/
    {
      v3 = g_CanopyShadowMap; /*0x48268a*/
      if ( !v2((volatile LONG *)&g_CanopyShadowMap->member) ) /*0x482690*/
      {
        if ( v3 ) /*0x482698*/
          v3->__vftable->super.super.super.Destructor((NiRefObject *)v3, 1); /*0x4826a2*/
      }
      g_CanopyShadowMap = 0; /*0x4826a4*/
    }
    BSTextureManager__ReturnRenderedTexture( /*0x4826b8*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
      (BSRenderedTexture *)*(this + 9));
    v4 = *(this + 9); /*0x4826bd*/
    if ( v4 ) /*0x4826c2*/
    {
      if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x4826c8*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x4826da*/
      *(this + 9) = 0; /*0x4826dc*/
    }
    g_bCanopyShadowMapPending = 1; /*0x4826e4*/
  }
}
