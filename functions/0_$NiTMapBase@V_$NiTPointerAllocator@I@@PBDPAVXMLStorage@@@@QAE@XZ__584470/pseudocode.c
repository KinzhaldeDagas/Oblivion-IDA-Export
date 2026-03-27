NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *>::NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
