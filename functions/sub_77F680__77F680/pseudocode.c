void sub_77F680()
{
  _DWORD *v0; // eax
  int v1; // esi
  int v2; // eax
  unsigned int v3; // [esp-8h] [ebp-Ch]

  v0 = (_DWORD *)FormHeapAlloc(0x14u); /*0x77f683*/
  v1 = (int)v0; /*0x77f688*/
  if ( v0 ) /*0x77f68f*/
  {
    v0[1] = 0x25; /*0x77f698*/
    *v0 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DShaderProgramCreator *>::`vftable'; /*0x77f6a5*/
    v0[3] = 0; /*0x77f6ab*/
    v2 = FormHeapAlloc(0x94u); /*0x77f6b7*/
    v3 = 4 * *(_DWORD *)(v1 + 4); /*0x77f6c3*/
    *(_DWORD *)(v1 + 8) = v2; /*0x77f6c7*/
    _memset(v2, 0, v3); /*0x77f6ca*/
    *(_BYTE *)(v1 + 0x10) = 1; /*0x77f6cf*/
    *(_DWORD *)v1 = &NiTStringPointerMap<NiD3DShaderProgramCreator *>::`vftable'; /*0x77f6d3*/
    unk_B428AC = v1; /*0x77f6dc*/
  }
  else
  {
    unk_B428AC = 0; /*0x77f6e4*/
  }
}
