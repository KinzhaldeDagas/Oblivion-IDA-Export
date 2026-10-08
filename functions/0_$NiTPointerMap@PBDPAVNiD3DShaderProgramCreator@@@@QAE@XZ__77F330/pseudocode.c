NiTPointerMap<char const *,NiD3DShaderProgramCreator *> *__thiscall NiTPointerMap<char const *,NiD3DShaderProgramCreator *>::NiTPointerMap<char const *,NiD3DShaderProgramCreator *>(
        NiTPointerMap<char const *,NiD3DShaderProgramCreator *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerMap<char const *,NiD3DShaderProgramCreator *>::`vftable'; /*0x77f333*/
  NiTMap_Clear(this); /*0x77f339*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DShaderProgramCreator *>::`vftable'; /*0x77f340*/
  NiTMap_Clear(this); /*0x77f346*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x77f34f*/
  if ( (a2 & 1) != 0 ) /*0x77f35c*/
    FormHeapFree((unsigned int)this); /*0x77f35f*/
  return this; /*0x77f369*/
}
