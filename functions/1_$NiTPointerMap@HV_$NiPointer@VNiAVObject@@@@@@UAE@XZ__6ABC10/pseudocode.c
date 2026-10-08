void __thiscall NiTPointerMap<int,NiPointer<NiAVObject>>::~NiTPointerMap<int,NiPointer<NiAVObject>>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,NiPointer<NiAVObject>>::`vftable'; /*0x6abc38*/
  NiTMap_Clear(this); /*0x6abc46*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,NiPointer<NiAVObject>>::`vftable'; /*0x6abc55*/
  NiTMap_Clear(this); /*0x6abc5b*/
  FormHeapFree(*(this + 2)); /*0x6abc64*/
}
