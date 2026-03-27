void __thiscall sub_51E9A0(TESActorBase *this)
{
  TESActorBase *v2; // edi

  v2 = this + 1;
  this->vtbl = (TESActorBaseVtbl *)&TESCreature::`vftable'{for `TESCreature'};
  this->super.actorBaseData.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESActorBaseData'};
  this->super.container.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESContainer'};
  this->super.spellList.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESSpellList'};
  this->super.aiForm.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAIForm'};
  this->super.health.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESHealthForm'};
  this->super.attributes.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAttributes'};
  this->super.animation.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESAnimation'};
  this->super.fullName.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESFullName'};
  this->super.model.vtbl = (TESModelVtbl *)&TESCreature::`vftable'{for `TESModel'};
  this->super.scriptable.vtbl = (BaseFormComponentVtbl *)&TESCreature::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x39) = &TESCreature::`vftable'{for `TESAttackDamageForm'};
  *((_DWORD *)this + 0x3B) = &TESCreature::`vftable'{for `TESModelList'};
  TESCreature_ClearAllComponentRefs((TESForm *)this);
  TESTexture_destr((_DWORD *)this + 0x4D);
  TESModel::~TESModel((TESModel *)((char *)this + 0x11C));
  TESAttackDamageForm_destr(v2);
  TESActorBase::~TESActorBase(this);
}
