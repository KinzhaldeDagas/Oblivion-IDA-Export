char __cdecl sub_4F8590(int a1, int a2, int a3, double *a4)
{
  int v4; // edx
  double v5; // st7

  v4 = reference->miscStats[a2]; /*0x4f859a*/
  v5 = (double)v4; /*0x4f85a1*/
  if ( v4 < 0 ) /*0x4f85aa*/
    v5 = v5 + dbl_A30E60; /*0x4f85ac*/
  *a4 = v5; /*0x4f85b6*/
  if ( MEMORY[0xB361AC] ) /*0x4f85b8*/
    Interface_ConsolePrint("Player misc stat value %.02f", v5); /*0x4f85cc*/
  return 1; /*0x4f85d6*/
}
