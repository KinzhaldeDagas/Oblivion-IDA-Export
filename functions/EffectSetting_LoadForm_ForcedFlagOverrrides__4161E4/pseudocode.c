int __userpurge EffectSetting_LoadForm_::ForcedFlagOverrrides@<eax>(
        int ebx0@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        _DWORD *a4@<esi>,
        int a5)
{
  if ( EffectSetting_OverridableFlagListSize <= 0 )
    return EffectSetting_LoadForm_::SetNewFlags(a2, a4, ebx0, a3, a5);
  else
    return EffectSetting_LoadForm_::ForcedFO_LoopBody(EffectSetting_OverridableFlagListSize, 0, ebx0, a2, a3, a4, a5);
}
