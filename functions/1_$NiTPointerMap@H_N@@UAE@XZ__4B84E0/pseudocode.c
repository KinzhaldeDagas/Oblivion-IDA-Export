void __thiscall NiTPointerMap<int,bool>::~NiTPointerMap<int,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,bool>::`vftable'; /*0x4b8508*/
  NiTMap_Clear(this); /*0x4b8516*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,bool>::`vftable'; /*0x4b8525*/
  NiTMap_Clear(this); /*0x4b852b*/
  FormHeapFree(*(this + 2)); /*0x4b8534*/
}
