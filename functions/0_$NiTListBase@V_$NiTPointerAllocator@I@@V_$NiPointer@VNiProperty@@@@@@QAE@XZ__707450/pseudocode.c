NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>>::NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
