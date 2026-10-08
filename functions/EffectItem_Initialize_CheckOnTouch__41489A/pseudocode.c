void __userpurge EffectItem_Initialize_::CheckOnTouch(
        char eax0@<al>,
        int a1@<esi>,
        double a2@<st0>,
        int a3,
        int a5,
        char a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        void **a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25)
{
  if ( (eax0 & 0x20) != 0 ) /*0x4148a2*/
  {
    *(_DWORD *)(a1 + 0x10) = 1; /*0x4148a4*/
    EffectItem_Initialize_::Done(a1, a2, a3); /*0x4148ab*/
  }
  else
  {
    EffectItem_Initialize_::CheckOnTarget( /*0x4148a2*/
      eax0,
      a1,
      a2,
      a3,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17,
      a18,
      a19,
      a20,
      a21,
      a22,
      a23,
      a24,
      a25);
  }
}
