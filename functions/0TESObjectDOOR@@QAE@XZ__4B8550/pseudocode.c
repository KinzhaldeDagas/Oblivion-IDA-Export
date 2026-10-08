// Verified constructor initializes TESObjectDOORMembr.randomTeleport's inline BSSimpleList head (+0x68/+0x6C in TESObjectDOOR) to empty and doorFlags to zero; installs TESObjectDOOR and base-component vtables.
TESObjectDOOR *__thiscall TESObjectDOOR::TESObjectDOOR(TESObjectDOOR *this)
{
  TESBoundAnimObject_constr((TESForm *)this); /*0x4b857b*/
  this->super.fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable'; /*0x4b8582*/
  this->super.fullName.name.m_data = 0; /*0x4b858d*/
  this->super.fullName.name.m_dataLen = 0; /*0x4b8590*/
  this->super.fullName.name.m_bufLen = 0; /*0x4b8594*/
  TESModel::TESModel(&this->super.model); /*0x4b85a2*/
  TESScriptableForm_constr(&this->super.scriptable.vtbl); /*0x4b85b1*/
  this->__vftable = (TESObjectDOORVtbl *)&TESObjectDOOR::`vftable'{for `TESObjectDOOR'}; /*0x4b85b6*/
  this->super.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectDOOR::`vftable'{for `TESFullName'}; /*0x4b85bc*/
  this->super.model.vtbl = (TESModelVtbl *)&TESObjectDOOR::`vftable'{for `TESModel'}; /*0x4b85c3*/
  this->super.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectDOOR::`vftable'{for `TESScriptableForm'}; /*0x4b85c9*/
  this->super.randomTeleport.destination = 0; /*0x4b85d0*/
  this->super.randomTeleport.next = 0; /*0x4b85d3*/
  this->super.super.super.type = kFormType_Door; /*0x4b85d8*/
  this->super.animSounds[0] = 0; /*0x4b85dc*/
  this->super.animSounds[1] = 0; /*0x4b85df*/
  this->super.animSounds[2] = 0; /*0x4b85e2*/
  this->super.doorFlags = 0; /*0x4b85e5*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4b85e8*/
  return this; /*0x4b85ef*/
}
