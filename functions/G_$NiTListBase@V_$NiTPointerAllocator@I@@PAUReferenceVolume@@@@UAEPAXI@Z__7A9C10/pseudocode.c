_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,ReferenceVolume *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,ReferenceVolume *>::`vftable'; /*0x7a9c18*/
  if ( (a2 & 1) != 0 ) /*0x7a9c1e*/
    FormHeapFree((unsigned int)this); /*0x7a9c21*/
  return this; /*0x7a9c2b*/
}
