// Verified module cleanup wrapper decrements/releases g_DebugRenderVertexColorProperty if present.
void __cdecl DebugRender_ReleaseSharedVertexColorProperty()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))g_DebugRenderVertexColorProperty; /*0xa1bcd1*/
  if ( g_DebugRenderVertexColorProperty ) /*0xa1bcd9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(g_DebugRenderVertexColorProperty + 4)) ) /*0xa1bcdf*/
    {
      if ( v0 ) /*0xa1bceb*/
        (**v0)(v0, 1); /*0xa1bcf5*/
    }
  }
}
