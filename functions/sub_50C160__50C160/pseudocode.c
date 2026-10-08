char __cdecl sub_50C160(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  double *v7; // ecx

  v7 = a7; /*0x50c167*/
  *a7 = 0.0; /*0x50c16b*/
  a7 = 0; /*0x50c16d*/
  if ( a3 ) /*0x50c175*/
  {
    if ( a4 ) /*0x50c17d*/
    {
      a7 = *(double **)(a4 + 0xC); /*0x50c188*/
      sub_4F9FB0(&a7, v7); /*0x50c18c*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x50c194*/
    Interface_ConsolePrint("GetContainer >>(%08x)", a7); /*0x50c1a7*/
  return 1; /*0x50c1b1*/
}
