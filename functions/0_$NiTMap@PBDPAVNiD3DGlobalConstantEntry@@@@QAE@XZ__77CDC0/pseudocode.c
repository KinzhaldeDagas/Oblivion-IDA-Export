NiTMap<char const *,NiD3DGlobalConstantEntry *> *__thiscall NiTMap<char const *,NiD3DGlobalConstantEntry *>::NiTMap<char const *,NiD3DGlobalConstantEntry *>(
        NiTMap<char const *,NiD3DGlobalConstantEntry *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMap<char const *,NiD3DGlobalConstantEntry *>::`vftable';
  NiTMap_Clear(this);
  *(_DWORD *)this = &NiTMapBase<DFALL<NiD3DGlobalConstantEntry *>,char const *,NiD3DGlobalConstantEntry *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
