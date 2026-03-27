char __cdecl sub_4F5D20(Creature *a1, int a2, int a3, double *a4)
{
  char result; // al

  *a4 = 0.0;
  if ( !a1 || !a1->__vftable->super.super.IsActor((TESObjectREFR *)a1) )
    return 1;
  result = 1;
  if ( a1 == TESDataHandler_g_PlayerRef->lastRiddenHorse )
    *a4 = 1.0;
  return result;
}
