char __usercall sub_500C90@<al>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  int v6; // esi

  v6 = sub_4533F0(g_TESSaveLoadGame, (int)reference, 0); /*0x500cac*/
  sub_45A530(g_TESSaveLoadGame, 1); /*0x500cae*/
  TESSaveLoadGame_ReconcileExistingChanges(g_TESSaveLoadGame, a3, a4, a5, a6, 0); /*0x500cbb*/
  TESSaveLoadGame_ProcessDeferredDeletions(g_TESSaveLoadGame); /*0x500cc6*/
  sub_45A530(g_TESSaveLoadGame, 0); /*0x500cd3*/
  sub_45C320((BSSimpleList_VoidPtr *)g_TESSaveLoadGame, a1, a2, a4, a5, a6); /*0x500cde*/
  sub_675310((ActorList *)&qword_B3BB2C[0x75], a4, a5, a6); /*0x500ce8*/
  sub_447300((TESHealthForm **)g_TESDataHandler); /*0x500cf3*/
  sub_663340(reference, a4, a5, a3, v6); /*0x500cff*/
  return 1; /*0x500d06*/
}
