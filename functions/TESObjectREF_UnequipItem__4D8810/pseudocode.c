char __userpurge TESObjectREF_UnequipItem@<al>(
        TESObjectREFR *this@<ecx>,
        int ebp0@<ebp>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a5@<st0>,
        TESObjectARMO *a6,
        __int16 a7,
        int a8)
{
  float *ContainerExtraDataForRef; // edi
  char v11; // [esp+7h] [ebp-1h] BYREF

  v11 = 1;
  if ( !TESObjectREFR_GetContainer(this) )
    return 1;
  ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef(this);
  if ( !sub_45A500(SaveLoad_CurrentSavegame) )
    a5 = Script_AddEventToExtraScript(this, a8, 8);
  ContainerExtraData_UnequipItem(
    ContainerExtraDataForRef,
    ebp0,
    (int)ContainerExtraDataForRef,
    st5_0,
    st6_0,
    a5,
    &v11,
    a6,
    a7,
    this,
    a8,
    0,
    0);
  return v11;
}
