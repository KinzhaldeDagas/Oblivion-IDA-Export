// Restore the NiD3DShader render-state group during geometry-finish cleanup. If shader+0x28 is nonnull, dispatches NiD3DRenderStateGroup::RestoreRenderState; returns zero. This wrapper does not restore automatic-constant enable flags.
int __thiscall NiD3DShader_RestoreRenderStateGroup(
        NiD3DShader *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  NiD3DRenderStateGroup *RenderStateGroup; // ecx

  RenderStateGroup = this->member.RenderStateGroup; /*0x779790*/
  if ( RenderStateGroup ) /*0x779795*/
    NiD3DRenderStateGroup::RestoreRenderState(RenderStateGroup);// Restore every render-state ID saved in the shader's state group. Automatic-constant enable flags are not part of this group. /*0x779797*/
  return 0; /*0x77979e*/
}
