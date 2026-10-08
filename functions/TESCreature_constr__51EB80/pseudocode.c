// Verified blood component lifecycle: TESCreature +0x11C is TESModel bloodSpray, +0x134 is TESTexture bloodDecal; actor-base-data this is +0x24. Constructor constructs, InitializeDefaults initializes, destructor destroys these components. No Fallout member offsets imported.
TESCreature *__thiscall TESCreature_constr(TESCreature *self)
{
  void (__thiscall *MarkAsModified)(TESActorBaseData *, unsigned int); // edx
  int v4; // [esp+4h] [ebp-24h]
  char v5; // [esp+8h] [ebp-20h]

  TESActorBase_constr((TESForm *)self); /*0x51ebab*/
  TESAttackDamageForm_constr(&self->attackDamage); /*0x51ebc0*/
  sub_46DBC0(&self->modelList.__vtable); /*0x51ebd0*/
  self->__vtable = (TESActorBaseVtbl *)&TESCreature::`vftable'{for `TESCreature'}; /*0x51ebe1*/
  self->super.actorBaseData.vtbl = &TESCreature::`vftable'{for `TESActorBaseData'}; /*0x51ebe7*/
  self->super.container.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESContainer'}; /*0x51ebed*/
  self->super.spellList.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESSpellList'}; /*0x51ebf4*/
  self->super.aiForm.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAIForm'}; /*0x51ebfb*/
  self->super.health.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESHealthForm'}; /*0x51ec01*/
  self->super.attributes.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAttributes'}; /*0x51ec0b*/
  self->super.animation.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAnimation'}; /*0x51ec15*/
  self->super.fullName.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESFullName'}; /*0x51ec1f*/
  self->super.model.vtbl = (TESModelVtbl *)&TESCreature::`vftable'{for `TESModel'}; /*0x51ec29*/
  self->super.scriptable.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESScriptableForm'}; /*0x51ec33*/
  self->attackDamage.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAttackDamageForm'}; /*0x51ec3d*/
  self->modelList.__vtable = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESModelList'}; /*0x51ec44*/
  TESModel::TESModel(&self->bloodSpray); /*0x51ec4e*/
  TESTexture_constr(&self->bloodDecal); /*0x51ec5e*/
  self->super.super.super.type = kFormType_Creature; /*0x51ec6a*/
  TESCreature_InitializeDefaults(self); /*0x51ec6e*/
  TESAIForm_SetResponsibility(&self->super.aiForm, 0x32); /*0x51ec77*/
  TESAIForm_SetAggression(&self->super.aiForm, 0x46); /*0x51ec80*/
  TESAIForm_SetConfidence(&self->super.aiForm, 0x32); /*0x51ec89*/
  TESAIForm_SetEnergy(&self->super.aiForm, 0x32); /*0x51ec92*/
  TESAttributes_SetAVi(&self->super.attributes, 6, 0x32); /*0x51eca1*/
  MarkAsModified = self->super.actorBaseData.vtbl->MarkAsModified; /*0x51eca8*/
  self->super.actorBaseData.flags |= 0x4000u; /*0x51ecab*/
  MarkAsModified(&self->super.actorBaseData, 0x10u); /*0x51ecb6*/
  if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x184) ) /*0x51ecc7*/
    TESActorBaseData_SetFactionRank((char *)&self->super.actorBaseData, dword_B361CC[0x33], 0, v4, v5); /*0x51ecda*/
  return self; /*0x51ece1*/
}
