// CommandInfo.execute wrapper for GetRandomPercent (index 77); delegates to GetRandomPercent_Eval, which is also the CTDA eval callback. Script execution and condition evaluation share the same percentage-roll logic.
char __cdecl Cmd_GetRandomPercent_Execute(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  return GetRandomPercent_Eval(a3, 0, 0, a7); /*0x503a06*/
}
