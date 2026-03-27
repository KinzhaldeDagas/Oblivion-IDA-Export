NiD3DShaderFactory *__thiscall NiD3DShaderFactory::NiD3DShaderFactory(NiD3DShaderFactory *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // [esp-8h] [ebp-14h]
  int v10; // [esp-8h] [ebp-14h]
  int v11; // [esp-8h] [ebp-14h]

  NiShaderFactory::NiShaderFactory(this);
  *(_DWORD *)this = &NiD3DShaderFactory::`vftable';
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 9) = &NiTMapBase<DFALL<NiD3DGlobalConstantEntry *>,char const *,NiD3DGlobalConstantEntry *>::`vftable';
  *((_DWORD *)this + 0xA) = 0x25;
  *((_DWORD *)this + 0xC) = 0;
  v2 = FormHeapAlloc(0x94u);
  v9 = 4 * *((_DWORD *)this + 0xA);
  *((_DWORD *)this + 0xB) = v2;
  _memset(v2, 0, v9);
  *((_BYTE *)this + 0x34) = 1;
  *((_DWORD *)this + 9) = &NiTStringMap<NiD3DGlobalConstantEntry *>::`vftable';
  v3 = (_DWORD *)FormHeapAlloc(0x14u);
  v4 = v3;
  if ( v3 )
  {
    v3[1] = 0x3B;
    *v3 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiShader *>::`vftable';
    v3[3] = 0;
    v5 = FormHeapAlloc(0xECu);
    v10 = 4 * v4[1];
    v4[2] = v5;
    _memset(v5, 0, v10);
    *((_BYTE *)v4 + 0x10) = 1;
    *v4 = &NiTStringPointerMap<NiShader *>::`vftable';
  }
  else
  {
    v4 = 0;
  }
  *((_DWORD *)this + 6) = v4;
  v6 = FormHeapAlloc(0x14u);
  if ( v6 )
  {
    *(_DWORD *)v6 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiShaderLibrary>>::`vftable';
    *(_DWORD *)(v6 + 4) = 0x25;
    *(_DWORD *)(v6 + 0xC) = 0;
    v7 = FormHeapAlloc(0x94u);
    v11 = 4 * *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v6 + 8) = v7;
    _memset(v7, 0, v11);
    *(_BYTE *)(v6 + 0x10) = 0;
    *(_DWORD *)v6 = &NiTStringPointerMap<NiPointer<NiShaderLibrary>>::`vftable';
    *((_DWORD *)this + 8) = v6;
  }
  else
  {
    *((_DWORD *)this + 8) = 0;
  }
  return this;
}
