char __cdecl sub_4F5D20(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  char result; // al

  *a4 = 0.0; /*0x4f5d2e*/
  if ( !a1 || !a1->vtbl->IsActor(a1) ) /*0x4f5d3c*/
    return 1; /*0x4f5d58*/
  result = 1; /*0x4f5d4d*/
  if ( a1 == (TESObjectREFR *)reference->lastRiddenHorse ) /*0x4f5d4f*/
    *a4 = 1.0; /*0x4f5d53*/
  return result; /*0x4f5d55*/
}
