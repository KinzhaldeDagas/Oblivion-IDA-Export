void __thiscall NiTStringPointerMap<ShaderBufferEntry *>::~NiTStringPointerMap<ShaderBufferEntry *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x7dae83*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,ShaderBufferEntry *>,ShaderBufferEntry *>::`vftable'; /*0x7dae87*/
  if ( !v2 ) /*0x7dae8d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x7dae92*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x7dae9b*/
      while ( v4 ) /*0x7daea0*/
      {
        v5 = v4[1]; /*0x7daea4*/
        v4 = (_DWORD *)*v4; /*0x7daea7*/
        FormHeapFree(v5); /*0x7daeaa*/
      }
    }
  }
  NiTPointerMap<char const *,ShaderBufferEntry *>::~NiTPointerMap<char const *,ShaderBufferEntry *>(this); /*0x7daec3*/
}
