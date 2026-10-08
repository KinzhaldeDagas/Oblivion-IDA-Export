char __cdecl sub_4F59B0(int a1, int a2, int a3, double *a4)
{
  double v4; // st7

  *a4 = 0.0; /*0x4f59b7*/
  v4 = (double)reference->vtbl->super.GetInfamy((Actor *)reference); /*0x4f59cd*/
  *a4 = v4; /*0x4f59d1*/
  if ( MEMORY[0xB361AC] ) /*0x4f59d3*/
    Interface_ConsolePrint("Player Infamy is %0.2f", v4); /*0x4f59e8*/
  return 1; /*0x4f59f2*/
}
