int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_EdibleIngredient@<eax>(
        int a1@<edi>,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  *(float *)(a1 + 0x1C) = 1.0; /*0x69b30a*/
  *(float *)(a1 + 0x18) = flt_B37ED0[0x30]; /*0x69b313*/
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_CheckRange(
           a2,
           a1,
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
           a16);
}
