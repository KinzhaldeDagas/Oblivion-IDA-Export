int __usercall MagicTarget_ProcessEffects_::ProcessEffect@<eax>(
        int a1@<ebx>,
        char a2@<bpl>,
        int a3@<edi>,
        ActiveEffect *a4@<esi>,
        double a5@<st1>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float a11)
{
  ActiveEffect_Base_ProcessEffect(a4, a2, a5, a11, a11);
  if ( a4->members.bTerminated )
    return MagicTarget_ProcessEffects_::DestroyEffect(a3, a4, a1, a2, a6);
  else
    return MagicTarget_ProcessEffects_::ActvEffLoop_Next(a1, a6);
}
