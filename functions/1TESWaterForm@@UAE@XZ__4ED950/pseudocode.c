void __thiscall TESWaterForm::~TESWaterForm(TESWaterForm *this)
{
  TESAttackDamageForm *p_damageForm; // edi

  p_damageForm = &this->damageForm;
  this->vtbl = (TESFormVtbl *)&TESWaterForm::`vftable'{for `TESWaterForm'};
  this->damageForm.vtbl = (BaseFormComponentVtbl *)&TESWaterForm::`vftable'{for `TESAttackDamageForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  FormHeapFree(this->unk30);
  this->unk30 = 0;
  this->unk36 = 0;
  this->unk34 = 0;
  TESTexture_destr(&this->texture.vtbl);
  TESAttackDamageForm_destr(p_damageForm);
  TESForm_destr((TESForm *)this);
}
