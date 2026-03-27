char __usercall sub_500C90@<al>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  int v6; // esi

  v6 = sub_4533F0(SaveLoad_CurrentSavegame, (int)TESDataHandler_g_PlayerRef, 0);
  sub_45A530(SaveLoad_CurrentSavegame, 1);
  sub_464440((char *)SaveLoad_CurrentSavegame, a3, a4, a5, a6, 0);
  SaveLoad_ValidateCreatedObj__((BSSimpleList_VoidPtr *)SaveLoad_CurrentSavegame);
  sub_45A530(SaveLoad_CurrentSavegame, 0);
  sub_45C320((BSSimpleList_VoidPtr *)SaveLoad_CurrentSavegame, a1, a2, a4, a5, a6);
  sub_675310(&ActorProcessManager_ptr.middleHighActors, a4, a5, a6);
  sub_447300((Sky **)TESDataHandler);
  sub_663340((int)TESDataHandler_g_PlayerRef, a1, a4, a5, a6, v6);
  return 1;
}
