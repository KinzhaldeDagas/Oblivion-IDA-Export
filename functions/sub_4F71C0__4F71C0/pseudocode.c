// GetPCInFaction_Eval is explicitly player-scoped: it calls GetInFaction_Eval(reference, param1, ...), ignoring the current condition subject.
char __cdecl GetPCInFaction_Eval(TESObjectREFR *subject, TESForm *a2, TESForm *a3, double *a4)
{
  return GetInFaction_Eval((TESObjectREFR *)reference, a2, a3, a4);
}
