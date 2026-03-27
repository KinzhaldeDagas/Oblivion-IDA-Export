int __usercall SummonCreatureEffect_DispelOtherSummons_::EffectLoop_Test@<eax>(
        int *a1@<eax>,
        int a2@<ecx>,
        double a3@<st0>,
        int a4,
        float a5)
{
  int v5; // edx
  int v6; // eax

  if ( !a1[1] && !*a1 )
    JUMPOUT(0x6A5BDC);
  v5 = *a1;
  v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*a1 + 0xC) + 0x1C) + 0x58);
  if ( (v6 & 0x70000) != 0 && (v6 & 0x40000) != 0 && (a3 = *(float *)(v5 + 4), a5 < a3) )
    return SummonCreatureEffect_DispelOtherSummons_::EffectLoop_Next(v5, a4, *(float *)(v5 + 4), *(float *)(v5 + 4));
  else
    return SummonCreatureEffect_DispelOtherSummons_::EffectLoop_Next(a2, a4, LODWORD(a5), a3);
}
