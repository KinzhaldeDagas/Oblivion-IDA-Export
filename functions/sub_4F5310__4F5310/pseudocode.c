char __cdecl sub_4F5310(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f531e*/
  if ( a1 ) /*0x4f5320*/
  {
    if ( a1->vtbl->IsActor(a1) && Actor::IsTalking((Actor *)a1) ) /*0x4f5334*/
      *a4 = 1.0; /*0x4f533f*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f5341*/
    Interface_ConsolePrint("Talking >> %0.2f", *a4); /*0x4f5357*/
  return 1; /*0x4f535f*/
}
