double __usercall unknown_libname_156@<st0>(
        int a1@<eax>,
        DWORD a2@<edx>,
        int a3@<ecx>,
        double a4@<st0>,
        __int16 a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD v9[6]; // [esp+0h] [ebp-20h] BYREF
  double v10; // [esp+18h] [ebp-8h]

  v9[0] = a1; /*0x991abd*/
  v10 = a4; /*0x991ac0*/
  v9[1] = a3; /*0x991ac3*/
  v9[2] = a7; /*0x991acc*/
  v9[3] = a8; /*0x991acf*/
  _87except(a2, (int)v9, &a5); /*0x991adb*/
  return v10; /*0x991af1*/
}
