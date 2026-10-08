void __thiscall NiTStringPointerMap<NiPSysModifier *>::~NiTStringPointerMap<NiPSysModifier *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x749ca3*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiPSysModifier *>,NiPSysModifier *>::`vftable'; /*0x749ca7*/
  if ( !v2 ) /*0x749cad*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x749cb2*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x749cbb*/
      while ( v4 ) /*0x749cc0*/
      {
        v5 = v4[1]; /*0x749cc4*/
        v4 = (_DWORD *)*v4; /*0x749cc7*/
        FormHeapFree(v5); /*0x749cca*/
      }
    }
  }
  *this = &NiTPointerMap<char const *,NiPSysModifier *>::`vftable'; /*0x749ce2*/
  NiTMap_Clear(this); /*0x749ce8*/
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPSysModifier *>::`vftable'; /*0x749cef*/
  NiTMap_Clear(this); /*0x749cf5*/
  FormHeapFree(*(this + 2)); /*0x749cfe*/
}
