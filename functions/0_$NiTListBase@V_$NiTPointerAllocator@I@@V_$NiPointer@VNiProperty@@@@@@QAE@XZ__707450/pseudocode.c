NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>>::NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>>::`vftable'; /*0x707458*/
  if ( (a2 & 1) != 0 ) /*0x70745e*/
    FormHeapFree((unsigned int)this); /*0x707461*/
  return this; /*0x70746b*/
}
