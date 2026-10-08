void __userpurge sub_5E4A40(
        Actor *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESForm *a5,
        signed int a6)
{
  float *ContainerChanges; // eax

  ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&a1->members.super.super.baseExtraList); /*0x5e4a46*/
  sub_491700(ContainerChanges, a2, a3, a4, (TESObjectREFR *)a1, a6, a5); /*0x5e4a58*/
  if ( a1 == (Actor *)reference ) /*0x5e4a64*/
    sub_57A3B0(a3, 0); /*0x5e4a68*/
}
