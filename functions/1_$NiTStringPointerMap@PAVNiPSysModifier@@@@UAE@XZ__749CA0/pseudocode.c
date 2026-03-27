void __thiscall NiTStringPointerMap<NiPSysModifier *>::~NiTStringPointerMap<NiPSysModifier *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0;
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiPSysModifier *>,NiPSysModifier *>::`vftable';
  if ( !v2 )
  {
    for ( i = 0; i < *(this + 1); ++i )
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i);
      while ( v4 )
      {
        v5 = v4[1];
        v4 = (_DWORD *)*v4;
        FormHeapFree(v5);
      }
    }
  }
  *this = &NiTPointerMap<char const *,NiPSysModifier *>::`vftable';
  NiTMap_Clear(this);
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPSysModifier *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
