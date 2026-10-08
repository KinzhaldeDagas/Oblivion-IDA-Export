char __usercall RunScripts@<al>(TESObjectREFR *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char v5; // bl
  int v7; // eax
  int **ContainerExtraDataForRef; // eax
  Script *ExtraScript; // ebp
  char **ExtraScriptEventList; // edi
  char v11; // al

  v5 = 0; /*0x4d719a*/
  if ( (this->member.super.flags & 0x20) != 0 ) /*0x4d719e*/
    return 0; /*0x4d71a4*/
  v7 = *(unsigned __int8 *)(((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->GetBaseForm)( /*0x4d71af*/
                              this,
                              a4,
                              a3,
                              a2)
                          + 4);
  if ( v7 == 0x17 || (unsigned int)(v7 - 0x23) <= 1 ) /*0x4d71be*/
  {
    if ( TESObjectREFR_GetContainer(this) ) /*0x4d71c2*/
    {
      ContainerExtraDataForRef = (int **)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d71cd*/
      if ( ContainerExtraDataForRef ) /*0x4d71d7*/
      {
        if ( sub_48E740(ContainerExtraDataForRef, a3, a4, this) ) /*0x4d71dc*/
          v5 = 1; /*0x4d71e5*/
      }
    }
  }
  ExtraScript = (Script *)ExtraDataList_GetExtraScript(&this->member.baseExtraList); /*0x4d71f3*/
  if ( ExtraScript ) /*0x4d71f7*/
  {
    ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(&this->member.baseExtraList); /*0x4d7204*/
    Script_Run(ExtraScript, a4, a3, this, ExtraScriptEventList, 0, 0); /*0x4d720a*/
    if ( v11 ) /*0x4d7211*/
      return 1; /*0x4d721b*/
    if ( ExtraScriptEventList ) /*0x4d721e*/
      this->vtbl->super.MarkAsModified((TESForm *)this, 0x4000000); /*0x4d722c*/
  }
  return v5; /*0x4d71a0*/
}
