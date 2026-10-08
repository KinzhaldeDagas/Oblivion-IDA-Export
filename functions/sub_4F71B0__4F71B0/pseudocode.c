// GetPCIsSex_Eval is explicitly player-scoped: it calls GetIsSex_Eval(reference, param1, ...), ignoring the current condition subject.
char __cdecl GetPCIsSex_Eval(int a1, int a2, int a3, double *a4)
{
  return GetIsSex_Eval((int)reference, a2, a3, a4);
}
