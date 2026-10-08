void __thiscall NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>::`vftable'; /*0x4e8f38*/
  NiTMap_Clear(this); /*0x4e8f46*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESConnectedPoint *> *>::`vftable'; /*0x4e8f55*/
  NiTMap_Clear(this); /*0x4e8f5b*/
  FormHeapFree(*(this + 2)); /*0x4e8f64*/
}
