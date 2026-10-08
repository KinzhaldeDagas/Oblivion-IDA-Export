void __thiscall NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::~NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'; /*0x55e6d8*/
  NiTMap_Clear(this); /*0x55e6e6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'; /*0x55e6f5*/
  NiTMap_Clear(this); /*0x55e6fb*/
  FormHeapFree(*(this + 2)); /*0x55e704*/
}
