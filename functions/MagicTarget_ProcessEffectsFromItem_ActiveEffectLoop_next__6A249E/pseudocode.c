int __userpurge MagicTarget_ProcessEffectsFromItem_::ActiveEffectLoop_next@<eax>(
        ActiveEffect **a1@<ebp>,
        int a2@<edi>,
        double a3@<st1>,
        int a4,
        int a5,
        int a6,
        int a7,
        MagicItem *a8)
{
  if ( a1 )
    return MagicTarget_ProcessEffectsFromItem_::ActiveEffectLoop(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return MagicTarget_ProcessEffectsFromItem_::Done(a4);
}
