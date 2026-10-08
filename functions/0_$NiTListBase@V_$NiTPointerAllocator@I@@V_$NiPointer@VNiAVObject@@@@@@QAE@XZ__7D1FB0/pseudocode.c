NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>>::NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>>::`vftable'; /*0x7d1fb8*/
  if ( (a2 & 1) != 0 ) /*0x7d1fbe*/
    FormHeapFree((unsigned int)this); /*0x7d1fc1*/
  return this; /*0x7d1fcb*/
}
