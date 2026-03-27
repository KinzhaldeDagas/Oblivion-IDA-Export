NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESTextureList *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
