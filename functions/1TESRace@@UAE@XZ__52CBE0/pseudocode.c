void __thiscall TESRace::~TESRace(TESRace *this)
{
  TESSpellList *p_spells; // edi
  TESReactionForm *p_reaction; // ebx
  UInt32 unk14; // [esp-4h] [ebp-30h]

  p_spells = &this->spells; /*0x52cc0c*/
  p_reaction = &this->reaction; /*0x52cc0f*/
  this->vtbl = (TESFormVtbl *)&TESRace::`vftable'{for `TESRace'}; /*0x52cc12*/
  this->name.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESFullName'}; /*0x52cc18*/
  this->desc.vtbl = (TESDescriptionVtbl *)&TESRace::`vftable'{for `TESDescription'}; /*0x52cc1f*/
  this->spells.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESSpellList'}; /*0x52cc26*/
  this->reaction.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESReactionForm'}; /*0x52cc2c*/
  sub_52B990((unsigned int *)this); /*0x52cc3a*/
  unk14 = this->unk14; /*0x52cc45*/
  this->unk13_2 = (UInt32)&NiTArray<FaceGenUndo *>::`vftable'; /*0x52cc46*/
  FormHeapFree(unk14); /*0x52cc50*/
  _LN21((char *)this->unk12, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x52cc6d*/
  _LN21((char *)this->unk11, 0xCu, 0xA, (void (__thiscall *)(void *))TESTexture_destr); /*0x52cc87*/
  _LN21((char *)this->unk10, 0xCu, 9, (void (__thiscall *)(void *))TESTexture_destr); /*0x52cca1*/
  _LN21((char *)this->unk9, 0x18u, 9, (void (__thiscall *)(void *))TESModel::~TESModel); /*0x52ccbb*/
  _LN21((char *)this->tails, 0x18u, 2, (void (__thiscall *)(void *))TESModel::~TESModel); /*0x52ccd5*/
  TESAttributes_destr(&this->femaleAttr.vtbl); /*0x52cce5*/
  TESAttributes_destr(&this->maleAttr.vtbl); /*0x52ccf2*/
  sub_46E5C0(p_reaction); /*0x52ccfe*/
  TESSpellList_destr_(p_spells); /*0x52cd0a*/
  FormHeapFree((unsigned int)this->name.name.m_data); /*0x52cd13*/
  this->name.name.m_data = 0; /*0x52cd1d*/
  this->name.name.m_bufLen = 0; /*0x52cd20*/
  this->name.name.m_dataLen = 0; /*0x52cd24*/
  TESForm_destr((TESForm *)this); /*0x52cd32*/
}
