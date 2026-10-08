// Verified blood component lifecycle: TESCreature +0x11C is TESModel bloodSpray, +0x134 is TESTexture bloodDecal; actor-base-data this is +0x24. Constructor constructs, InitializeDefaults initializes, destructor destroys these components. No Fallout member offsets imported.
void __thiscall TESCreature_Destructor(TESCreature *self)
{
  TESAttackDamageForm *p_attackDamage; // edi

  p_attackDamage = &self->attackDamage; /*0x51e9cb*/
  self->__vtable = (TESActorBaseVtbl *)&TESCreature::`vftable'{for `TESCreature'}; /*0x51e9d1*/
  self->super.actorBaseData.vtbl = &TESCreature::`vftable'{for `TESActorBaseData'}; /*0x51e9d7*/
  self->super.container.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESContainer'}; /*0x51e9de*/
  self->super.spellList.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESSpellList'}; /*0x51e9e5*/
  self->super.aiForm.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAIForm'}; /*0x51e9ec*/
  self->super.health.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESHealthForm'}; /*0x51e9f3*/
  self->super.attributes.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAttributes'}; /*0x51e9fd*/
  self->super.animation.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAnimation'}; /*0x51ea07*/
  self->super.fullName.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESFullName'}; /*0x51ea11*/
  self->super.model.vtbl = (TESModelVtbl *)&TESCreature::`vftable'{for `TESModel'}; /*0x51ea1b*/
  self->super.scriptable.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESScriptableForm'}; /*0x51ea25*/
  self->attackDamage.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAttackDamageForm'}; /*0x51ea2f*/
  self->modelList.__vtable = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESModelList'}; /*0x51ea35*/
  TESCreature_ClearAllComponentRefs((TESForm *)self); /*0x51ea47*/
  TESTexture_destr(&self->bloodDecal.vtbl); /*0x51ea57*/
  TESModel::~TESModel(&self->bloodSpray); /*0x51ea67*/
  TESAttackDamageForm_destr(p_attackDamage); /*0x51ea73*/
  TESActorBase::~TESActorBase((TESActorBase *)self); /*0x51ea82*/
}
