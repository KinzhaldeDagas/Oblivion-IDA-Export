void __thiscall NiTPointerMap<char const *,NiPointer<NiSequence>>::~NiTPointerMap<char const *,NiPointer<NiSequence>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiPointer<NiSequence>>::`vftable'; /*0x6e1018*/
  NiTMap_Clear(this); /*0x6e1026*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiSequence>>::`vftable'; /*0x6e1035*/
  NiTMap_Clear(this); /*0x6e103b*/
  FormHeapFree(*(this + 2)); /*0x6e1044*/
}
