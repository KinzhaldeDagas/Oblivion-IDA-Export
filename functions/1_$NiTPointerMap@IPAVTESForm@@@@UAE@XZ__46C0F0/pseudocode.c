void __thiscall NiTPointerMap<unsigned int,TESForm *>::~NiTPointerMap<unsigned int,TESForm *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,TESForm *>::`vftable'; /*0x46c118*/
  NiTMap_Clear(this); /*0x46c126*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *>::`vftable'; /*0x46c135*/
  NiTMap_Clear(this); /*0x46c13b*/
  FormHeapFree(*(this + 2)); /*0x46c144*/
}
