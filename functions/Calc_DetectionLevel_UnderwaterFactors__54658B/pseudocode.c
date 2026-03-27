int __cdecl Calc_DetectionLevel_::UnderwaterFactors(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
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
  if ( (_BYTE)a18 )
  {
    __asm
    {
      fst     [esp+arg_1C]
      fld     dword ptr ds:0B36730h
      fmul    [esp+arg_4C]
      fstp    [esp+arg_4C]
    }
  }
  return Calc_DetectionLevel_::CalcSleepBonus(
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
           a19);
}
