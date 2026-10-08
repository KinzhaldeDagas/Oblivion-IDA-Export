void __thiscall NiTStringPointerMap<NiD3DShaderProgramCreator *>::~NiTStringPointerMap<NiD3DShaderProgramCreator *>(
        _DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x77f223*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiD3DShaderProgramCreator *>,NiD3DShaderProgramCreator *>::`vftable'; /*0x77f227*/
  if ( !v2 ) /*0x77f22d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x77f232*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x77f23b*/
      while ( v4 ) /*0x77f240*/
      {
        v5 = v4[1]; /*0x77f244*/
        v4 = (_DWORD *)*v4; /*0x77f247*/
        FormHeapFree(v5); /*0x77f24a*/
      }
    }
  }
  *this = &NiTPointerMap<char const *,NiD3DShaderProgramCreator *>::`vftable'; /*0x77f262*/
  NiTMap_Clear(this); /*0x77f268*/
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DShaderProgramCreator *>::`vftable'; /*0x77f26f*/
  NiTMap_Clear(this); /*0x77f275*/
  FormHeapFree(*(this + 2)); /*0x77f27e*/
}
