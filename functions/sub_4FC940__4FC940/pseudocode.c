void __thiscall sub_4FC940(BSSimpleList_VoidPtr *this)
{
  MemoryHeap_Free_checked(*((void **)this + 0xC));
  MemoryHeap_Free_checked(*((void **)this + 0xB));
  sub_4FC6C0(this);
  sub_4FC730((Script *)this);
  j_TESForm_ClearComponentReferences((TESForm *)this);
}
