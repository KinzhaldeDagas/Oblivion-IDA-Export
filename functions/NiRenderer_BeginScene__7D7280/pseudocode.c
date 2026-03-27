_DWORD *__cdecl NiRenderer_BeginScene(ClearFlags a1, NiRenderTargetGroup *a2)
{
  NiRenderer *v2; // ecx
  UInt32 *p_SceneState2; // esi

  v2 = (NiRenderer *)g_Renderer;
  p_SceneState2 = &g_Renderer->member.super.SceneState2;
  if ( !*p_SceneState2 && !v2->members.SceneState1 && v2->__vftable->BeginScene(v2) )
    *p_SceneState2 = 1;
  return (_DWORD *)StartUsingRenderTarget(a2, a1);
}
