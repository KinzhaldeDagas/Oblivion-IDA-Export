// GetDeadCount_Eval uses its Actor Base parameter to query the engine's global form-to-dead-count list. The helper returns the matching 16-bit count or 0 when no entry exists; no subject reference is required.
char __cdecl GetDeadCount_Eval(TESObjectREFR *subject, TESForm *actorBase, TESForm *param2, double *value)
{
  double v4; // st7

  *value = 0.0; /*0x4f501d*/
  if ( !actorBase ) /*0x4f501f*/
    return 1; /*0x4f501f*/
  v4 = (double)sub_440F70((int *)MEMORY[0xB333A0], (int)actorBase); /*0x4f5034*/
  *value = v4; /*0x4f5038*/
  if ( !MEMORY[0xB361AC] ) /*0x4f503a*/
    return 1; /*0x4f505c*/
  Interface_ConsolePrint("Dead Count: %0.2f", v4);
  return 1; /*0x4f5058*/
}
