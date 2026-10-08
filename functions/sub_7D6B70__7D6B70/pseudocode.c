// Return the current top render-target-group stack entry, or null when the stack is empty.
NiRenderTargetGroup *__cdecl NiRenderer_PeekRenderTargetGroup()
{
  NiRenderTargetGroup **v0; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0; /*0x7d6b73*/
  if ( NiRendererRenderTargetStackDepth ) /*0x7d6b76*/
  {
    v0 = (NiRenderTargetGroup **)(4 * NiRendererRenderTargetStackDepth + 0xB45D74); /*0x7d6b85*/
  }
  else
  {
    v2 = 0; /*0x7d6b90*/
    v0 = (NiRenderTargetGroup **)&v2; /*0x7d6b94*/
  }
  return *v0; /*0x7d6bc5*/
}
