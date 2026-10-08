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

  AVCollection_destr(&this->super.actorValueModifiers); /*0x51e88a*/
  if ( this ) /*0x51e898*/
    p_model = &this->super.model; /*0x51e89a*/
  else
    p_model = 0; /*0x51e8a2*/
  TESModel::~TESModel(p_model); /*0x51e8a4*/
  if ( this ) /*0x51e8ab*/
    p_fullName = &this->super.fullName; /*0x51e8ad*/
  else
    p_fullName = 0; /*0x51e8b5*/
  FormHeapFree((unsigned int)p_fullName->name.m_data); /*0x51e8bb*/
  p_fullName->name.m_data = 0; /*0x51e8c5*/
  p_fullName->name.m_bufLen = 0; /*0x51e8c8*/
  p_fullName->name.m_dataLen = 0; /*0x51e8cc*/
  if ( this ) /*0x51e8d5*/
    p_attributes = &this->super.attributes; /*0x51e8d7*/
  else
    p_attributes = 0; /*0x51e8df*/
  TESAttributes_destr(p_attributes); /*0x51e8e1*/
  if ( this ) /*0x51e8ed*/
    p_health = &this->super.health; /*0x51e8ef*/
  else
    p_health = 0; /*0x51e8f7*/
  TESHealthForm_destr(p_health); /*0x51e8f9*/
  if ( this ) /*0x51e905*/
    p_aiForm = &this->super.aiForm; /*0x51e907*/
  else
    p_aiForm = 0; /*0x51e90c*/
  TESAIForm_destr(p_aiForm, v6); /*0x51e90e*/
  if ( this ) /*0x51e91a*/
    p_spellList = &this->super.spellList; /*0x51e91c*/
  else
    p_spellList = 0; /*0x51e921*/
  TESSpellList_destr_(p_spellList); /*0x51e923*/
  if ( this ) /*0x51e92f*/
    p_container = &this->super.container; /*0x51e931*/
  else
    p_container = 0; /*0x51e936*/
  TESContainer_destr(p_container); /*0x51e938*/
  if ( this ) /*0x51e943*/
    p_actorBaseData = (unsigned int *)&this->super.actorBaseData; /*0x51e945*/
  else
    p_actorBaseData = 0; /*0x51e94a*/
  TESActorBaseData_destr(p_actorBaseData); /*0x51e94c*/
  TESObject_destr((TESForm *)this); /*0x51e95b*/
}
