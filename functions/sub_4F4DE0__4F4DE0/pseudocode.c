char __cdecl sub_4F4DE0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f4de7*/
  if ( sub_520F30() ) /*0x4f4de9*/
    *a4 = 1.0; /*0x4f4df4*/
  if ( MEMORY[0xB361AC] ) /*0x4f4df6*/
    Interface_ConsolePrint("GetIsUsedItemActivate >> %0.2f", *a4); /*0x4f4e0c*/
  return 1; /*0x4f4e16*/
}
