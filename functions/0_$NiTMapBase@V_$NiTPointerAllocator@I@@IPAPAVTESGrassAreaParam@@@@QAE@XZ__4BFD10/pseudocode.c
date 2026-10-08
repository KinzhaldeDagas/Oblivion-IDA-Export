NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *>::`vftable'; /*0x4bfd13*/
  NiTMap_Clear(this); /*0x4bfd19*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x4bfd22*/
  if ( (a2 & 1) != 0 ) /*0x4bfd2f*/
    FormHeapFree((unsigned int)this); /*0x4bfd32*/
  return this; /*0x4bfd3c*/
}
