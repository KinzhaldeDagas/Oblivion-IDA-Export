void __thiscall NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::~NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::`vftable'; /*0x45ef78*/
  NiTMap_Clear(this); /*0x45ef86*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned char,BSSimpleList<LoadFormHeader *> *>::`vftable'; /*0x45ef95*/
  NiTMap_Clear(this); /*0x45ef9b*/
  FormHeapFree(*(this + 2)); /*0x45efa4*/
}
