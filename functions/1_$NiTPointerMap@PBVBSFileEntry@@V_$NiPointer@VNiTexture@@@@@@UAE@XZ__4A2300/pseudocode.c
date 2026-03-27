void __thiscall NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::~NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,BSFileEntry const *,NiPointer<NiTexture>>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
