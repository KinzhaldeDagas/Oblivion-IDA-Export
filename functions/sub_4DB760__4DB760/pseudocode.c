void __thiscall sub_4DB760(TESObjectREFR *this)
{
  BSExtraDataVtbl *Owner; // eax

  Owner = TESObjectREFR_GetOwner(this);
  if ( Owner )
  {
    if ( LOBYTE(Owner->CompareTo) != 0x23 )
      return;
    goto LABEL_3;
  }
  Owner = (BSExtraDataVtbl *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->GetTemplateForm)(this);
  if ( !Owner )
    Owner = (BSExtraDataVtbl *)this->vtbl->GetBaseForm(this);
  if ( LOBYTE(Owner->CompareTo) == 0x23 )
LABEL_3:
    TESActorBaseData_AllFactionsAreEvil(&Owner[4].CompareTo);
}
