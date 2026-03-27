int __usercall DispelEffect_Apply_::EffectLoop_Next@<eax>(
        int *a1@<ebx>,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  if ( a1 )
    return DispelEffect_Apply_::EffectLoop_Check(a2, a1, a3, a4, a5, a6, a7);
  else
    return DispelEffect_Apply_::Done_();
}
