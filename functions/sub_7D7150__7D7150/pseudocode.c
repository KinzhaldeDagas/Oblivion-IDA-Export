// Drain and release every render-target stack entry, then end the active group. This path does not rebind a previous/default target or restore viewport/scissor state.
char sub_7D7150()
{
  int v0; // eax
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v2; // esi
  _DWORD *v3; // edi

  v0 = NiRendererRenderTargetStackDepth; /*0x7d7150*/
  if ( NiRendererRenderTargetStackDepth ) /*0x7d7150*/
  {
    v1 = InterlockedDecrement; /*0x7d715a*/
    do /*0x7d71a1*/
    {
      --v0; /*0x7d7162*/
      v2 = *(_DWORD *)(4 * v0 + 0xB45D78); /*0x7d7165*/
      v3 = (_DWORD *)(4 * v0 + 0xB45D78); /*0x7d716e*/
      NiRendererRenderTargetStackDepth = v0; /*0x7d7175*/
      if ( v2 ) /*0x7d717a*/
      {
        if ( !v1((volatile LONG *)(v2 + 4)) ) /*0x7d7180*/
          (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7d7192*/
        v0 = NiRendererRenderTargetStackDepth; /*0x7d7194*/
        *v3 = 0; /*0x7d7199*/
      }
    }
    while ( v0 ); /*0x7d71a1*/
  }
  if ( renderer->member.super.IsReady ) /*0x7d71ac*/
    LOBYTE(v0) = NiDX9Renderer_EndRenderTargetGroupLocked(renderer);// After releasing all stack references, end the active group; no replacement target is bound here. /*0x7d71b5*/
  return v0; /*0x7d71ba*/
}
