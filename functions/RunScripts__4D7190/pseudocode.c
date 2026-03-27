char __usercall RunScripts@<al>(TESObjectREFR *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char v5; // bl
  int v7; // eax
  int **ContainerExtraDataForRef; // eax
  Script *ExtraScript; // ebp
  char **ExtraScriptEventList; // edi
  char v11; // al

  v5 = 0;
  if ( (this->member.super.flags & 0x20) != 0 )
    return 0;
  v7 = *(unsigned __int8 *)(((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->GetBaseForm)(
                              this,
                              a4,
                              a3,
                              a2)
                          + 4);
  if ( v7 == 0x17 || (unsigned int)(v7 - 0x23) <= 1 )
  {
    if ( TESObjectREFR_GetContainer(this) )
    {
      ContainerExtraDataForRef = (int **)ContainerExtraData_GetContainerExtraDataForRef(this);
      if ( ContainerExtraDataForRef )
      {
        if ( sub_48E740(ContainerExtraDataForRef, a3, a4, this) )
          v5 = 1;
      }
    }
  }
  ExtraScript = (Script *)ExtraDataList_GetExtraScript(&this->member.baseExtraList);
  if ( ExtraScript )
  {
    ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(&this->member.baseExtraList);
    Script_Run(ExtraScript, a4, a3, this, ExtraScriptEventList, 0, 0);
    if ( v11 )
      return 1;
    if ( ExtraScriptEventList )
      this->vtbl->super.MarkAsModified((TESForm *)this, 0x4000000);
  }
  return v5;
}
