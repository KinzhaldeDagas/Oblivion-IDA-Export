// Verified inner map destructor restores the NiTPointerMap/base-map vtables, clears entries, then frees the bucket-head array.
void __thiscall NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::~NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(
        LowPathSpaceNodeMap *this)
{
  this->vtable = &NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable'; /*0x67fc38*/
  NiTMap_Clear(this); /*0x67fc46*/
  this->vtable = &NiTMapBase<NiTPointerAllocator<unsigned int>,TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable'; /*0x67fc55*/
  NiTMap_Clear(this); /*0x67fc5b*/
  FormHeapFree((unsigned int)this->buckets); /*0x67fc64*/
}
