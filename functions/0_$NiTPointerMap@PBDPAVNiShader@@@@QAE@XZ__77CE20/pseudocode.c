NiTPointerMap<char const *,NiShader *> *__thiscall NiTPointerMap<char const *,NiShader *>::NiTPointerMap<char const *,NiShader *>(
        NiTPointerMap<char const *,NiShader *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerMap<char const *,NiShader *>::`vftable';
  NiTMap_Clear(this);
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiShader *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
