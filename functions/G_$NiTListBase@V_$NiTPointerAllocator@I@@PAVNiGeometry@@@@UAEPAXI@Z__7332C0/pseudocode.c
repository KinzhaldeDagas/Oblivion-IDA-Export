_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7332c8*/
  if ( (a2 & 1) != 0 ) /*0x7332ce*/
    FormHeapFree((unsigned int)this); /*0x7332d1*/
  return this; /*0x7332db*/
}
