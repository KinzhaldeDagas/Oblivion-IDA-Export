int __usercall Actor_MagicTarget_PostAddEffect@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int *a8)
{
  if ( a5 && *(this + 0xFFFFFFFC) )
    return Actor_MagicTarget_PostAddEffect_::UpdateCachedShieldType((int)this, a5, st5_0, a3, a4, a5, a6, a7, a8);
  else
    return Actor_MagicTarget_PostAddEffect_::Done(a5);
}
