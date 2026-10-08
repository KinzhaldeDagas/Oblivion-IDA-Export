int __usercall MagicTarget_ProcessEffects_::ActvEffLoop_CheckEntry@<eax>(
        ActiveEffect **a1@<ebp>,
        int a2@<edi>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  int v9; // eax

  v9 = (int)a1[1]; /*0x6a2325*/
  if ( !v9 && !*a1 ) /*0x6a232f*/
    JUMPOUT(0x6A23A2); /*0x6a23a2*/
  return MagicTarget_ProcessEffects_::ActvEffLoop_CheckEffect(v9, a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
