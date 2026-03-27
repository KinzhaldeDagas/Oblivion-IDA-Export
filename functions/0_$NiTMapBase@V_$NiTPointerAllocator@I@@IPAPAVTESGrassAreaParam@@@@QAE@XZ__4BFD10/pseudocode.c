NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
