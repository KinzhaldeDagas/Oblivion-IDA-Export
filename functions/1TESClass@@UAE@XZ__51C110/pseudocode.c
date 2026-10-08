void __thiscall TESClass::~TESClass(TESClass *this)
{
  TESTexture *p_texture; // edi

  p_texture = &this->members.texture; /*0x51c13b*/
  this->__vftable = (TESClassVtbl *)&TESClass::`vftable'{for `TESClass'}; /*0x51c13e*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESClass::`vftable'{for `TESFullName'}; /*0x51c144*/
  this->members.description.vtbl = (TESDescriptionVtbl *)&TESClass::`vftable'{for `TESDescription'}; /*0x51c14b*/
  this->members.texture.vtbl = (BaseFormComponentVtbl *)&TESClass::`vftable'{for `TESTexture'}; /*0x51c152*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x51c160*/
  TESTexture_destr(p_texture); /*0x51c16c*/
  FormHeapFree((unsigned int)this->members.fullName.name.m_data); /*0x51c175*/
  this->members.fullName.name.m_data = 0; /*0x51c181*/
  this->members.fullName.name.m_bufLen = 0; /*0x51c184*/
  this->members.fullName.name.m_dataLen = 0; /*0x51c188*/
  TESForm_destr((TESForm *)this); /*0x51c194*/
}
