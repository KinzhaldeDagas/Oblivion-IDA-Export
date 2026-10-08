// positive sp value has been detected, the output may be wrong!
void __usercall SummonCreatureEffect_DispelOtherSummons_::EffectLoop_Next(
        ActiveEffect *a1@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        ActiveEffect **a4@<esi>,
        double a5@<st0>,
        int a6,
        float a7)
{
  if ( a4 ) /*0x6a5bda*/
  {
    SummonCreatureEffect_DispelOtherSummons_::EffectLoop_Test(a4, a1, a5, a2, a3, a6, a7); /*0x6a5bda*/
  }
  else
  {
    if ( a1 ) /*0x6a5bdf*/
    {
      if ( a3 > SLODWORD(flt_B37ED0[0xEC]) ) /*0x6a5be7*/
        ActiveEffect_Base_Remove(a1, a2, a5, 0); /*0x6a5beb*/
    }
    SummonCreatureEffect_DispelOtherSummons_::Done(); /*0x6a5bec*/
  }
}
