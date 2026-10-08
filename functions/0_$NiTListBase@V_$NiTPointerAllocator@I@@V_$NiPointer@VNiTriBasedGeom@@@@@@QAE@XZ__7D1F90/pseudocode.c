NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>>::NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>>::`vftable'; /*0x7d1f98*/
  if ( (a2 & 1) != 0 ) /*0x7d1f9e*/
    FormHeapFree((unsigned int)this); /*0x7d1fa1*/
  return this; /*0x7d1fab*/
}
