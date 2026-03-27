NiTPointerMap<char const *,NiD3DShaderProgramCreator *> *__thiscall NiTPointerMap<char const *,NiD3DShaderProgramCreator *>::NiTPointerMap<char const *,NiD3DShaderProgramCreator *>(
        NiTPointerMap<char const *,NiD3DShaderProgramCreator *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerMap<char const *,NiD3DShaderProgramCreator *>::`vftable';
  NiTMap_Clear(this);
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DShaderProgramCreator *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
