int __cdecl Calc_DetectionLevel_::CalcLightFactor(
        int a1,
        float a2,
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
        int a19)
{
  float v21; // [esp+50h] [ebp+50h]

  __asm
  {
    fild    [esp+arg_24]
    fadd    dword ptr ds:0B36CB8h
    fld     [esp+arg_4]
    fmul    st, st(3)
    fmulp   st(1), st
    fild    [esp+arg_20]
    fld     qword ptr ds:0A309F0h
    fld     st
    fsubrp  st(2), st
    fxch    st(2)
    fmulp   st(1), st
    fdiv    st, st(1)
    fild    [esp+arg_28]
    fsubr   st, st(2)
    fdivrp  st(2), st
    fmulp   st(1), st
    fmul    dword ptr ds:0B36738h
    fstp    [esp+arg_4C]
    fcom    [esp+arg_4C]
    fnstsw  ax
  }
  if ( (_AX & 0x4100) == 0 )
    __asm { fst     [esp+arg_4C] }
  return Calc_DetectionLevel_::CalcSneakFactor(
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
           v21);
}
