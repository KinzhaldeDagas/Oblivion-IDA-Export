NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *>::`vftable'; /*0x46b033*/
  NiTMap_Clear(this); /*0x46b039*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x46b042*/
  if ( (a2 & 1) != 0 ) /*0x46b04f*/
    FormHeapFree((unsigned int)this); /*0x46b052*/
  return this; /*0x46b05c*/
}
