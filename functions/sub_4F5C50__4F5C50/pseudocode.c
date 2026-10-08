// GetNoRumors_Evaluate is separately used by CTDA rows: returns Actor::IsNoRumor(subject) as numeric 1/0 for actor subjects, and 0 for null/nonactor input. A GetNoRumors condition is a predicate result; it does not itself add/remove the INFOGENERAL topic cache.
char __cdecl Cmd_GetNoRumors_Evaluate(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  bool v4; // zf
  char result; // al

  *a4 = 0.0; /*0x4f5c5e*/
  if ( !a1 || !a1->vtbl->IsActor(a1) ) /*0x4f5c6c*/
    return 1; /*0x4f5c86*/
  v4 = Actor::IsNoRumor((Actor *)a1) == 0; /*0x4f5c79*/
  result = 1; /*0x4f5c7b*/
  if ( !v4 ) /*0x4f5c7d*/
    *a4 = 1.0; /*0x4f5c81*/
  return result; /*0x4f5c83*/
}
