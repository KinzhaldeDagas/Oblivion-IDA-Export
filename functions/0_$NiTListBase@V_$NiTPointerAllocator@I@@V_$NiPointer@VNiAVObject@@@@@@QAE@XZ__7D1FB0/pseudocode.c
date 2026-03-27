NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>>::NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
