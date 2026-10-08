TESWaterForm *__thiscall TESWaterForm::TESWaterForm(TESWaterForm *this)
{
  TESForm_constr((TESForm *)this); /*0x4ede6a*/
  TESAttackDamageForm_constr(&this->damageForm); /*0x4ede7a*/
  this->vtbl = (TESFormVtbl *)&TESWaterForm::`vftable'{for `TESWaterForm'}; /*0x4ede87*/
  this->damageForm.vtbl = (BaseFormComponentVtbl *)&TESWaterForm::`vftable'{for `TESAttackDamageForm'}; /*0x4ede8d*/
  TESTexture_constr(&this->texture); /*0x4ede93*/
  this->unk30 = 0; /*0x4ede98*/
  this->unk34 = 0; /*0x4ede9b*/
  this->unk36 = 0; /*0x4ede9f*/
  sub_4ED580(this->waterSimVals); /*0x4edeab*/
  this->super.type = kFormType_Water; /*0x4edeb2*/
  sub_4EDDE0((unsigned int *)this); /*0x4edeb6*/
  return this; /*0x4edebd*/
}
