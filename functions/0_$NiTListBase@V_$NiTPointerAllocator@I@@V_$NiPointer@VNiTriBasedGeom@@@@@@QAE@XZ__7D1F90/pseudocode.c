NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>>::NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
