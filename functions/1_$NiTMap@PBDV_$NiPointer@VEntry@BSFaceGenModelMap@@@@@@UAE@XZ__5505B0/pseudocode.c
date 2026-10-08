void __thiscall NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::~NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'; /*0x5505d8*/
  NiTMap_Clear(this); /*0x5505e6*/
  *this = (unsigned int)&NiTMapBase<DFALL<NiPointer<BSFaceGenModelMap::Entry>>,char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'; /*0x5505f5*/
  NiTMap_Clear(this); /*0x5505fb*/
  FormHeapFree(*(this + 2)); /*0x550604*/
}
