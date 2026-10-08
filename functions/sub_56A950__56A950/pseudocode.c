// RadiantAI: TESPackage condition-list wrapper used by central package chooser at 0x569020. Delegates to condition evaluator at 0x56A510 with actor and resolved target form; package selection fails if conditions fail.
char __thiscall sub_56A950(unsigned __int8 **this, Actor *a2, TESObjectREFR *a3)
{
  return ConditionList_EvaluateCombined(this, a2, a3, &a3, 0); /*0x56a966*/
}
