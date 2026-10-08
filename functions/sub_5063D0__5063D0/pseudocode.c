char __cdecl Cmd_GetNoRumors_Execute(int a1, int a2, TESObjectREFR *a3, int a4, int a5, int a6, double *a7)
{
  char NoRumors_Evaluate; // bl

  NoRumors_Evaluate = Cmd_GetNoRumors_Evaluate(a3, 0, 0, a7); /*0x5063ef*/
  if ( MEMORY[0xB361AC] ) /*0x5063e8*/
    Interface_ConsolePrint("GetNoRumors >> %0.2f", *a7); /*0x506400*/
  return NoRumors_Evaluate; /*0x506408*/
}
