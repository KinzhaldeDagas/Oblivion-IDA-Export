int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_T4InedbibleIngred@<eax>(
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
        int a18)
{
  __asm { fstp    st } /*0x69b40b*/
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
