_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiLight *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiLight *>::`vftable'; /*0x7762b8*/
  if ( (a2 & 1) != 0 ) /*0x7762be*/
    FormHeapFree((unsigned int)this); /*0x7762c1*/
  return this; /*0x7762cb*/
}
