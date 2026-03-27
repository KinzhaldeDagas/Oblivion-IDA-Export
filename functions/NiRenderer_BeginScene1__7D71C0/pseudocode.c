_DWORD *__cdecl NiRenderer_BeginScene1(ClearFlags a1, NiRenderTargetGroup *a2)
{
  NiRenderer *v2; // ecx
  UInt32 *p_SceneState1; // esi

  v2 = (NiRenderer *)g_Renderer;
  p_SceneState1 = &g_Renderer->member.super.SceneState1;
  if ( !*p_SceneState1 && !v2->members.SceneState2 && v2->__vftable->BeginScene(v2) )
    *p_SceneState1 = 1;
  return (_DWORD *)StartUsingRenderTarget(a2, a1);
}
