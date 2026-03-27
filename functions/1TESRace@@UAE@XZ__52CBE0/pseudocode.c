void __thiscall TESRace::~TESRace(TESRace *this)
{
  TESSpellList *p_spells; // edi
  TESReactionForm *p_reaction; // ebx
  UInt32 unk14; // [esp-4h] [ebp-30h]

  p_spells = &this->spells;
  p_reaction = &this->reaction;
  this->vtbl = (TESFormVtbl *)&TESRace::`vftable'{for `TESRace'};
  this->name.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESFullName'};
  this->desc.vtbl = (TESDescriptionVtbl *)&TESRace::`vftable'{for `TESDescription'};
  this->spells.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESSpellList'};
  this->reaction.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESReactionForm'};
  sub_52B990((unsigned int *)this);
  unk14 = this->unk14;
  this->unk13_2 = (UInt32)&NiTArray<FaceGenUndo *>::`vftable';
  FormHeapFree(unk14);
  _LN21(this->unk12, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  _LN21(this->unk11, 0xCu, 0xA, (void (__thiscall *)(void *))TESTexture_destr);
  _LN21(this->unk10, 0xCu, 9, (void (__thiscall *)(void *))TESTexture_destr);
  _LN21(this->unk9, 0x18u, 9, (void (__thiscall *)(void *))TESModel::~TESModel);
  _LN21(this->tails, 0x18u, 2, (void (__thiscall *)(void *))TESModel::~TESModel);
  TESAttributes_destr(&this->femaleAttr.vtbl);
  TESAttributes_destr(&this->maleAttr.vtbl);
  sub_46E5C0(p_reaction);
  TESSpellList_destr_(p_spells);
  FormHeapFree((unsigned int)this->name.name.m_data);
  this->name.name.m_data = 0;
  this->name.name.m_bufLen = 0;
  this->name.name.m_dataLen = 0;
  TESForm_destr((TESForm *)this);
}
