char __cdecl sub_4F8480(Actor *a1, int a2, int a3, double *a4)
{
  Actor *v4; // esi
  char *Name; // eax

  v4 = 0; /*0x4f8486*/
  if ( a1 ) /*0x4f848a*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f8496*/
      v4 = a1; /*0x4f849c*/
  }
  *a4 = 0.0; /*0x4f84a6*/
  if ( v4 ) /*0x4f84a8*/
  {                                             // MEF v30 verified ActorWithoutProcessCTD site: Actor +0x58 immediate vtable dereference in torch query. Null supplies EAX=0 to existing test at 0x004F84B9; non-null resumes 0x004F84AF.
    if ( v4->members.super.process->GetEquippedLightData(v4->members.super.process, 1) ) /*0x4f84b7*/
      *a4 = 1.0; /*0x4f84bf*/
    if ( MEMORY[0xB361AC] ) /*0x4f84c1*/
    {
      if ( 0.0 != *a4 ) /*0x4f84d3*/
      {
        Name = TESObjectREFR_GetName((TESObjectREFR *)v4); /*0x4f84d7*/
        Interface_ConsolePrint("%s  wearing a torch ", Name); /*0x4f84e2*/
      }
    }
  }
  return 1; /*0x4f84ea*/
}
