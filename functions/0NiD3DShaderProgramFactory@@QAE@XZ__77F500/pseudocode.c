NiD3DShaderProgramFactory *__thiscall NiD3DShaderProgramFactory::NiD3DShaderProgramFactory(
        NiD3DShaderProgramFactory *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v7; // [esp-8h] [ebp-14h]
  int v8; // [esp-8h] [ebp-14h]

  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &NiD3DShaderProgramFactory::`vftable';
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = &NiTPointerList<char *>::`vftable';
  v2 = FormHeapAlloc(0x14u);
  if ( v2 )
  {
    *(_DWORD *)v2 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DVertexShader *>::`vftable';
    *(_DWORD *)(v2 + 4) = 0x3B;
    *(_DWORD *)(v2 + 0xC) = 0;
    v3 = FormHeapAlloc(0xECu);
    v7 = 4 * *(_DWORD *)(v2 + 4);
    *(_DWORD *)(v2 + 8) = v3;
    _memset(v3, 0, v7);
    *(_BYTE *)(v2 + 0x10) = 0;
    *(_DWORD *)v2 = &NiTStringPointerMap<NiD3DVertexShader *>::`vftable';
  }
  else
  {
    v2 = 0;
  }
  *((_DWORD *)this + 6) = v2;
  v4 = FormHeapAlloc(0x14u);
  if ( v4 )
  {
    *(_DWORD *)v4 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DPixelShader *>::`vftable';
    *(_DWORD *)(v4 + 4) = 0x3B;
    *(_DWORD *)(v4 + 0xC) = 0;
    v5 = FormHeapAlloc(0xECu);
    v8 = 4 * *(_DWORD *)(v4 + 4);
    *(_DWORD *)(v4 + 8) = v5;
    _memset(v5, 0, v8);
    *(_BYTE *)(v4 + 0x10) = 0;
    *(_DWORD *)v4 = &NiTStringPointerMap<NiD3DPixelShader *>::`vftable';
    *((_DWORD *)this + 7) = v4;
  }
  else
  {
    *((_DWORD *)this + 7) = 0;
  }
  return this;
}
