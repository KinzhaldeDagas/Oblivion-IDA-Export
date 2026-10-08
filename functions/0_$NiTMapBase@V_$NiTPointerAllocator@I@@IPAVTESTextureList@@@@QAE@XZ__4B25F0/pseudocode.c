NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *>::`vftable'; /*0x4b25f3*/
  NiTMap_Clear(this); /*0x4b25f9*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x4b2602*/
  if ( (a2 & 1) != 0 ) /*0x4b260f*/
    FormHeapFree((unsigned int)this); /*0x4b2612*/
  return this; /*0x4b261c*/
}
