int __cdecl Calc_DetectionLevel_::CalcLOSMult(
        float a1,
        int a2,
        float a3,
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
  float v21; // [esp+4h] [ebp+4h]
  int v22; // [esp+8h] [ebp+8h]
  int v23; // [esp+8h] [ebp+8h]

  if ( a7 )
  {
    __asm { fst     [esp+arg_0] }
  }
  else
  {
    __asm
    {
      fld     dword ptr ds:0B36718h
      fstp    [esp+arg_0]; float
    }
  }
  __asm
  {
    fxch    st(1)
    fst     [esp+arg_4]; int
  }
  if ( !a7 )
    return Calc_DetectionLevel_::CalcSoundFactor(
             v21,
             v22,
             a3,
             a4,
             a5,
             a6,
             0,
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
  __asm
  {
    fxch    st(1)
    fst     [esp+arg_4]
    fxch    st(1)
  }
  return Calc_DetectionLevel_::CalcSoundFactor(
           v21,
           v23,
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
