void __thiscall TESWaterForm::~TESWaterForm(TESWaterForm *this)
{
  TESAttackDamageForm *p_damageForm; // edi

  p_damageForm = &this->damageForm; /*0x4ed97c*/
  this->vtbl = (TESFormVtbl *)&TESWaterForm::`vftable'{for `TESWaterForm'}; /*0x4ed97f*/
  this->damageForm.vtbl = (BaseFormComponentVtbl *)&TESWaterForm::`vftable'{for `TESAttackDamageForm'}; /*0x4ed985*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4ed993*/
  FormHeapFree(this->unk30); /*0x4ed99c*/
  this->unk30 = 0; /*0x4ed9a9*/
  this->unk36 = 0; /*0x4ed9ac*/
  this->unk34 = 0; /*0x4ed9b0*/
  TESTexture_destr(&this->texture.vtbl); /*0x4ed9b9*/
  TESAttackDamageForm_destr(p_damageForm); /*0x4ed9c4*/
  TESForm_destr((TESForm *)this); /*0x4ed9d3*/
}
