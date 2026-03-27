TESWaterForm *__thiscall TESWaterForm::TESWaterForm(TESWaterForm *this)
{
  TESForm_constr((TESForm *)this);
  TESAttackDamageForm_constr(&this->damageForm);
  this->vtbl = (TESFormVtbl *)&TESWaterForm::`vftable'{for `TESWaterForm'};
  this->damageForm.vtbl = (BaseFormComponentVtbl *)&TESWaterForm::`vftable'{for `TESAttackDamageForm'};
  TESTexture_constr(&this->texture);
  this->unk30 = 0;
  this->unk34 = 0;
  this->unk36 = 0;
  sub_4ED580(this->waterSimVals);
  this->super.type = kFormType_Water;
  sub_4EDDE0((unsigned int *)this);
  return this;
}
