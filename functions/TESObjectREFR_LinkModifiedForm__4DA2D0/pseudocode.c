void __thiscall TESObjectREFR_LinkModifiedForm(TESObjectREFR *this, int a2, int a3)
{
  ExtraDataList *p_baseExtraList; // ebp
  BSExtraDataVtbl *v5; // edi
  int *ContainerExtraDataForRef; // eax

  p_baseExtraList = &this->member.baseExtraList;
  v5 = sub_420260(&this->member.baseExtraList);
  if ( v5 )
  {
    if ( sub_420340(p_baseExtraList) )
      TESForm_SetEnabled_((TESForm *)this, ((int)v5[1].Destructor & 0x800) == 0);
    else
      TESForm_SetEnabled_((TESForm *)this, ((int)v5[1].Destructor & 0x800) != 0);
  }
  if ( ((a2 & 1) != 0 || v5) && ((this->member.super.flags & 0x800) != 0 || (this->member.super.flags & 0x20) != 0) )
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl->Set3D)(this, 0);
  if ( (a2 & 0x8000000) != 0 )
  {
    if ( TESObjectREFR_GetContainer(this) )
    {
      ContainerExtraDataForRef = (int *)ContainerExtraData_GetContainerExtraDataForRef(this);
      sub_4887C0(ContainerExtraDataForRef);
    }
  }
  if ( !this->vtbl->IsMobileObject(this)
    && ((a2 & 0x40000000) != 0 || (a3 & 0x40000000) != 0)
    && ((this->member.super.flags & 0x800) != 0 || (this->member.super.flags & 0x20) != 0) )
  {
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl->Set3D)(this, 0);
  }
  if ( (a2 & 0x177577E0) != 0 || this->vtbl->IsActor(this) )
    sub_425040(p_baseExtraList, a2, a3, this, this->member.baseForm);
}
