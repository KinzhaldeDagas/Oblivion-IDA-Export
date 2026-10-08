_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,unsigned int>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,unsigned int>::`vftable'; /*0x6eb968*/
  if ( (a2 & 1) != 0 ) /*0x6eb96e*/
    FormHeapFree((unsigned int)this); /*0x6eb971*/
  return this; /*0x6eb97b*/
}
