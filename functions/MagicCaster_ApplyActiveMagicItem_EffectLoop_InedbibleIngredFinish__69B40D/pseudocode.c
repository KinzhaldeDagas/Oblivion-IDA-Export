int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_InedbibleIngredFinish@<eax>(
        int a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        int a7,
        int a8,
        int a9,
        float a10,
        float a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  float v19; // [esp+2Ch] [ebp+24h]
  float v20; // [esp+30h] [ebp+28h]

  v19 = Round_Float(a10, 1.0);
  v20 = Round_Float(a11, 1.0);
  *(float *)(a1 + 0x1C) = v19;
  *(float *)(a1 + 0x18) = v20;
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_CheckRange(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           LODWORD(v19),
           LODWORD(v20),
           a12,
           a13,
           a14,
           a15);
}
