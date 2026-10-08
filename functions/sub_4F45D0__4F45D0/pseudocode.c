// GetBaseAV eval/helper. Requires an actor-like reference, reads base calculated AV, writes the numeric result, and prints to console when active.
char __usercall Cmd_GetBaseAV_EvalOrConsole@<al>(int a1@<ebx>, int *a2, int a3, int a4, double *a5)
{
  double BaseCalcAVi; // st7

  if ( !a2 ) /*0x4f45d7*/
    return 1; /*0x4f45d7*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*a2 + 0x190))(a2) ) /*0x4f45e3*/
    return 1; /*0x4f45e3*/
  BaseCalcAVi = (double)Actor_GetBaseCalcAVi(a2, a1, a3, (int)a2, a3); /*0x4f45fa*/
  *a5 = BaseCalcAVi; /*0x4f4602*/
  if ( !MEMORY[0xB361AC] ) /*0x4f4604*/
    return 1; /*0x4f4630*/
  Interface_ConsolePrint("GetBaseActorValue: %s >> %0.2f", *(const char **)(4 * a3 + 0xB0A1A8), BaseCalcAVi);
  return 1; /*0x4f462b*/
}
