void __thiscall NiTPointerMap<unsigned short,AnimSequenceBase *>::~NiTPointerMap<unsigned short,AnimSequenceBase *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned short,AnimSequenceBase *>::`vftable'; /*0x473d28*/
  NiTMap_Clear(this); /*0x473d36*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned short,AnimSequenceBase *>::`vftable'; /*0x473d45*/
  NiTMap_Clear(this); /*0x473d4b*/
  FormHeapFree(*(this + 2)); /*0x473d54*/
}
