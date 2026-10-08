NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *>::NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *>::`vftable'; /*0x5c0cc8*/
  if ( (a2 & 1) != 0 ) /*0x5c0cce*/
    FormHeapFree((unsigned int)this); /*0x5c0cd1*/
  return this; /*0x5c0cdb*/
}
