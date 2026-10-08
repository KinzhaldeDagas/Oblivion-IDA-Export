// Selects the LOS sound multiplier: full contribution with sight, fSneakSoundLosMult without sight. Detection can therefore still occur through sound when visual LOS fails.
int __cdecl Calc_DetectionLevel_ApplyLOSMultiplier(
        float a1,
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
  int v21; // [esp+4h] [ebp+4h]
  int v22; // [esp+8h] [ebp+8h]
  float v23; // [esp+8h] [ebp+8h]

  if ( a7 ) /*0x54648a*/
  {
    __asm { fst     [esp+arg_0] } /*0x54648c*/
  }
  else
  {
    __asm /*0x546492*/
    {
      fld     dword ptr ds:0B36718h
      fstp    [esp+arg_0]; float
    }
  }
  __asm /*0x54649e*/
  {
    fxch    st(1)
    fst     [esp+arg_4]; int
  }
  if ( !a7 ) /*0x5464a4*/
    return Calc_DetectionLevel_ApplySoundFactor( /*0x5464a4*/
             v21,
             *(float *)&v22,
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
  __asm /*0x5464a6*/
  {
    fxch    st(1)
    fst     [esp+arg_4]
    fxch    st(1)
  }
  return Calc_DetectionLevel_ApplySoundFactor(
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
