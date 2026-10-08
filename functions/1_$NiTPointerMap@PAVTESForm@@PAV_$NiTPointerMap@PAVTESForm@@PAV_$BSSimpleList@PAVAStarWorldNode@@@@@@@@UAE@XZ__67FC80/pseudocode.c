// Verified outer map destructor restores its NiTPointerMap/base-map vtables, clears entries, then frees the bucket-head array.
void __thiscall NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::~NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>(
        LowPathWorldDoorLinkMap *this)
{
  this->vtable = &NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'; /*0x67fca8*/
  NiTMap_Clear(this); /*0x67fcb6*/
  this->vtable = &NiTMapBase<NiTPointerAllocator<unsigned int>,TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'; /*0x67fcc5*/
  NiTMap_Clear(this); /*0x67fccb*/
  FormHeapFree((unsigned int)this->buckets); /*0x67fcd4*/
}
