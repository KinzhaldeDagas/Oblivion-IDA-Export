// DX11 pass lifecycle audit 2026-09-30: vtable A882DC slots+8/+C are ApplyRenderStateAndTextureStages75FD90 and RestoreSavedRenderStates75F9E0. The restore wrapper reads pass+30 and calls772720 when nonnull. 772720 walks group+10 in head-to-tail order and dispatches each recorded state ID to the global manager RestoreRenderState; it is distinct from texture/sampler cleanup. Fresh pass construction must not treat application-only metadata as restoration authority.
// DX11 saved-state implementation 2026-09-30: full byte contracts for75F9E0,772720,77B060 now qualify a separate restore program. It retains forward saved-list IDs including duplicates and reads the single saved register during evaluation without resaving or popping it. Unknown saved words remain unknown. Frame preparation pairs restoration with its exact pass/manager; ordered scheduling and inherited manager/device state authority remain required before traversal omission.
int __thiscall NiD3DPass_RestoreSavedRenderStates(NiD3DPass *this, int a2)
{
  NiD3DRenderStateGroup *RenderStateGroup; // ecx

  RenderStateGroup = this->RenderStateGroup; /*0x75f9e0*/
  if ( RenderStateGroup ) /*0x75f9e5*/
    NiD3DRenderStateGroup::RestoreRenderState(RenderStateGroup); /*0x75f9e7*/
  return 0; /*0x75f9ee*/
}
