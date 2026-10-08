double __usercall sub_4D70E0@<st0>(TESObjectREFR *this@<ecx>, double a2@<st1>, double result@<st0>)
{
  BSExtraData *ExtraData; // eax
  TESForm *v5; // eax
  void *v6; // eax
  char *v7; // edi
  char **EventList; // eax
  float *ContainerExtraDataForRef; // eax

  if ( (this->member.super.flags & 0x20) == 0 ) /*0x4d70eb*/
  {
    ExtraData = BaseExtraList_GetExtraData(&this->member.baseExtraList, kExtraData_Script); /*0x4d70f9*/
    if ( !ExtraData || !ExtraData[1].vtbl ) /*0x4d7102*/
    {
      v5 = (TESForm *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->GetTemplateForm)(this); /*0x4d7112*/
      if ( !v5 ) /*0x4d7116*/
        v5 = this->vtbl->GetBaseForm(this); /*0x4d7122*/
      v6 = OblivionDynamicCast( /*0x4d7134*/
             v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESScriptableForm `RTTI Type Descriptor',
             0);
      if ( v6 ) /*0x4d713e*/
        v7 = *((char **)v6 + 1); /*0x4d7140*/
      else
        v7 = 0; /*0x4d7145*/
      if ( v7 ) /*0x4d7149*/
      {
        ExtraDataList_AddScript(&this->member.baseExtraList, (int)v7); /*0x4d714e*/
        EventList = Script_CreateEventList(v7); /*0x4d7155*/
        ExtraDataList_SetScriptEventList(&this->member.baseExtraList, (int)EventList); /*0x4d715d*/
      }
      if ( TESObjectREFR_GetContainer(this) ) /*0x4d7164*/
      {
        ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d7170*/
        return ExtraContainerChanges_RunScripts(ContainerExtraDataForRef, result, a2); /*0x4d717c*/
      }
    }
  }
  return result; /*0x4d717b*/
}
