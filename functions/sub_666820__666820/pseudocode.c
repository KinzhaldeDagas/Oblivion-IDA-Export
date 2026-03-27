void __userpurge sub_666820(
        Actor *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        TESForm *a6,
        int a7)
{
  unsigned int *v8; // eax
  int v9; // edx
  unsigned int v10; // ebx

  sub_5E4440(a1, a2, a3, a4, a5, (int)a6, a7);
  v8 = sub_4D8D70(a1, a6, a6->member.refID);
  v10 = (unsigned int)v8;
  if ( v8 )
  {
    ContainerEntryExtraData_DestroyDataTable(v8, v9);
    FormHeapFree(v10);
    sub_664850(a1, (int)a6);
  }
  else
  {
    if ( a1[6].members.super.super.super.modlist.data )
      PlayerCharacter_SetCurrentMagicItem(a1, 0);
    a1[6].members.super.super.super.modlist.data = 0;
    PlayerCharacter_SetCurrentMagicItem(a1, 0);
  }
}
