void __thiscall NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable'; /*0x4f0f18*/
  NiTMap_Clear(this); /*0x4f0f26*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable'; /*0x4f0f35*/
  NiTMap_Clear(this); /*0x4f0f3b*/
  FormHeapFree(*(this + 2)); /*0x4f0f44*/
}
