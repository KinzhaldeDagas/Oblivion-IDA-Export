char __userpurge sub_5E4260@<al>(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESObjectARMO *a5,
        __int16 a6,
        int a7,
        char a8,
        int a9)
{
  ExtraDataList *p_baseExtraList; // edi
  float *ContainerChanges; // ebp
  _DWORD *v14; // eax
  int v15; // eax
  char v16; // [esp+Bh] [ebp-1h] BYREF
  char v17; // [esp+10h] [ebp+4h]

  if ( !a5 )
    return 1;
  p_baseExtraList = &this->member.baseExtraList;
  v17 = 0;
  v16 = 1;
  ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&this->member.baseExtraList);
  if ( ContainerChanges )
  {
    if ( !sub_45A500(SaveLoad_CurrentSavegame) )
    {
      Script_AddEventToExtraScript(this, a7, 8);
      st7_0 = Script_AddEventToExtraScript(a5, &this->member.baseExtraList, 8);
    }
    v17 = ContainerExtraData_UnequipItem(
            ContainerChanges,
            (int)ContainerChanges,
            (int)p_baseExtraList,
            st5_0,
            st6_0,
            st7_0,
            &v16,
            a5,
            a6,
            this,
            a7,
            a8,
            a9);
  }
  v14 = OblivionDynamicCast(
          a5,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESEnchantableForm `RTTI Type Descriptor',
          0);
  if ( v14 )
    v15 = v14[1];
  else
    v15 = 0;
  if ( v15 )
  {
    sub_419F10((char *)(v15 + 0x18), 1);
    if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      sub_662DA0(TESDataHandler_g_PlayerRef);
  }
  return v17;
}
