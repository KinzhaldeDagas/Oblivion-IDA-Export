char __cdecl Cmd_GetDead_Shared(Actor *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f489e*/
  if ( a1 ) /*0x4f48a0*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) && a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 1) ) /*0x4f48be*/
      *a4 = 1.0; /*0x4f48c6*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f48c8*/
    Interface_ConsolePrint("GetDead >> %0.2f", *a4); /*0x4f48de*/
  return 1; /*0x4f48e6*/
}
