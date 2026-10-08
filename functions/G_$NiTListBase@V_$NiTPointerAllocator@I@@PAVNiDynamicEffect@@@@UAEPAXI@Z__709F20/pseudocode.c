_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiDynamicEffect *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiDynamicEffect *>::`vftable'; /*0x709f28*/
  if ( (a2 & 1) != 0 ) /*0x709f2e*/
    FormHeapFree((unsigned int)this); /*0x709f31*/
  return this; /*0x709f3b*/
}
