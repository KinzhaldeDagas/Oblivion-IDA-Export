void __thiscall TESObjectCONT::~TESObjectCONT(TESObjectCONT *this)
{
  TESContainer *p_container; // edi
  TESModel *p_model; // ebx
  TESWeightForm *p_weight; // ebp

  p_container = &this->members.container;
  p_model = &this->members.model;
  p_weight = &this->members.weight;
  this->__vftable = (TESObjectCONTVtbl *)&TESObjectCONT::`vftable'{for `TESObjectCONT'};
  this->members.container.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESContainer'};
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESFullName'};
  this->members.model.vtbl = (TESModelVtbl *)&TESObjectCONT::`vftable'{for `TESModel'};
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESScriptableForm'};
  this->members.weight.super = (BaseFormComponent *)&TESObjectCONT::`vftable'{for `TESWeightForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESWeightForm_destr(p_weight);
  TESModel::~TESModel(p_model);
  FormHeapFree((unsigned int)this->members.fullName.name.m_data);
  this->members.fullName.name.m_data = 0;
  this->members.fullName.name.m_bufLen = 0;
  this->members.fullName.name.m_dataLen = 0;
  TESContainer_destr(p_container);
  TESObject_destr((TESForm *)this);
}
