_DWORD *__thiscall BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7a9b98*/
  if ( (a2 & 1) != 0 ) /*0x7a9b9e*/
    FormHeapFree((unsigned int)this); /*0x7a9ba1*/
  return this; /*0x7a9bab*/
}
