void __thiscall NiTPointerMap<unsigned int,TESTextureList *>::~NiTPointerMap<unsigned int,TESTextureList *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,TESTextureList *>::`vftable'; /*0x4b2f18*/
  NiTMap_Clear(this); /*0x4b2f26*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *>::`vftable'; /*0x4b2f35*/
  NiTMap_Clear(this); /*0x4b2f3b*/
  FormHeapFree(*(this + 2)); /*0x4b2f44*/
}
