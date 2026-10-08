void __thiscall NiTStringPointerMap<NiD3DPixelShader *>::~NiTStringPointerMap<NiD3DPixelShader *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x77f1b3*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiD3DPixelShader *>,NiD3DPixelShader *>::`vftable'; /*0x77f1b7*/
  if ( !v2 ) /*0x77f1bd*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x77f1c2*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x77f1cb*/
      while ( v4 ) /*0x77f1d0*/
      {
        v5 = v4[1]; /*0x77f1d4*/
        v4 = (_DWORD *)*v4; /*0x77f1d7*/
        FormHeapFree(v5); /*0x77f1da*/
      }
    }
  }
  *this = &NiTPointerMap<char const *,NiD3DPixelShader *>::`vftable'; /*0x77f1f2*/
  NiTMap_Clear(this); /*0x77f1f8*/
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DPixelShader *>::`vftable'; /*0x77f1ff*/
  NiTMap_Clear(this); /*0x77f205*/
  FormHeapFree(*(this + 2)); /*0x77f20e*/
}
