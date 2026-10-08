// Selects whether the target's sneaking state contributes the alternate sneak factor before skill comparison.
int __cdecl Calc_DetectionLevel_SelectSneakFactor(
        int a1,
        float a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        float a20)
{
  int v21; // [esp+8h] [ebp+8h]

  __asm { fst     [esp+arg_4]; float } /*0x546534*/
  if ( (_BYTE)a14 ) /*0x546538*/
  {
    __asm /*0x54653a*/
    {
      fxch    st(2)
      fst     [esp+arg_4]
      fxch    st(2)
    }
  }
  return Calc_DetectionLevel_ApplySneakSkills(
           a1,
           v21,
           a3,
           a4,
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
           a20);
}
