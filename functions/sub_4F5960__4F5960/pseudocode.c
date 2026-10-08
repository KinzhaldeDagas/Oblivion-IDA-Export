char __cdecl sub_4F5960(int a1, int a2, int a3, double *a4)
{
  double v4; // st7

  *a4 = 0.0; /*0x4f5967*/
  v4 = (double)reference->vtbl->super.GetFame((Actor *)reference); /*0x4f597d*/
  *a4 = v4; /*0x4f5981*/
  if ( MEMORY[0xB361AC] ) /*0x4f5983*/
    Interface_ConsolePrint("Player Fame is %0.2f", v4); /*0x4f5998*/
  return 1; /*0x4f59a2*/
}
