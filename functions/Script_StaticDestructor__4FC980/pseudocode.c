int __thiscall Script_StaticDestructor(TESForm *this)
{
  this->vtbl = (TESFormVtbl *)&Script::`vftable';
  MemoryHeap_Free_checked(*((void **)this + 0xC));
  MemoryHeap_Free_checked(*((void **)this + 0xB));
  sub_4FC6C0((BSSimpleList_VoidPtr *)this);
  sub_4FC730((Script *)this);
  j_TESForm_ClearComponentReferences(this);
  return TESForm_destr(this);
}
