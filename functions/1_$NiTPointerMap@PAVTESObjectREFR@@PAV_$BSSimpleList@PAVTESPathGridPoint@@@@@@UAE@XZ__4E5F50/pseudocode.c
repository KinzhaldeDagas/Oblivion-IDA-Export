void __thiscall NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable'; /*0x4e5f78*/
  NiTMap_Clear(this); /*0x4e5f86*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable'; /*0x4e5f95*/
  NiTMap_Clear(this); /*0x4e5f9b*/
  FormHeapFree(*(this + 2)); /*0x4e5fa4*/
}
