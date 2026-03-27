double __usercall sub_4D70E0@<st0>(TESObjectREFR *this@<ecx>, double a2@<st1>, double result@<st0>)
{
  BSExtraData *ExtraData; // eax
  TESForm *v6; // eax
  void *v7; // eax
  char *v8; // edi
  char **EventList; // eax
  float *ContainerExtraDataForRef; // eax

  if ( (this->member.super.flags & 0x20) == 0 )
  {
    ExtraData = BaseExtraList_GetExtraData(&this->member.baseExtraList, kExtraData_Script);
    if ( !ExtraData || !ExtraData[1].vtbl )
    {
      v6 = (TESForm *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->GetTemplateForm)(this);
      if ( !v6 )
        v6 = this->vtbl->GetBaseForm(this);
      v7 = OblivionDynamicCast(
             v6,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESScriptableForm `RTTI Type Descriptor',
             0);
      if ( v7 )
        v8 = *((char **)v7 + 1);
      else
        v8 = 0;
      if ( v8 )
      {
        ExtraDataList_AddScript(&this->member.baseExtraList, (int)v8);
        EventList = Script_CreateEventList(v8);
        ExtraDataList_SetScriptEventList(&this->member.baseExtraList, (int)EventList);
      }
      if ( TESObjectREFR_GetContainer(this) )
      {
        ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef(this);
        return ExtraContainerChanges_RunScripts(ContainerExtraDataForRef, result, a2);
      }
    }
  }
  return result;
}
