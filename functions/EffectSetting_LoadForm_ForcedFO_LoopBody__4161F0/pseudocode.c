int __userpurge EffectSetting_LoadForm_::ForcedFO_LoopBody@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5@<edi>,
        _DWORD *a6@<esi>,
        int a7)
{
  int v7; // eax

  v7 = EffectSetting_OverridableFlagList[a2];
  if ( (v7 & *a6) != 0 )
    return EffectSetting_LoadForm_::ForcedFO_LoopContinue(a4, a6, a3, v7 | a5, a1, a2, a7);
  else
    return EffectSetting_LoadForm_::ForcedFO_LoopContinue(a4, a6, a3, ~v7 & a5, a1, a2, a7);
}
