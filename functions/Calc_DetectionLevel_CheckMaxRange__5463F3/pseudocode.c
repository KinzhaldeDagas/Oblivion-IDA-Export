// Rejects targets beyond fSneakMaxDistance; exterior targets scale that limit by fSneakExteriorDistanceMult. The attack/forced-detection path bypasses the range rejection.
// positive sp value has been detected, the output may be wrong!
int __cdecl Calc_DetectionLevel_CheckMaxRange(
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
        int a19)
{
  float v20; // [esp-10h] [ebp-10h]

  v20 = MEMORY[0xB36708]; /*0x5463fe*/
  if ( (_BYTE)a16 ) /*0x546401*/
    v20 = MEMORY[0xB36748] * v20; /*0x54640c*/
  if ( *(float *)&a4 <= (double)v20 || (_BYTE)a11 ) /*0x546425*/
    return Calc_DetectionLevel_ApplyDistanceFactor( /*0x546421*/
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
    return 0; /*0x546429*/
}
