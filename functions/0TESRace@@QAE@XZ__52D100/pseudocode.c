TESRace *__thiscall TESRace::TESRace(TESRace *this)
{
  TESForm_constr((TESForm *)this); /*0x52d12b*/
  this->name.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable'; /*0x52d132*/
  this->name.name.m_data = 0; /*0x52d13d*/
  this->name.name.m_dataLen = 0; /*0x52d140*/
  this->name.name.m_bufLen = 0; /*0x52d144*/
  TESDescription_constr(&this->desc.vtbl); /*0x52d152*/
  TESSpellList_constr(&this->spells.vtbl); /*0x52d15c*/
  sub_46E5E0(&this->reaction.vtbl); /*0x52d169*/
  this->vtbl = (TESFormVtbl *)&TESRace::`vftable'{for `TESRace'}; /*0x52d176*/
  this->name.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESFullName'}; /*0x52d17c*/
  this->desc.vtbl = (TESDescriptionVtbl *)&TESRace::`vftable'{for `TESDescription'}; /*0x52d183*/
  this->spells.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESSpellList'}; /*0x52d18a*/
  this->reaction.vtbl = (BaseFormComponentVtbl *)&TESRace::`vftable'{for `TESReactionForm'}; /*0x52d190*/
  TESAttributes_constr(&this->maleAttr.vtbl); /*0x52d197*/
  TESAttributes_constr(&this->femaleAttr.vtbl); /*0x52d1a7*/
  this->hairs.node.data = 0; /*0x52d1c0*/
  this->hairs.node.next = 0; /*0x52d1c6*/
  this->eyes.node.data = 0; /*0x52d1d2*/
  this->eyes.node.next = 0; /*0x52d1d8*/
  ArrayConstructor( /*0x52d1de*/
    (char *)this->tails,
    0x18u,
    2,
    (void (__thiscall *)(char *))TESModel::TESModel,
    (void (__thiscall *)(void *))TESModel::~TESModel);
  ArrayConstructor( /*0x52d201*/
    (char *)this->unk9,
    0x18u,
    9,
    (void (__thiscall *)(char *))TESModel::TESModel,
    (void (__thiscall *)(void *))TESModel::~TESModel);
  ArrayConstructor( /*0x52d21f*/
    (char *)this->unk10,
    0xCu,
    9,
    (void (__thiscall *)(char *))TESTexture_constr,
    (void (__thiscall *)(void *))TESTexture_destr);
  ArrayConstructor( /*0x52d23e*/
    (char *)this->unk11,
    0xCu,
    0xA,
    (void (__thiscall *)(char *))TESTexture_constr,
    (void (__thiscall *)(void *))TESTexture_destr);
  ArrayConstructor( /*0x52d25c*/
    (char *)this->unk12,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  this->unk13_2 = (UInt32)&NiTArray<FaceGenUndo *>::`vftable'; /*0x52d261*/
  this->unk15 = 0; /*0x52d26b*/
  this->pad = 1; /*0x52d272*/
  this->unk16 = 0; /*0x52d27b*/
  this->unk17 = 0; /*0x52d282*/
  this->unk14 = 0; /*0x52d289*/
  this->super.type = kFormType_Race; /*0x52d296*/
  sub_52B840((float *)this); /*0x52d299*/
  return this; /*0x52d2a0*/
}
