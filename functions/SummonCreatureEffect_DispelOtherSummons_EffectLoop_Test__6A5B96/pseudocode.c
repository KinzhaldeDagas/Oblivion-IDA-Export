int __usercall SummonCreatureEffect_DispelOtherSummons_::EffectLoop_Test@<eax>(
        ActiveEffect **a1@<eax>,
        ActiveEffect *a2@<ecx>,
        double a3@<st0>,
        char a4@<bpl>,
        int a5@<edi>,
        int a6,
        float a7)
{
  int *v7; // esi
  ActiveEffect *v8; // edx
  UInt32 effectFlags; // eax

  v7 = (int *)a1[1]; /*0x6a5b96*/
  if ( !v7 && !*a1 ) /*0x6a5b9f*/
    JUMPOUT(0x6A5BDC); /*0x6a5bdc*/
  v8 = *a1; /*0x6a5ba1*/
  effectFlags = (*a1)->members.effectItem->setting->effectFlags; /*0x6a5ba9*/
  if ( (effectFlags & 0x70000) != 0 && (effectFlags & 0x40000) != 0 && (++a5, a7 < (double)v8->members.timeElapsed) ) /*0x6a5bcb*/
    return SummonCreatureEffect_DispelOtherSummons_::EffectLoop_Next(v8, a4, a5, v7, a3, a6, v8->members.timeElapsed); /*0x6a5bd3*/
  else
    return SummonCreatureEffect_DispelOtherSummons_::EffectLoop_Next(a2, a4, a5, v7, a3, a6, a7); /*0x6a5bcb*/
}
