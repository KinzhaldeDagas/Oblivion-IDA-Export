void __thiscall NiTStringPointerMap<NiD3DVertexShader *>::~NiTStringPointerMap<NiD3DVertexShader *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x77f143*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiD3DVertexShader *>,NiD3DVertexShader *>::`vftable'; /*0x77f147*/
  if ( !v2 ) /*0x77f14d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x77f152*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x77f15b*/
      while ( v4 ) /*0x77f160*/
      {
        v5 = v4[1]; /*0x77f164*/
        v4 = (_DWORD *)*v4; /*0x77f167*/
        FormHeapFree(v5); /*0x77f16a*/
      }
    }
  }
  *this = &NiTPointerMap<char const *,NiD3DVertexShader *>::`vftable'; /*0x77f182*/
  NiTMap_Clear(this); /*0x77f188*/
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DVertexShader *>::`vftable'; /*0x77f18f*/
  NiTMap_Clear(this); /*0x77f195*/
  FormHeapFree(*(this + 2)); /*0x77f19e*/
}
