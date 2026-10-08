void __usercall Actor_MagicTarget_PostAddEffect(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int *a8)
{
  if ( a5 && *(this + 0xFFFFFFFC) ) /*0x5ee520*/
    Actor_MagicTarget_PostAddEffect_::UpdateCachedShieldType((int)this, a5, st5_0, a3, a4, a5, a6, a7, a8); /*0x5ee525*/
  else
    Actor_MagicTarget_PostAddEffect_::Done(a5); /*0x5ee51a*/
}
