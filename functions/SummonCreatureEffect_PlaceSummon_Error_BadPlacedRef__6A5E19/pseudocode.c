void __userpurge SummonCreatureEffect_PlaceSummon_::Error_BadPlacedRef(
        TESForm *a1@<ebx>,
        TESObjectREFR *a2@<ebp>,
        int a3)
{
  char *Name; // eax

  Name = TESObjectREFR_GetName(a2); /*0x6a5e1b*/
  PrintError("%s summoned a non-actor.", Name); /*0x6a5e26*/
  j_TESForm_SetDeleted(a1, 1); /*0x6a5e32*/
  SummonCreatureEffect_PlaceSummon_::Done(a3); /*0x6a5e33*/
}
