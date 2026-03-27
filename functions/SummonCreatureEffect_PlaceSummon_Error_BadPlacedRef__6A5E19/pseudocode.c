int __userpurge SummonCreatureEffect_PlaceSummon_::Error_BadPlacedRef@<eax>(
        TESForm *a1@<ebx>,
        TESObjectREFR *a2@<ebp>,
        int a3)
{
  char *Name; // eax

  Name = TESObjectREFR_GetName(a2);
  PrintError("%s summoned a non-actor.", Name);
  j_TESForm_SetDeleted(a1, 1);
  return SummonCreatureEffect_PlaceSummon_::Done(a3);
}
