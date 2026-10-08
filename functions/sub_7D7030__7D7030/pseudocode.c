// Release the strong-owned top render-target-group stack entry and decrement the global depth.
void __cdecl NiRenderer_ReleaseTopRenderTargetGroup()
{
  unsigned __int32 v0; // eax
  int v1; // esi
  _DWORD *v2; // edi

  if ( NiRendererRenderTargetStackDepth ) /*0x7d7030*/
  {
    v0 = NiRendererRenderTargetStackDepth - 1; /*0x7d703a*/
    v1 = *(_DWORD *)(4 * v0 + 0xB45D78); /*0x7d703d*/
    v2 = (_DWORD *)(4 * v0 + 0xB45D78); /*0x7d7047*/
    NiRendererRenderTargetStackDepth = v0; /*0x7d704e*/
    if ( v1 ) /*0x7d7053*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v1 + 4)) ) /*0x7d7059*/
        (**(void (__thiscall ***)(int, int))v1)(v1, 1); /*0x7d706f*/
      *v2 = 0; /*0x7d7071*/
    }
  }
}
