int __usercall Calc_DetectionLevel_::CalcAttackBonus@<eax>(
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
        int a20,
        float a21)
{
  int v22; // [esp+8h] [ebp+8h]

  __asm { fst     [esp+arg_4]; int }
  if ( !a1 )
  {
    __asm
    {
      fld     dword ptr ds:0B366E0h
      fstp    [esp+arg_4]
    }
  }
  return Calc_DetectionLevel_::UnderwaterFactors(
           a2,
           v22,
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
           a20,
           a21);
}
