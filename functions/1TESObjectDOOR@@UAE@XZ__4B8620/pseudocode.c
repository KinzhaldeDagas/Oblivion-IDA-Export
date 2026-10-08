// Verified destructor restores TESObjectDOOR/base-component vtables, frees the random teleport-space list and clears form component references, destroys the model/name, then destroys the base object.
void __thiscall TESObjectDOOR::~TESObjectDOOR(TESObjectDOOR *this)
{
  TESModel *p_model; // edi

  p_model = &this->super.model; /*0x4b864b*/
  this->__vftable = (TESObjectDOORVtbl *)&TESObjectDOOR::`vftable'{for `TESObjectDOOR'}; /*0x4b864e*/
  this->super.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectDOOR::`vftable'{for `TESFullName'}; /*0x4b8654*/
  this->super.model.vtbl = (TESModelVtbl *)&TESObjectDOOR::`vftable'{for `TESModel'}; /*0x4b865b*/
  this->super.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectDOOR::`vftable'{for `TESScriptableForm'}; /*0x4b8661*/
  TESObjectDOOR_ClearRandomTeleportSpacesAndComponents((TESForm *)this); /*0x4b8670*/
  TESModel::~TESModel(p_model); /*0x4b867c*/
  FormHeapFree((unsigned int)this->super.fullName.name.m_data); /*0x4b8685*/
  this->super.fullName.name.m_data = 0; /*0x4b8691*/
  this->super.fullName.name.m_bufLen = 0; /*0x4b8694*/
  this->super.fullName.name.m_dataLen = 0; /*0x4b8698*/
  TESObject_destr((TESForm *)this); /*0x4b86a4*/
}
