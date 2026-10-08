// Applies fSneakTargetAttackBonus when the target has attacked the detector; otherwise retains the current factor.
int __usercall Calc_DetectionLevel_ApplyAttackBonus@<eax>(
        char a1@<zf>,
        int a2,
        int a3,
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
        int a20,
        float a21)
{
  int v22; // [esp+8h] [ebp+8h]

  __asm { fst     [esp+arg_4]; Applies fSneakTargetAttackBonus when the target has attacked the detector; otherwise retains the current factor. } /*0x54657b*/
  if ( !a1 ) /*0x54657f*/
  {
    __asm /*0x546581*/
    {
      fld     dword ptr ds:0B366E0h
      fstp    [esp+arg_4]
    }
  }
  return Calc_DetectionLevel_ApplyUnderwaterFactor(
           a2,
           *(float *)&v22,
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
