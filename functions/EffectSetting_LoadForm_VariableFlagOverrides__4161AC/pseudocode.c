int __userpurge EffectSetting_LoadForm_::VariableFlagOverrides@<eax>(
        _DWORD *a1@<esi>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5)
{
  if ( EffectSetting_DisplayedFlagListSize <= 0 )
    return EffectSetting_LoadForm_::ForcedFlagOverrrides(a2, a3, a4, a1, a5);
  else
    return EffectSetting_LoadForm_::VariableFO_LoopBody(0, EffectSetting_DisplayedFlagListSize, a1, a2, a3, a4, a5);
}
