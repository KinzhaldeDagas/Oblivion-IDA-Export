char __cdecl sub_4F4DA0(int a1, int a2, int a3, double *a4)
{
  double v4; // st7

  v4 = (double)sub_520F10(); /*0x4f4da9*/
  *a4 = v4; /*0x4f4db0*/
  if ( MEMORY[0xB361AC] ) /*0x4f4db2*/
    Interface_ConsolePrint("GetIsUsedItemLevel >> %0.2f", v4); /*0x4f4dc6*/
  return 1; /*0x4f4dd1*/
}
