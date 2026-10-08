void __thiscall NiTStringPointerMap<NiAVObject *>::~NiTStringPointerMap<NiAVObject *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x6c4f33*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiAVObject *>,NiAVObject *>::`vftable'; /*0x6c4f37*/
  if ( !v2 ) /*0x6c4f3d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x6c4f42*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x6c4f4b*/
      while ( v4 ) /*0x6c4f50*/
      {
        v5 = v4[1]; /*0x6c4f54*/
        v4 = (_DWORD *)*v4; /*0x6c4f57*/
        FormHeapFree(v5); /*0x6c4f5a*/
      }
    }
  }
  NiTPointerMap<char const *,NiAVObject *>::~NiTPointerMap<char const *,NiAVObject *>(this); /*0x6c4f73*/
}
