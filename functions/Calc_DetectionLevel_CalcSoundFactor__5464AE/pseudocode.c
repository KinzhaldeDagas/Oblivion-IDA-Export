int __cdecl Calc_DetectionLevel_::CalcSoundFactor(
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
        int a19,
        float a20)
{
  int v23; // [esp+20h] [ebp+20h]

  __asm
  {
    fld     [esp+arg_4C]
    fmul    [esp+arg_1C]
    fadd    dword ptr [esp+0]
    fld     [esp+arg_8]
    fld     st
    fmulp   st(2), st
    fld     [esp+arg_0]
    fmulp   st(2), st
    fld     dword ptr ds:0B36740h
    fmulp   st(2), st
    fxch    st(1)
    fstp    [esp+arg_1C]; int
    fxch    st(1)
    fcom    [esp+arg_1C]
    fnstsw  ax
  }
  if ( (_AX & 0x4100) == 0 )
    __asm { fst     [esp+arg_1C] }
  return Calc_DetectionLevel_::CalcLightFactor(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           v23,
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
