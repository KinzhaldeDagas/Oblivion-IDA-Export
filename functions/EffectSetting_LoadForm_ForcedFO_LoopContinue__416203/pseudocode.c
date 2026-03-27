int __userpurge EffectSetting_LoadForm_::ForcedFO_LoopContinue@<eax>(
        int a1@<ebp>,
        _DWORD *a2@<esi>,
        int ebx0@<ebx>,
        int a4@<edi>,
        int a5@<edx>,
        int a6@<ecx>,
        int a7)
{
  int v7; // ecx

  v7 = a6 + 1;
  if ( v7 < a5 )
    return EffectSetting_LoadForm_::ForcedFO_LoopBody(a5, v7, ebx0, a1, a4, a2, a7);
  else
    return EffectSetting_LoadForm_::SetNewFlags(a1, a2, ebx0, a4, a7);
}
