void __thiscall NiTStringPointerMap<NiShader *>::~NiTStringPointerMap<NiShader *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x77cc33*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiShader *>,NiShader *>::`vftable'; /*0x77cc37*/
  if ( !v2 ) /*0x77cc3d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x77cc42*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x77cc4b*/
      while ( v4 ) /*0x77cc50*/
      {
        v5 = v4[1]; /*0x77cc54*/
        v4 = (_DWORD *)*v4; /*0x77cc57*/
        FormHeapFree(v5); /*0x77cc5a*/
      }
    }
  }
  *this = &NiTPointerMap<char const *,NiShader *>::`vftable'; /*0x77cc72*/
  NiTMap_Clear(this); /*0x77cc78*/
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiShader *>::`vftable'; /*0x77cc7f*/
  NiTMap_Clear(this); /*0x77cc85*/
  FormHeapFree(*(this + 2)); /*0x77cc8e*/
}
