void sub_77F680()
{
  _DWORD *v0; // eax
  int v1; // esi
  int v2; // eax
  int v3; // [esp-8h] [ebp-Ch]

  v0 = (_DWORD *)FormHeapAlloc(0x14u);
  v1 = (int)v0;
  if ( v0 )
  {
    v0[1] = 0x25;
    *v0 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DShaderProgramCreator *>::`vftable';
    v0[3] = 0;
    v2 = FormHeapAlloc(0x94u);
    v3 = 4 * *(_DWORD *)(v1 + 4);
    *(_DWORD *)(v1 + 8) = v2;
    _memset(v2, 0, v3);
    *(_BYTE *)(v1 + 0x10) = 1;
    *(_DWORD *)v1 = &NiTStringPointerMap<NiD3DShaderProgramCreator *>::`vftable';
    dword_B428AC = v1;
  }
  else
  {
    dword_B428AC = 0;
  }
}
