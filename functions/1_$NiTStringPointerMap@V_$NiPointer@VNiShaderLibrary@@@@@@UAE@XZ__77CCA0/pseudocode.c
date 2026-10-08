void __thiscall NiTStringPointerMap<NiPointer<NiShaderLibrary>>::~NiTStringPointerMap<NiPointer<NiShaderLibrary>>(
        _DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x77cca3*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>,NiPointer<NiShaderLibrary>>::`vftable'; /*0x77cca7*/
  if ( !v2 ) /*0x77ccad*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x77ccb2*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x77ccbb*/
      while ( v4 ) /*0x77ccc0*/
      {
        v5 = v4[1]; /*0x77ccc4*/
        v4 = (_DWORD *)*v4; /*0x77ccc7*/
        FormHeapFree(v5); /*0x77ccca*/
      }
    }
  }
  *this = &NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>::`vftable'; /*0x77cce2*/
  NiTMap_Clear(this); /*0x77cce8*/
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiShaderLibrary>>::`vftable'; /*0x77ccef*/
  NiTMap_Clear(this); /*0x77ccf5*/
  FormHeapFree(*(this + 2)); /*0x77ccfe*/
}
