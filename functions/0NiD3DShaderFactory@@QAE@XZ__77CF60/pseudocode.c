NiD3DShaderFactory *__thiscall NiD3DShaderFactory::NiD3DShaderFactory(NiD3DShaderFactory *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned int v9; // [esp-8h] [ebp-14h]
  unsigned int v10; // [esp-8h] [ebp-14h]
  unsigned int v11; // [esp-8h] [ebp-14h]

  NiShaderFactory::NiShaderFactory(this); /*0x77cf65*/
  *(_DWORD *)this = &NiD3DShaderFactory::`vftable'; /*0x77cf7d*/
  *((_DWORD *)this + 5) = 0; /*0x77cf83*/
  *((_DWORD *)this + 9) = &NiTMapBase<DFALL<NiD3DGlobalConstantEntry *>,char const *,NiD3DGlobalConstantEntry *>::`vftable'; /*0x77cf86*/
  *((_DWORD *)this + 0xA) = 0x25; /*0x77cf8d*/
  *((_DWORD *)this + 0xC) = 0; /*0x77cf94*/
  v2 = FormHeapAlloc(0x94u); /*0x77cf9c*/
  v9 = 4 * *((_DWORD *)this + 0xA); /*0x77cfa8*/
  *((_DWORD *)this + 0xB) = v2; /*0x77cfab*/
  _memset(v2, 0, v9); /*0x77cfae*/
  *((_BYTE *)this + 0x34) = 1; /*0x77cfb5*/
  *((_DWORD *)this + 9) = &NiTStringMap<NiD3DGlobalConstantEntry *>::`vftable'; /*0x77cfb9*/
  v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x77cfc0*/
  v4 = v3; /*0x77cfc5*/
  if ( v3 ) /*0x77cfcc*/
  {
    v3[1] = 0x3B; /*0x77cfd5*/
    *v3 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiShader *>::`vftable'; /*0x77cfe2*/
    v3[3] = 0; /*0x77cfe8*/
    v5 = FormHeapAlloc(0xECu); /*0x77cff0*/
    v10 = 4 * v4[1]; /*0x77cffc*/
    v4[2] = v5; /*0x77cfff*/
    _memset(v5, 0, v10); /*0x77d002*/
    *((_BYTE *)v4 + 0x10) = 1; /*0x77d00a*/
    *v4 = &NiTStringPointerMap<NiShader *>::`vftable'; /*0x77d00e*/
  }
  else
  {
    v4 = 0; /*0x77d016*/
  }
  *((_DWORD *)this + 6) = v4; /*0x77d01a*/
  v6 = FormHeapAlloc(0x14u); /*0x77d022*/
  if ( v6 ) /*0x77d029*/
  {
    *(_DWORD *)v6 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiShaderLibrary>>::`vftable'; /*0x77d03c*/
    *(_DWORD *)(v6 + 4) = 0x25; /*0x77d042*/
    *(_DWORD *)(v6 + 0xC) = 0; /*0x77d049*/
    v7 = FormHeapAlloc(0x94u); /*0x77d051*/
    v11 = 4 * *(_DWORD *)(v6 + 4); /*0x77d05d*/
    *(_DWORD *)(v6 + 8) = v7; /*0x77d060*/
    _memset(v7, 0, v11); /*0x77d063*/
    *(_BYTE *)(v6 + 0x10) = 0; /*0x77d06b*/
    *(_DWORD *)v6 = &NiTStringPointerMap<NiPointer<NiShaderLibrary>>::`vftable'; /*0x77d06e*/
    *((_DWORD *)this + 8) = v6; /*0x77d074*/
  }
  else
  {
    *((_DWORD *)this + 8) = 0; /*0x77d07e*/
  }
  return this; /*0x77d077*/
}
