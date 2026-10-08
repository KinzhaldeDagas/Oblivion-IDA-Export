void __thiscall TESObjectCONT::~TESObjectCONT(TESObjectCONT *this)
{
  TESContainer *p_container; // edi
  TESModel *p_model; // ebx
  TESWeightForm *p_weight; // ebp

  p_container = &this->members.container; /*0x4b6b2d*/
  p_model = &this->members.model; /*0x4b6b30*/
  p_weight = &this->members.weight; /*0x4b6b33*/
  this->__vftable = (TESObjectCONTVtbl *)&TESObjectCONT::`vftable'{for `TESObjectCONT'}; /*0x4b6b36*/
  this->members.container.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESContainer'}; /*0x4b6b3c*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESFullName'}; /*0x4b6b42*/
  this->members.model.vtbl = (TESModelVtbl *)&TESObjectCONT::`vftable'{for `TESModel'}; /*0x4b6b49*/
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESScriptableForm'}; /*0x4b6b4f*/
  this->members.weight.super = (BaseFormComponent *)&TESObjectCONT::`vftable'{for `TESWeightForm'}; /*0x4b6b56*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4b6b65*/
  TESWeightForm_destr(p_weight); /*0x4b6b71*/
  TESModel::~TESModel(p_model); /*0x4b6b7d*/
  FormHeapFree((unsigned int)this->members.fullName.name.m_data); /*0x4b6b86*/
  this->members.fullName.name.m_data = 0; /*0x4b6b92*/
  this->members.fullName.name.m_bufLen = 0; /*0x4b6b95*/
  this->members.fullName.name.m_dataLen = 0; /*0x4b6b99*/
  TESContainer_destr(p_container); /*0x4b6ba1*/
  TESObject_destr((TESForm *)this); /*0x4b6bb0*/
}
