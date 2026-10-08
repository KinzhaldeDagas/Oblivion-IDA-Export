char __cdecl sub_4F56D0(Actor *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f56de*/
  if ( a1 ) /*0x4f56e0*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) && Actor_IsSwimming(a1) ) /*0x4f56f4*/
      *a4 = 1.0; /*0x4f56ff*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f5701*/
    Interface_ConsolePrint("Is Swimming >> %0.2f", *a4); /*0x4f5717*/
  return 1; /*0x4f571f*/
}
