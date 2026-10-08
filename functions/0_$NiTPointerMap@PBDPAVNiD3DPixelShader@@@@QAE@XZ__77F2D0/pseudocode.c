NiTPointerMap<char const *,NiD3DPixelShader *> *__thiscall NiTPointerMap<char const *,NiD3DPixelShader *>::NiTPointerMap<char const *,NiD3DPixelShader *>(
        NiTPointerMap<char const *,NiD3DPixelShader *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerMap<char const *,NiD3DPixelShader *>::`vftable'; /*0x77f2d3*/
  NiTMap_Clear(this); /*0x77f2d9*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DPixelShader *>::`vftable'; /*0x77f2e0*/
  NiTMap_Clear(this); /*0x77f2e6*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x77f2ef*/
  if ( (a2 & 1) != 0 ) /*0x77f2fc*/
    FormHeapFree((unsigned int)this); /*0x77f2ff*/
  return this; /*0x77f309*/
}
