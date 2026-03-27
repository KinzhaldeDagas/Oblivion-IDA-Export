TESObjectDOOR *__thiscall TESObjectDOOR::TESObjectDOOR(TESObjectDOOR *this)
{
  TESBoundAnimObject_constr((TESForm *)this);
  this->super.fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable';
  this->super.fullName.name.m_data = 0;
  this->super.fullName.name.m_dataLen = 0;
  this->super.fullName.name.m_bufLen = 0;
  TESModel::TESModel(&this->super.model);
  TESScriptableForm_constr(&this->super.scriptable.vtbl);
  this->__vftable = (TESObjectDOORVtbl *)&TESObjectDOOR::`vftable'{for `TESObjectDOOR'};
  this->super.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectDOOR::`vftable'{for `TESFullName'};
  this->super.model.vtbl = (TESModelVtbl *)&TESObjectDOOR::`vftable'{for `TESModel'};
  this->super.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectDOOR::`vftable'{for `TESScriptableForm'};
  this->super.randomTeleport.destination = 0;
  this->super.randomTeleport.next = 0;
  this->super.super.super.type = kFormType_Door;
  this->super.animSounds[0] = 0;
  this->super.animSounds[1] = 0;
  this->super.animSounds[2] = 0;
  this->super.doorFlags = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
