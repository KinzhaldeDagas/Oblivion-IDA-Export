// positive sp value has been detected, the output may be wrong!
int __usercall SummonCreatureEffect_DispelOtherSummons_::EffectLoop_Next@<eax>(
        ActiveEffect *a1@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        int *a4@<esi>,
        double a5@<st0>,
        int a6,
        float a7)
{
  if ( a4 )
    return SummonCreatureEffect_DispelOtherSummons_::EffectLoop_Test(a4, (int)a1, a5, a6, a7);
  if ( a1 )
  {
    if ( a3 > iMaxPlayerSummonedCreatures )
      ActiveEffect_Base_Remove(a1, a2, a5, 0);
  }
  return SummonCreatureEffect_DispelOtherSummons_::Done();
}
