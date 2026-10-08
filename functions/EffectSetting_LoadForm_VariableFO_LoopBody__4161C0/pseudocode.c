int __userpurge EffectSetting_LoadForm_::VariableFO_LoopBody@<eax>(
        int a1@<eax>,
        int a2@<edx>,
        _DWORD *a3@<esi>,
        int a4@<ebx>,
        int a5@<ebp>,
        int a6@<edi>,
        int a7)
{
  int v7; // ecx

  if ( !byte_B0341C[8 * a1] ) /*0x4161c0*/
    return EffectSetting_LoadForm_::VariableFO_LoopContinue(a1, a2, a4, a5, a6, a3, a7); /*0x4161c8*/
  v7 = EffectSetting_DisplayedFlagList[2 * a1]; /*0x4161ca*/
  if ( (v7 & *a3) != 0 ) /*0x4161d3*/
    return EffectSetting_LoadForm_::VariableFO_LoopContinue(a1, a2, a4, a5, v7 | a6, a3, a7); /*0x4161d7*/
  else
    return EffectSetting_LoadForm_::VariableFO_LoopContinue(a1, a2, a4, a5, ~v7 & a6, a3, a7); /*0x4161dc*/
}
