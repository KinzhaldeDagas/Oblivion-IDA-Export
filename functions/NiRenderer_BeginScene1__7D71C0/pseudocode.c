// Oblivion BeginScene internal path: establishes SceneState1 when required and starts the supplied or default render-target group.
_DWORD *__cdecl NiRenderer_BeginScene1(ClearFlags a1, NiRenderTargetGroup *a2)
{
  NiRenderer *v2; // ecx
  UInt32 *p_SceneState1; // esi

  v2 = (NiRenderer *)renderer; /*0x7d71c0*/
  p_SceneState1 = &renderer->member.super.SceneState1; /*0x7d71ce*/
  if ( !*p_SceneState1 && !v2->members.SceneState2 && v2->__vftable->BeginScene(v2) ) /*0x7d71e7*/
    *p_SceneState1 = 1; /*0x7d71ed*/
  return (_DWORD *)NiRenderer_PushAndBeginRenderTargetGroup(a2, a1); /*0x7d7205*/
}
