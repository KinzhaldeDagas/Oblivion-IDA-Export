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

  if ( !a5 ) /*0x5e426b*/
    return 1; /*0x5e426e*/
  p_baseExtraList = &this->member.baseExtraList; /*0x5e4277*/
  v17 = 0; /*0x5e427c*/
  v16 = 1; /*0x5e4281*/
  ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&this->member.baseExtraList); /*0x5e428b*/
  if ( ContainerChanges ) /*0x5e428f*/
  {
    if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x5e4297*/
    {
      Script_AddEventToExtraScript(this, a7, 8); /*0x5e42a8*/
      st7_0 = Script_AddEventToExtraScript(a5, &this->member.baseExtraList, 8); /*0x5e42b1*/
    }
    v17 = ContainerExtraData_UnequipItem( /*0x5e42db*/
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
  v14 = OblivionDynamicCast( /*0x5e42ee*/
          a5,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESEnchantableForm `RTTI Type Descriptor',
          0);
  if ( v14 ) /*0x5e42fa*/
    v15 = v14[1]; /*0x5e42fc*/
  else
    v15 = 0; /*0x5e4301*/
  if ( v15 ) /*0x5e4305*/
  {
    MagicItem_UnloadVFXModels((char *)(v15 + 0x18), 1); /*0x5e430c*/
    if ( this == (TESObjectREFR *)reference ) /*0x5e4319*/
      sub_662DA0(reference); /*0x5e431b*/
  }
  return v17; /*0x5e426d*/
}
