TESRace *__thiscall TESRace::TESRace(TESRace *this)
{
  TESForm_constr((TESForm *)this);
  this->name.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable';
  this->name.name.m_data = 0;
  this->name.name.m_dataLen = 0;
  this->name.name.m_bufLen = 0;
  TESDescription_constr(&this->desc.vtbl);
  TESSpellList_constr(&this->spells.vtbl);
  sub_46E5E0(&this->reaction.vtbl);
  this->vtbl = (TESFormVtbl *)&TESRace::`vftable'{for `TESRace'};
  this->name.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESFullName'};
  this->desc.vtbl = (TESDescriptionVtbl *)&TESRace::`vftable'{for `TESDescription'};
  this->spells.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESSpellList'};
  this->reaction.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESReactionForm'};
  TESAttributes_constr(&this->maleAttr.vtbl);
  TESAttributes_constr(&this->femaleAttr.vtbl);
  this->hairs.node.data = 0;
  this->hairs.node.next = 0;
  this->eyes.node.data = 0;
  this->eyes.node.next = 0;
  ArrayConstructor(this->tails, 0x18u, 2, (int)TESModel::TESModel, (void (__thiscall *)(void *))TESModel::~TESModel);
  ArrayConstructor(this->unk9, 0x18u, 9, (int)TESModel::TESModel, (void (__thiscall *)(void *))TESModel::~TESModel);
  ArrayConstructor(this->unk10, 0xCu, 9, (int)TESTexture_constr, (void (__thiscall *)(void *))TESTexture_destr);
  ArrayConstructor(this->unk11, 0xCu, 0xA, (int)TESTexture_constr, (void (__thiscall *)(void *))TESTexture_destr);
  ArrayConstructor(this->unk12, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  this->unk13_2 = (UInt32)&NiTArray<FaceGenUndo *>::`vftable';
  this->unk15 = 0;
  this->pad = 1;
  this->unk16 = 0;
  this->unk17 = 0;
  this->unk14 = 0;
  this->super.type = kFormType_Race;
  sub_52B840((float *)this);
  return this;
}
