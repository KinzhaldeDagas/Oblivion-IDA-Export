_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::`vftable'; /*0x763e98*/
  if ( (a2 & 1) != 0 ) /*0x763e9e*/
    FormHeapFree((unsigned int)this); /*0x763ea1*/
  return this; /*0x763eab*/
}
