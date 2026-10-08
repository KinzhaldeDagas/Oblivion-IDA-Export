// GetFactionRank_Eval (index 73 / opcode 0x1049): returns TESActorBaseData_GetFactionRank numerically, including -1 for a faction absent from the subject's base-data list.
char __cdecl sub_4F7280(Actor *a1, int a2, int a3, double *a4)
{
  TESForm *ActorBaseForm; // eax
  int v5; // edx
  int v6; // ecx

  *a4 = dbl_A3D360; /*0x4f7292*/
  if ( a1 ) /*0x4f7294*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f72a4*/
    {
      ActorBaseForm = Actor_GetActorBaseForm(a1, 1); /*0x4f72ae*/
      if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID ) /*0x4f72b9*/
        ActorBaseForm = Actor_GetActorBaseForm(a1, 0); /*0x4f72c3*/
      v5 = a2; /*0x4f72c8*/
      v6 = 0; /*0x4f72cc*/
      if ( a2 ) /*0x4f72d0*/
      {
        if ( *(_BYTE *)(a2 + 4) == 6 ) /*0x4f72d6*/
          v6 = a2; /*0x4f72d8*/
      }
      if ( ActorBaseForm ) /*0x4f72dc*/
      {
        if ( v6 ) /*0x4f72e0*/
        {
          LOBYTE(v5) = a1 == (Actor *)reference; /*0x4f72e8*/
          *a4 = (double)(int)TESActorBaseData_GetFactionRank((int *)&ActorBaseForm[1].member.refID, v6, v5); /*0x4f72fd*/
        }
      }
      if ( MEMORY[0xB361AC] ) /*0x4f72ff*/
        Interface_ConsolePrint("GetFactionRank >> %0.2f", *a4); /*0x4f7315*/
    }
  }
  return 1; /*0x4f731d*/
}
