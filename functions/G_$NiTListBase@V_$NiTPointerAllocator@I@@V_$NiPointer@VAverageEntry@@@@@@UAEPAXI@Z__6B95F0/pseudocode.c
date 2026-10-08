_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::`vftable'; /*0x6b95f8*/
  if ( (a2 & 1) != 0 ) /*0x6b95fe*/
    FormHeapFree((unsigned int)this); /*0x6b9601*/
  return this; /*0x6b960b*/
}
