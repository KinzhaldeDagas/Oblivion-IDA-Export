void __cdecl __noreturn EffectItem_Initialize_::NoValidRange(
        int a1,
        int a2,
        OB_stString28_010201A0 a3,
        void **a4,
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
        int a16)
{
  __asm { fstp    st } /*0x4148c2*/
  sub_414750(&a3, "EffectID does not allow any Range setting!"); /*0x4148c8*/
  sub_4146E0((std::exception *)&a4, &a3); /*0x4148da*/
  a4 = &std::invalid_argument::`vftable'; /*0x4148e9*/
  ThrowException__((DWORD)&a4, &_TI3_AVinvalid_argument_std__); /*0x4148f1*/
}
