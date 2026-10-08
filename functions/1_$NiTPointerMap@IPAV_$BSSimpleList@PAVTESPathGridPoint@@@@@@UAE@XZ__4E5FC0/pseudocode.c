void __thiscall NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::`vftable'; /*0x4e5fe8*/
  NiTMap_Clear(this); /*0x4e5ff6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESPathGridPoint *> *>::`vftable'; /*0x4e6005*/
  NiTMap_Clear(this); /*0x4e600b*/
  FormHeapFree(*(this + 2)); /*0x4e6014*/
}
