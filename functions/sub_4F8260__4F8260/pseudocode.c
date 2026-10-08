char __cdecl sub_4F8260(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f826c*/
  if ( a2 ) /*0x4f826e*/
  {
    if ( *(char *)(a2 + 0x34) < 0 ) /*0x4f8279*/
      *a4 = 1.0; /*0x4f827d*/
  }
  if ( !MEMORY[0xB361AC] ) /*0x4f827f*/
    return 1; /*0x4f82b3*/
  if ( 0.0 == *a4 ) /*0x4f828f*/
    Interface_ConsolePrint("PC has not submitted to authority."); /*0x4f82a6*/
  else
    Interface_ConsolePrint("PC submited to authority."); /*0x4f8296*/
  return 1; /*0x4f82a0*/
}
