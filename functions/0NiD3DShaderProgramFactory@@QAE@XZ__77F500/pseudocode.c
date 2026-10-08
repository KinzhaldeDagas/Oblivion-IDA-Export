// MoonSugarEffect decode: NiD3DShaderProgramFactory constructor. Creates string pointer maps at factory+0x18 for NiD3DVertexShader wrappers and factory+0x1C for NiD3DPixelShader wrappers. Factory maps are lookup/restore bookkeeping, not NiD3DPass ownership.
NiD3DShaderProgramFactory *__thiscall NiD3DShaderProgramFactory::NiD3DShaderProgramFactory(
        NiD3DShaderProgramFactory *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  unsigned int v7; // [esp-8h] [ebp-14h]
  unsigned int v8; // [esp-8h] [ebp-14h]

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x77f50c*/
  *((_DWORD *)this + 1) = 0; /*0x77f512*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x77f515*/
  *(_DWORD *)this = &NiD3DShaderProgramFactory::`vftable'; /*0x77f51b*/
  *((_DWORD *)this + 5) = 0; /*0x77f523*/
  *((_DWORD *)this + 3) = 0; /*0x77f526*/
  *((_DWORD *)this + 4) = 0; /*0x77f529*/
  *((_DWORD *)this + 2) = &NiTPointerList<char *>::`vftable'; /*0x77f52c*/
  v2 = FormHeapAlloc(0x14u); /*0x77f538*/
  if ( v2 ) /*0x77f53f*/
  {
    *(_DWORD *)v2 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DVertexShader *>::`vftable'; /*0x77f552*/
    *(_DWORD *)(v2 + 4) = 0x3B; /*0x77f558*/
    *(_DWORD *)(v2 + 0xC) = 0; /*0x77f55f*/
    v3 = FormHeapAlloc(0xECu); /*0x77f567*/
    v7 = 4 * *(_DWORD *)(v2 + 4); /*0x77f573*/
    *(_DWORD *)(v2 + 8) = v3; /*0x77f576*/
    _memset(v3, 0, v7); /*0x77f579*/
    *(_BYTE *)(v2 + 0x10) = 0; /*0x77f581*/
    *(_DWORD *)v2 = &NiTStringPointerMap<NiD3DVertexShader *>::`vftable'; /*0x77f584*/
  }
  else
  {
    v2 = 0; /*0x77f58c*/
  }
  *((_DWORD *)this + 6) = v2; /*0x77f590*/
  v4 = FormHeapAlloc(0x14u); /*0x77f598*/
  if ( v4 ) /*0x77f59f*/
  {
    *(_DWORD *)v4 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DPixelShader *>::`vftable'; /*0x77f5b2*/
    *(_DWORD *)(v4 + 4) = 0x3B; /*0x77f5b8*/
    *(_DWORD *)(v4 + 0xC) = 0; /*0x77f5bf*/
    v5 = FormHeapAlloc(0xECu); /*0x77f5c7*/
    v8 = 4 * *(_DWORD *)(v4 + 4); /*0x77f5d3*/
    *(_DWORD *)(v4 + 8) = v5; /*0x77f5d6*/
    _memset(v5, 0, v8); /*0x77f5d9*/
    *(_BYTE *)(v4 + 0x10) = 0; /*0x77f5e1*/
    *(_DWORD *)v4 = &NiTStringPointerMap<NiD3DPixelShader *>::`vftable'; /*0x77f5e4*/
    *((_DWORD *)this + 7) = v4; /*0x77f5ea*/
  }
  else
  {
    *((_DWORD *)this + 7) = 0; /*0x77f5f4*/
  }
  return this; /*0x77f5ed*/
}
