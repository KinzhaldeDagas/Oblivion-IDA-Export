void __thiscall NiTPointerMap<unsigned int,TESTextureList *>::~NiTPointerMap<unsigned int,TESTextureList *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,TESTextureList *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
