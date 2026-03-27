int __cdecl Calc_DetectionLevel_::CalcSneakSkills(
        int a1,
        int a2,
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
  char v20; // cl
  int v22; // [esp+Ch] [ebp+Ch]

  if ( a5 > 0x64 )
    a5 = 0x64;
  if ( a6 > 0x64 )
    a6 = 0x64;
  __asm
  {
    fild    [esp+arg_10]
    fmulp   st(2), st
    fild    [esp+arg_14]
    fmul    [esp+arg_4]
    fsubp   st(2), st
    fld     dword ptr ds:0B36710h
    fmulp   st(2), st
    fxch    st(1)
    fstp    [esp+arg_8]
  }
  return Calc_DetectionLevel_::CalcAttackBonus(
           v20 == 0,
           a1,
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
           a20);
}
