EffectSetting *__thiscall EffectSetting::EffectSetting(EffectSetting *this)
{
  double v3; // st7

  TESForm_constr(&this->super); /*0x41645b*/
  TESModel::TESModel(&this->model); /*0x41646b*/
  TESDescription_constr(&this->description.vtbl); /*0x416478*/
  this->fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable'; /*0x41647d*/
  this->fullName.name.m_data = 0; /*0x416484*/
  this->fullName.name.m_dataLen = 0; /*0x416487*/
  this->fullName.name.m_bufLen = 0; /*0x41648b*/
  TESTexture_constr(&this->texture.super); /*0x416499*/
  this->texture.super.vtbl = (BaseFormComponentVtbl *)&TESIcon::`vftable'; /*0x4164a0*/
  this->baseCost = 0.0; /*0x4164a6*/
  this->super.vtbl = (TESFormVtbl *)&EffectSetting::`vftable'{for `EffectSetting'}; /*0x4164ab*/
  this->projSpeed = 1.0; /*0x4164b1*/
  this->model.vtbl = (TESModelVtbl *)&EffectSetting::`vftable'{for `TESModel'}; /*0x4164b4*/
  this->description.vtbl = (TESDescriptionVtbl *)&EffectSetting::`vftable'{for `TESDescription'}; /*0x4164bb*/
  this->fullName.vtbl = (BaseFormComponentVtbl *)&EffectSetting::`vftable'{for `TESFullName'}; /*0x4164c2*/
  this->texture.super.vtbl = (BaseFormComponentVtbl *)&EffectSetting::`vftable'{for `TESIcon'}; /*0x4164c9*/
  this->effectCode = 0xFFFFFFFF; /*0x4164cf*/
  this->effectFlags = 0; /*0x4164d9*/
  this->data = 0; /*0x4164dc*/
  this->school = 6; /*0x4164df*/
  this->resistValue = 0x48; /*0x4164e6*/
  this->numCounters = 0; /*0x4164ed*/
  this->light = 0; /*0x4164f1*/
  this->effectShader = 0; /*0x4164f4*/
  this->enchantEffect = 0; /*0x4164f7*/
  this->castingSound = 0; /*0x4164fa*/
  this->boltSound = 0; /*0x416500*/
  this->hitSound = 0; /*0x416506*/
  this->areaSound = 0; /*0x41650c*/
  this->enchantFactor = MEMORY[0xB33704][0]; /*0x416518*/
  v3 = MEMORY[0xB3370C]; /*0x416520*/
  this->counterArray = 0; /*0x416526*/
  this->barterFactor = v3; /*0x41652c*/
  this->unk4[0] = 0; /*0x416532*/
  this->unk4[1] = 0; /*0x416538*/
  this->unk0[0] = 0; /*0x41653e*/
  this->unk0[1] = 0; /*0x416541*/
  this->super.member.type = kFormType_Effect; /*0x416544*/
  return this; /*0x416548*/
}
