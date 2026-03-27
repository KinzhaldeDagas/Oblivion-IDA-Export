// positive sp value has been detected, the output may be wrong!
int __cdecl Calc_DetectionLevel_::CheckMaxRange(
        int a1,
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
        int a19)
{
  float v20; // [esp-10h] [ebp-10h]

  v20 = fSneakMaxDistance;
  if ( (_BYTE)a16 )
    v20 = fSneakExteriorDistanceMult * v20;
  if ( *(float *)&a4 <= (double)v20 || (_BYTE)a11 )
    return Calc_DetectionLevel_::CalcDistFactor(
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
  else
    return 0;
}
