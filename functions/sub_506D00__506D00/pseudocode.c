char __cdecl sub_506D00(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  sub_4F5E30(a3, 0, 0, a7); /*0x506d0f*/
  if ( MEMORY[0xB361AC] ) /*0x506d17*/
    Interface_ConsolePrint("IsActor >> %0.2f", *a7); /*0x506d2d*/
  return 1; /*0x506d37*/
}
