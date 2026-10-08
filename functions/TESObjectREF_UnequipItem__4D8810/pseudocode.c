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

  v11 = 1; /*0x4d881d*/
  if ( !TESObjectREFR_GetContainer(this) ) /*0x4d8814*/
    return 1; /*0x4d8877*/
  ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d8835*/
  if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x4d8837*/
    a5 = Script_AddEventToExtraScript(this, a8, 8); /*0x4d8848*/
  ContainerExtraData_UnequipItem( /*0x4d8867*/
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
  return v11; /*0x4d8872*/
}
