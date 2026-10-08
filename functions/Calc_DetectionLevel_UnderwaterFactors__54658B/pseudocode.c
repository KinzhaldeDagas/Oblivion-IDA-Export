// When the underwater condition is active, scales the relevant light/visibility term by fSneakSwimmingLightMult.
int __usercall Calc_DetectionLevel_ApplyUnderwaterFactor@<eax>(
        double a1@<st0>,
        int a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
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
        char a20,
        float a21)
{
  if ( (_BYTE)a19 ) /*0x546590*/
  {
    __asm /*0x546592*/
    {
      fst     [esp+arg_1C]
      fld     dword ptr ds:0B36730h
      fmul    [esp+arg_4C]
      fstp    [esp+arg_4C]
    }
  }
  return Calc_DetectionLevel_ApplySleepBonus(
           a1,
           a2,
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
