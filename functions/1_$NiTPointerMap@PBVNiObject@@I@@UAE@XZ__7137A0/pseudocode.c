void __thiscall NiTPointerMap<NiObject const *,unsigned int>::~NiTPointerMap<NiObject const *,unsigned int>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<NiObject const *,unsigned int>::`vftable'; /*0x7137c8*/
  NiTMap_Clear(this); /*0x7137d6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject const *,unsigned int>::`vftable'; /*0x7137e5*/
  NiTMap_Clear(this); /*0x7137eb*/
  FormHeapFree(*(this + 2)); /*0x7137f4*/
}
