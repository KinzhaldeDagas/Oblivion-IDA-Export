void __userpurge sub_5E4A40(
        Actor *a1@<ecx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        TESForm *a6,
        signed int a7)
{
  float *ContainerChanges; // eax

  ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&a1->members.super.super.baseExtraList);
  sub_491700(ContainerChanges, a3, a4, a5, (TESObjectREFR *)a1, a7, a6);
  if ( a1 == (Actor *)TESDataHandler_g_PlayerRef )
    sub_57A3B0(a3, a4, 0);
}
