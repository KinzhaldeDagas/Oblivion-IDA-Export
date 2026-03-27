int __userpurge EffectSetting_LoadForm_::VariableFO_LoopContinue@<eax>(
        int a1@<eax>,
        int a2@<edx>,
        int ebx0@<ebx>,
        int ebp0@<ebp>,
        int a5@<edi>,
        _DWORD *a6@<esi>,
        int a7)
{
  int v7; // eax

  v7 = a1 + 1;
  if ( v7 < a2 )
    return EffectSetting_LoadForm_::VariableFO_LoopBody(v7, a2, a6, ebx0, ebp0, a5, a7);
  else
    return EffectSetting_LoadForm_::ForcedFlagOverrrides(ebx0, ebp0, a5, a6, a7);
}
