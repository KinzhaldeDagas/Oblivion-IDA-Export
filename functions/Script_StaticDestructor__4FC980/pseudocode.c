int __thiscall Script_StaticDestructor(TESForm *this)
{
  this->vtbl = (TESFormVtbl *)&Script::`vftable'; /*0x4fc9a8*/
  MemoryHeap_Free_checked(*((void **)this + 0xC));// Script_StaticDestructor frees script->data (offset 0x30) through FormHeap. /*0x4fc9bf*/
  MemoryHeap_Free_checked(*((void **)this + 0xB));// Script_StaticDestructor frees script->text (offset 0x2C) through FormHeap. /*0x4fc9cd*/
  Script_ClearVariableList((BSSimpleList_VoidPtr *)this);// Script_StaticDestructor calls variable-list cleanup at 0x4FC6C0. /*0x4fc9d4*/
  Script_ClearReferenceList((Script *)this);    // Script_StaticDestructor calls ref-list cleanup at 0x4FC730. /*0x4fc9db*/
  j_TESForm_ClearComponentReferences(this); /*0x4fc9e2*/
  return TESForm_destr(this); /*0x4fc9f6*/
}
