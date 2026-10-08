_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,char *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,char *>::`vftable'; /*0x77eb98*/
  if ( (a2 & 1) != 0 ) /*0x77eb9e*/
    FormHeapFree((unsigned int)this); /*0x77eba1*/
  return this; /*0x77ebab*/
}
