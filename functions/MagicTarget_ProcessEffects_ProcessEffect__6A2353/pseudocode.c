int __usercall MagicTarget_ProcessEffects_::ProcessEffect@<eax>(
        int a1@<ebx>,
        char a2@<bpl>,
        int a3@<edi>,
        ActiveEffect *a4@<esi>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float a11)
{
  ActiveEffect_Base_ProcessEffect(a4, a2, a11, a5, a11);// Verified active-effect update loop: MagicTarget_ProcessEffects walks the target's active-effect list and calls ActiveEffect_Base_ProcessEffect for each eligible ActiveEffect, passing the effect-item/magic context and frame delta. If processing marks an effect removed, the loop unlinks it and invokes its virtual destructor. /*0x6a235d*/
  if ( a4->members.bTerminated )                // Verified list lifecycle: after ActiveEffect_Base_ProcessEffect, MagicTarget_ProcessEffects checks bTerminated; terminated entries are unlinked from the active list and destroyed through their virtual destructor. /*0x6a2362*/
    return MagicTarget_ProcessEffects_::DestroyEffect(a3, a4, a1, a2, a6); /*0x6a2367*/
  else
    return MagicTarget_ProcessEffects_::ActvEffLoop_Next(a1, a6); /*0x6a2366*/
}
