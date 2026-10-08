int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_InedbibleIngredFinish@<eax>(
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
        float a11,
        float a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int v17; // [esp+2Ch] [ebp+24h]
  int v18; // [esp+30h] [ebp+28h]

  *(float *)&v17 = Round_Float(a11, 1.0); /*0x69b422*/
  *(float *)&v18 = Round_Float(a12, 1.0); /*0x69b438*/
  *(float *)(a1 + 0x1C) = *(float *)&v17; /*0x69b443*/
  *(float *)(a1 + 0x18) = *(float *)&v18; /*0x69b44a*/
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
           v17,
           v18,
           a13,
           a14,
           a15,
           a16);
}
