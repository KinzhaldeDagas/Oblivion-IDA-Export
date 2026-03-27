int __usercall DispelEffect_Apply_::EffectLoop_Check@<eax>(
        int a1@<ebp>,
        int *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // ebx

  v7 = a2[1];
  if ( v7 || *a2 )
    return DispelEffect_Apply_::EffectLoop_Body(v7, a1, a2, a3, a4, a5, a6, a7);
  else
    return DispelEffect_Apply_::Done_();
}
