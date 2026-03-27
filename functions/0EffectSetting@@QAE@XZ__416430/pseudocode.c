EffectSetting *__thiscall EffectSetting::EffectSetting(EffectSetting *this)
{
  double v3; // st7

  TESForm_constr(&this->super);
  TESModel::TESModel(&this->model);
  TESDescription_constr(&this->description.vtbl);
  this->fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable';
  this->fullName.name.m_data = 0;
  this->fullName.name.m_dataLen = 0;
  this->fullName.name.m_bufLen = 0;
  TESTexture_constr(&this->texture.super);
  this->texture.super.vtbl = (BaseFormComponentVtbl *)&TESIcon::`vftable';
  this->baseCost = 0.0;
  this->super.vtbl = (TESFormVtbl *)&EffectSetting::`vftable'{for `EffectSetting'};
  this->projSpeed = 1.0;
  this->model.vtbl = (TESModelVtbl *)&EffectSetting::`vftable'{for `TESModel'};
  this->description.vtbl = (TESDescriptionVtbl *)&EffectSetting::`vftable'{for `TESDescription'};
  this->fullName.vtbl = (BaseFormComponentVtbl *)&EffectSetting::`vftable'{for `TESFullName'};
  this->texture.super.vtbl = (BaseFormComponentVtbl *)&EffectSetting::`vftable'{for `TESIcon'};
  this->effectCode = 0xFFFFFFFF;
  this->effectFlags = 0;
  this->data = 0;
  this->school = 6;
  this->resistValue = 0x48;
  this->numCounters = 0;
  this->light = 0;
  this->effectShader = 0;
  this->enchantEffect = 0;
  this->castingSound = 0;
  this->boltSound = 0;
  this->hitSound = 0;
  this->areaSound = 0;
  this->enchantFactor = fMagicDefaultCEEnchantFactor;
  v3 = fMagicDefaultCEBarterFactor;
  this->counterArray = 0;
  this->barterFactor = v3;
  this->unk4[0] = 0;
  this->unk4[1] = 0;
  this->unk0[0] = 0;
  this->unk0[1] = 0;
  this->super.member.type = kFormType_Effect;
  return this;
}
