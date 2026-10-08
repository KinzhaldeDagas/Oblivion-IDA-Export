// Verified (Oblivion): build-list dispatcher invoked by ActiveEffect_Base_ProcessEffect when creating a fresh hit-effect list and when applying queued hit VFX. Its outlined path tries model-hit creation first, then chains shader-hit creation with the resulting BSSimpleList.
MagicShaderHitEffect **__cdecl MagicHitEffect_BuildHitVFXList(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        ActiveEffect *a8)
{
  return MagicHitEffect__BuildHitVFXList_::PlayModelHitEffect(a1, a2, a3, a4, a5, a6, a7, a8);
}
