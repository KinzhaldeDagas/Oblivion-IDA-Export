NiTPointerMap<char const *,NiD3DVertexShader *> *__thiscall NiTPointerMap<char const *,NiD3DVertexShader *>::NiTPointerMap<char const *,NiD3DVertexShader *>(
        NiTPointerMap<char const *,NiD3DVertexShader *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerMap<char const *,NiD3DVertexShader *>::`vftable'; /*0x77f293*/
  NiTMap_Clear(this); /*0x77f299*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DVertexShader *>::`vftable'; /*0x77f2a0*/
  NiTMap_Clear(this); /*0x77f2a6*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x77f2af*/
  if ( (a2 & 1) != 0 ) /*0x77f2bc*/
    FormHeapFree((unsigned int)this); /*0x77f2bf*/
  return this; /*0x77f2c9*/
}
