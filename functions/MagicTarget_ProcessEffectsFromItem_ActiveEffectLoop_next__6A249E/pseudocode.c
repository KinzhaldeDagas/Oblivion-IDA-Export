int __userpurge MagicTarget_ProcessEffectsFromItem_::ActiveEffectLoop_next@<eax>(
        ActiveEffect **a1@<ebp>,
        int a2@<edi>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        MagicItem *a9)
{
  if ( a1 ) /*0x6a24a2*/
    return MagicTarget_ProcessEffectsFromItem_::ActiveEffectLoop(a1, a2, a3, a4, a5, a6, a7, a8, a9); /*0x6a24a2*/
  else
    return MagicTarget_ProcessEffectsFromItem_::Done(a5); /*0x6a24a3*/
}
