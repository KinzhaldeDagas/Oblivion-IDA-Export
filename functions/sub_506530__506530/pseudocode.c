char __cdecl sub_506530(int a1, int a2, TESObjectREFR *a3, int a4, int a5, int a6, double *a7)
{
  char v7; // bl

  v7 = sub_4F86A0(a3, 0, 0, a7); /*0x50654f*/
  if ( MEMORY[0xB361AC] ) /*0x506548*/
    Interface_ConsolePrint("Actor is in lava >> %0.2f", *a7); /*0x506560*/
  return v7; /*0x506568*/
}
