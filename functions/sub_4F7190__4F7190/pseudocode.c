// GetPCIsClass_Eval is explicitly player-scoped: it calls GetIsClass_Eval(reference, param1, ...), ignoring the current condition subject.
char __cdecl GetPCIsClass_Eval(int a1, int a2, int a3, double *a4)
{
  return GetIsClass_Eval((int)reference, a2, a3, a4);
}
