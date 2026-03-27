void __cdecl __noreturn EffectItem_Initialize_::NoValidRange(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void **a10,
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
        int a21,
        int a22)
{
  __asm { fstp    st }
  sub_414750((int)&a3, "EffectID does not allow any Range setting!");
  sub_4146E0((std::exception *)&a10, &a3);
  a10 = &std::invalid_argument::`vftable';
  ThrowException__((int)&a10, &_TI3_AVinvalid_argument_std__);
}
