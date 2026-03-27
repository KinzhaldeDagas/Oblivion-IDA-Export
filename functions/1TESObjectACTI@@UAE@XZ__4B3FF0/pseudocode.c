void __thiscall TESObjectACTI::~TESObjectACTI(TESObjectACTI *this)
{
  TESModel *p_model; // edi

  p_model = &this->members.model;
  this->__vftable = (TESBoundObjectVtbl *)&TESObjectACTI::`vftable'{for `TESObjectACTI'};
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectACTI::`vftable'{for `TESFullName'};
  this->members.model.vtbl = (TESModelVtbl *)&TESObjectACTI::`vftable'{for `TESModel'};
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectACTI::`vftable'{for `TESScriptableForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESModel::~TESModel(p_model);
  FormHeapFree((unsigned int)this->members.fullName.name.m_data);
  this->members.fullName.name.m_data = 0;
  this->members.fullName.name.m_bufLen = 0;
  this->members.fullName.name.m_dataLen = 0;
  TESObject_destr((TESForm *)this);
}
