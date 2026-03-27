void __thiscall TESObjectDOOR::~TESObjectDOOR(TESObjectDOOR *this)
{
  TESModel *p_model; // edi

  p_model = &this->super.model;
  this->__vftable = (TESObjectDOORVtbl *)&TESObjectDOOR::`vftable'{for `TESObjectDOOR'};
  this->super.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectDOOR::`vftable'{for `TESFullName'};
  this->super.model.vtbl = (TESModelVtbl *)&TESObjectDOOR::`vftable'{for `TESModel'};
  this->super.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectDOOR::`vftable'{for `TESScriptableForm'};
  sub_4B7A20((TESForm *)this);
  TESModel::~TESModel(p_model);
  FormHeapFree((unsigned int)this->super.fullName.name.m_data);
  this->super.fullName.name.m_data = 0;
  this->super.fullName.name.m_bufLen = 0;
  this->super.fullName.name.m_dataLen = 0;
  TESObject_destr((TESForm *)this);
}
