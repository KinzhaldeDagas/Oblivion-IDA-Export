int __usercall DispelEffect_Apply_::EffectLoop_Check@<eax>(
        ActiveEffect *a1@<ebp>,
        ActiveEffect **a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // ebx

  v7 = (int)a2[1]; /*0x693ae0*/
  if ( v7 || *a2 ) /*0x693ae7*/
    return DispelEffect_Apply_::EffectLoop_Body(v7, a1, a2, a3, a4, a5, a6, a7); /*0x693aea*/
  else
    return DispelEffect_Apply_::Done_(); /*0x693ae9*/
}
