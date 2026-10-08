void __thiscall NiTPointerMap<char const *,NiControllerSequence *>::~NiTPointerMap<char const *,NiControllerSequence *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiControllerSequence *>::`vftable'; /*0x6c5008*/
  NiTMap_Clear(this); /*0x6c5016*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiControllerSequence *>::`vftable'; /*0x6c5025*/
  NiTMap_Clear(this); /*0x6c502b*/
  FormHeapFree(*(this + 2)); /*0x6c5034*/
}
