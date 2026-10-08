int __usercall DispelEffect_Apply_::EffectLoop_Next@<eax>(
        ActiveEffect **a1@<ebx>,
        ActiveEffect *a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  if ( a1 ) /*0x693b43*/
    return DispelEffect_Apply_::EffectLoop_Check(a2, a1, a3, a4, a5, a6, a7); /*0x693b43*/
  else
    return DispelEffect_Apply_::Done_(); /*0x693b44*/
}
