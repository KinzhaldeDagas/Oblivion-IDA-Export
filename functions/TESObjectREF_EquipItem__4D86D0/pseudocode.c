char __userpurge TESObjectREF_EquipItem@<al>(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        TESForm *a4,
        int a5,
        TESForm *a6,
        int a7)
{
  float *ContainerExtraDataForRef; // edi
  double v9; // st7

  if ( !TESObjectREFR_GetContainer(this) )
    return 0;
  ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef(this);
  v9 = Script_AddEventToExtraScript(this, a6, 1);
  ContainerExtraData_EquipItemForActor(ContainerExtraDataForRef, st5_0, st6_0, v9, a4, a5, (int)this, a6, 0, 0);
  return 1;
}
