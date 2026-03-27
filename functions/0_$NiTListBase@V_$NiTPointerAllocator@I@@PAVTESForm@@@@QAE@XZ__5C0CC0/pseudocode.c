NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *>::NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
