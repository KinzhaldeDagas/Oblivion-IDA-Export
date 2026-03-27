void __thiscall TESClass::~TESClass(TESClass *this)
{
  TESTexture *p_texture; // edi

  p_texture = &this->members.texture;
  this->__vftable = (TESClassVtbl *)&TESClass::`vftable'{for `TESClass'};
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESClass::`vftable'{for `TESFullName'};
  this->members.description.vtbl = (TESDescriptionVtbl *)&TESClass::`vftable'{for `TESDescription'};
  this->members.texture.vtbl = (BaseFormComponentVtbl *)&TESClass::`vftable'{for `TESTexture'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESTexture_destr(p_texture);
  FormHeapFree((unsigned int)this->members.fullName.name.m_data);
  this->members.fullName.name.m_data = 0;
  this->members.fullName.name.m_bufLen = 0;
  this->members.fullName.name.m_dataLen = 0;
  TESForm_destr((TESForm *)this);
}
