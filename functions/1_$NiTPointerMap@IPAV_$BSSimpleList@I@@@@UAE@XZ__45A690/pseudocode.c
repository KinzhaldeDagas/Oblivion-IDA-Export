void __thiscall NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>::~NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>::`vftable'; /*0x45a6b8*/
  NiTMap_Clear(this); /*0x45a6c6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<unsigned int> *>::`vftable'; /*0x45a6d5*/
  NiTMap_Clear(this); /*0x45a6db*/
  FormHeapFree(*(this + 2)); /*0x45a6e4*/
}
