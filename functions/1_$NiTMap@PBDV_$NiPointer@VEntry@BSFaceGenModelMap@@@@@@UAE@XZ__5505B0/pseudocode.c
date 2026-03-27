void __thiscall NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::~NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<NiPointer<BSFaceGenModelMap::Entry>>,char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
