// Carries the sleeping-target bonus stage (fSneakSleepBonus) into final aggregation.
int __usercall Calc_DetectionLevel_ApplySleepBonus@<eax>(
        double result@<st0>,
        int a2,
        float a3,
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
        int a17)
{
  return Calc_DetectionLevel_Finalize(result, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
}
