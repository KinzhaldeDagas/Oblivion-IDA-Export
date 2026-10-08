// Verified enable-state linking: reads ExtraEnableStateParent's bit 0x800, applies inverse mode when configured, and propagates the resulting disabled state to the reference through TESForm_SetDisabledFlag. It removes 3D when either disabled bit 0x800 or deleted bit 0x20 is set.
void __thiscall TESObjectREFR_LinkModifiedForm(TESObjectREFR *this, int a2, int a3)
{
  ExtraDataList *p_baseExtraList; // ebp
  BSExtraDataVtbl *EnableStateParent; // edi
  int *ContainerExtraDataForRef; // eax

  p_baseExtraList = &this->member.baseExtraList; /*0x4da2d5*/
  EnableStateParent = ExtraDataList_GetEnableStateParent(&this->member.baseExtraList); /*0x4da2e0*/
  if ( EnableStateParent ) /*0x4da2e4*/
  {
    if ( ExtraDataList_IsEnableStateInverse(p_baseExtraList) ) /*0x4da2e8*/
      TESForm_SetDisabledFlag((TESForm *)this, ((int)EnableStateParent[1].Destructor & 0x800) == 0); /*0x4da2ff*/
    else
      TESForm_SetDisabledFlag((TESForm *)this, ((int)EnableStateParent[1].Destructor & 0x800) != 0); /*0x4da310*/
  }
  if ( ((a2 & 1) != 0 || EnableStateParent) /*0x4da334*/
    && ((this->member.super.flags & 0x800) != 0 || (this->member.super.flags & 0x20) != 0) )
  {
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl->Set3D)(this, 0); /*0x4da342*/
  }
  if ( (a2 & 0x8000000) != 0 ) /*0x4da34a*/
  {
    if ( TESObjectREFR_GetContainer(this) ) /*0x4da34e*/
    {
      ContainerExtraDataForRef = (int *)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4da359*/
      sub_4887C0(ContainerExtraDataForRef); /*0x4da363*/
    }
  }
  if ( !this->vtbl->IsMobileObject(this) /*0x4da39e*/
    && ((a2 & 0x40000000) != 0 || (a3 & 0x40000000) != 0)
    && ((this->member.super.flags & 0x800) != 0 || (this->member.super.flags & 0x20) != 0) )
  {
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl->Set3D)(this, 0); /*0x4da3ac*/
  }
  if ( (a2 & 0x177577E0) != 0 || this->vtbl->IsActor(this) ) /*0x4da3c0*/
    sub_425040(p_baseExtraList, a2, a3, this, this->member.baseForm); /*0x4da3cf*/
}
