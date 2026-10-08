void __thiscall TESObjectACTI::~TESObjectACTI(TESObjectACTI *this)
{
  TESModel *p_model; // edi

  p_model = &this->members.model; /*0x4b401b*/
  this->__vftable = (TESBoundObjectVtbl *)&TESObjectACTI::`vftable'{for `TESObjectACTI'}; /*0x4b401e*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectACTI::`vftable'{for `TESFullName'}; /*0x4b4024*/
  this->members.model.vtbl = (TESModelVtbl *)&TESObjectACTI::`vftable'{for `TESModel'}; /*0x4b402b*/
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectACTI::`vftable'{for `TESScriptableForm'}; /*0x4b4031*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4b4040*/
  TESModel::~TESModel(p_model); /*0x4b404c*/
  FormHeapFree((unsigned int)this->members.fullName.name.m_data); /*0x4b4055*/
  this->members.fullName.name.m_data = 0; /*0x4b4061*/
  this->members.fullName.name.m_bufLen = 0; /*0x4b4064*/
  this->members.fullName.name.m_dataLen = 0; /*0x4b4068*/
  TESObject_destr((TESForm *)this); /*0x4b4074*/
}
