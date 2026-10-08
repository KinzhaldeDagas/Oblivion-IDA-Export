void __thiscall NiTPointerMap<NiObject *,bool>::~NiTPointerMap<NiObject *,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<NiObject *,bool>::`vftable'; /*0x4786e8*/
  NiTMap_Clear(this); /*0x4786f6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject *,bool>::`vftable'; /*0x478705*/
  NiTMap_Clear(this); /*0x47870b*/
  FormHeapFree(*(this + 2)); /*0x478714*/
}
