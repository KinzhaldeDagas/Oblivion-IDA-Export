char __cdecl sub_4F6640(Actor *a1, TESFurniture *a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f664e*/
  if ( a1 ) /*0x4f6650*/
  {                                             // MEF v30 verified ActorWithoutProcessCTD site: Actor +0x58 immediate vtable dereference in current-furniture-reference query. Null routes to existing no-result path 0x004F6679.
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) /*0x4f6673*/
      && a1->members.super.process->GetFurniture(a1->members.super.process) == a2 )
    {
      *a4 = 1.0; /*0x4f6677*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f6679*/
    Interface_ConsolePrint("IsCurrentFurnitureRef>> %0.2f", *a4); /*0x4f668f*/
  return 1; /*0x4f6697*/
}
