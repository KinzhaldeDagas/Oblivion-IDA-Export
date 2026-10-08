// GetPCIsRace_Eval is explicitly player-scoped: it calls GetIsRace_Eval(reference, param1, ...), ignoring the current condition subject.
char __cdecl GetPCIsRace_Eval(int a1, int a2, int a3, double *a4)
{
  return GetIsRace_Eval((int)reference, a2, a3, a4);
}
