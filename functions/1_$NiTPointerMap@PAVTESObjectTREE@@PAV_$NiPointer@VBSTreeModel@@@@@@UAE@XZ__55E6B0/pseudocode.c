void __thiscall NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::~NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
