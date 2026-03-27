int __usercall Calc_DetectionLevel_::CalcMovementFactor@<eax>(
        char a1@<zf>,
        int a2,
        int a3,
        int a4,
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
        int a20)
{
  int v21; // [esp+20h] [ebp+20h]

  __asm { fst     [esp+arg_1C] }
  if ( !a1 )
  {
    __asm
    {
      fild    [esp+arg_2C]
      fmul    dword ptr ds:0B366F8h
      fadd    dword ptr ds:0B366F0h
      fstp    [esp+arg_1C]
    }
  }
  return Calc_DetectionLevel_::CalcInCombatBonus(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           v21,
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
