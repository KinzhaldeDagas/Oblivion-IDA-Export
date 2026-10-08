char __cdecl sub_4F66A0(Actor *a1, int a2, int a3, double *a4)
{
  TESFurniture *v4; // eax

  *a4 = 0.0; /*0x4f66ae*/
  if ( a1 ) /*0x4f66b0*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f66bc*/
    {
      v4 = a1->members.super.process->GetFurniture(a1->members.super.process);// MEF v30 verified ActorWithoutProcessCTD site: Actor +0x58 immediate vtable dereference in current-furniture-object query. Null routes to existing no-result path 0x004F66E9. /*0x4f66cd*/
      if ( v4 ) /*0x4f66d1*/
      {
        if ( ((int (__thiscall *)(TESFurniture *))v4->super.__vftable[1].super.super.SetQuestItem)(v4) == a2 ) /*0x4f66e3*/
          *a4 = 1.0; /*0x4f66e7*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f66e9*/
    Interface_ConsolePrint("IsCurrentFurnitureObj>> %0.2f", *a4); /*0x4f66ff*/
  return 1; /*0x4f6707*/
}
