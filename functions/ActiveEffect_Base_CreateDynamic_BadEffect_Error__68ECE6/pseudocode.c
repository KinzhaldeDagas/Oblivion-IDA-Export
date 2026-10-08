void __cdecl __noreturn ActiveEffect_Base_CreateDynamic_::BadEffect_Error(
        int a1,
        int a2,
        int a3,
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
        int a19,
        int a20,
        signed int a21)
{
  sub_414750((int)&a2, "Could not Activate unregistered effect!"); /*0x68ecef*/
  a21 = 9; /*0x68ecfd*/
  sub_68EA30((std::exception *)&a9, &a2); /*0x68ed05*/
  ThrowException__((DWORD)&a9, &_TI4_AVexUnregisteredActiveEffect_ActiveEffect__); /*0x68ed14*/
}
