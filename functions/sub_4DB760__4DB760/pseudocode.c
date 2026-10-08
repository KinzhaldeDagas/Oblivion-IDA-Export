void __thiscall sub_4DB760(TESObjectREFR *this)
{
  TESForm *Owner; // eax

  Owner = TESObjectREFR_GetOwner(this); /*0x4db764*/
  if ( Owner ) /*0x4db76d*/
  {
    if ( Owner->member.type != kFormType_NPC ) /*0x4db775*/
      return; /*0x4db775*/
    goto LABEL_3; /*0x4db775*/
  }
  Owner = (TESForm *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->GetTemplateForm)(this); /*0x4db79b*/
  if ( !Owner ) /*0x4db79f*/
    Owner = this->vtbl->GetBaseForm(this); /*0x4db7ab*/
  if ( Owner->member.type == kFormType_NPC ) /*0x4db7b1*/
LABEL_3:
    TESActorBaseData_AllFactionsAreEvil(&Owner[1].member.refID); /*0x4db787*/
}
