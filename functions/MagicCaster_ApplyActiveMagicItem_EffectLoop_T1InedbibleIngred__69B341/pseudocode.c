int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_T1InedbibleIngred@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        TESObjectREFR *ebx0@<ebx>,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        float a13,
        float a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        __int64 a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33)
{
  float v34; // [esp+0h] [ebp-20h]
  float v35; // [esp+4h] [ebp-1Ch]
  float v36; // [esp+10h] [ebp-10h]
  float v37; // [esp+14h] [ebp-Ch]
  float v38; // [esp+18h] [ebp-8h]

  __asm { fst     [esp+10h+var_8]; float } /*0x69b346*/
  __asm { fst     [esp+10h+var_C]; float }
  __asm { fstp    [esp+10h+var_10]; float }
  __asm { fld     [esp+14h+arg_74] }
  __asm
  {
    fstp    [esp+20h+var_1C]; float
    fld     [esp+20h+arg_2C]
    fstp    [esp+20h+var_20]; float
  }
  Calc_T1PotionStrength(&a14, &a13, v34, v35, 6, 0, v36, v37, v38, 0); /*0x69b374*/
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_InedbibleIngredFinish(
           a2,
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
           a18);
}
