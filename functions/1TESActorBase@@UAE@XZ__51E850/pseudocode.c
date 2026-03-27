void __thiscall TESActorBase::~TESActorBase(TESActorBase *this)
{
  TESModel *p_model; // ecx
  TESFullName *p_fullName; // edi
  TESAttributes *p_attributes; // ecx
  TESHealthForm *p_health; // ecx
  int v6; // edx
  TESAIForm *p_aiForm; // ecx
  TESSpellList *p_spellList; // ecx
  TESContainer *p_container; // ecx
  unsigned int *p_actorBaseData; // ecx

  AVCollection_destr(&this->super.unk.unk0);
  if ( this )
    p_model = &this->super.model;
  else
    p_model = 0;
  TESModel::~TESModel(p_model);
  if ( this )
    p_fullName = &this->super.fullName;
  else
    p_fullName = 0;
  FormHeapFree((unsigned int)p_fullName->name.m_data);
  p_fullName->name.m_data = 0;
  p_fullName->name.m_bufLen = 0;
  p_fullName->name.m_dataLen = 0;
  if ( this )
    p_attributes = &this->super.attributes;
  else
    p_attributes = 0;
  TESAttributes_destr(p_attributes);
  if ( this )
    p_health = &this->super.health;
  else
    p_health = 0;
  TESHealthForm_destr(p_health);
  if ( this )
    p_aiForm = &this->super.aiForm;
  else
    p_aiForm = 0;
  TESAIForm_destr(p_aiForm, v6);
  if ( this )
    p_spellList = &this->super.spellList;
  else
    p_spellList = 0;
  TESSpellList_destr_(p_spellList);
  if ( this )
    p_container = &this->super.container;
  else
    p_container = 0;
  TESContainer_destr(p_container);
  if ( this )
    p_actorBaseData = (unsigned int *)&this->super.actorBaseData;
  else
    p_actorBaseData = 0;
  TESActorBaseData_destr(p_actorBaseData);
  TESObject_destr((TESForm *)this);
}
