// [Verified] Returns true only when BSShaderPackageVersion (RendererGlobalState+0xAF) >= 3 and BSShaderFeatureMask (RendererGlobalState+0xA7) contains native shadow-map bit 0x10. The version comparison independently corroborates the selector field read by GetShaderProgramPackageIndex.
BOOL sub_405A80()
{
  return *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 3 && (OB_RendererGlobalState_010201A0[0xA7] & 0x10) != 0; /*0x405a99*/
}
