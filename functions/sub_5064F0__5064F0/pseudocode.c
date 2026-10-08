char __cdecl sub_5064F0(int a1, int a2, TESObjectREFR *a3, int a4, int a5, int a6, double *a7)
{
  char v7; // bl

  v7 = sub_4F5D20(a3, 0, 0, a7); /*0x50650f*/
  if ( MEMORY[0xB361AC] ) /*0x506508*/
    Interface_ConsolePrint("Actor players last ridden horse >> %0.2f", *a7); /*0x506520*/
  return v7; /*0x506528*/
}
