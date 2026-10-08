// Oblivion BeginScene wrapper used by per-source shadow rendering: establish SceneState2 only when no scene state is active, then push/begin the supplied target group with requested clear flags.
_DWORD *__cdecl NiRenderer_BeginScene(ClearFlags a1, NiRenderTargetGroup *a2)
{
  NiRenderer *v2; // ecx
  UInt32 *p_SceneState2; // esi

  v2 = (NiRenderer *)renderer; /*0x7d7280*/
  p_SceneState2 = &renderer->member.super.SceneState2; /*0x7d728e*/
  if ( !*p_SceneState2 && !v2->members.SceneState1 && v2->__vftable->BeginScene(v2) ) /*0x7d72a7*/
    *p_SceneState2 = 1; /*0x7d72ad*/
  return (_DWORD *)NiRenderer_PushAndBeginRenderTargetGroup(a2, a1); /*0x7d72c5*/
}
