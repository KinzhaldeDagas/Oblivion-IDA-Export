int sub_714710()
{
  _DWORD *v0; // eax
  int v1; // esi
  int v2; // eax
  int result; // eax
  int v4; // [esp-8h] [ebp-28h]

  v0 = (_DWORD *)FormHeapAlloc(0x14u);
  v1 = (int)v0;
  if ( v0 )
  {
    v0[1] = 0x3B;
    *v0 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiObject * (__cdecl *)(void)>::`vftable';
    v0[3] = 0;
    v2 = FormHeapAlloc(0xECu);
    v4 = 4 * *(_DWORD *)(v1 + 4);
    *(_DWORD *)(v1 + 8) = v2;
    _memset(v2, 0, v4);
    *(_BYTE *)(v1 + 0x10) = 0;
    *(_DWORD *)v1 = &NiTStringPointerMap<NiObject * (__cdecl *)(void)>::`vftable';
  }
  else
  {
    v1 = 0;
  }
  dword_B3FB80 = v1;
  result = FormHeapAlloc(0x10u);
  if ( result )
  {
    *(_DWORD *)result = &NiTArray<void (__cdecl *)(NiStream &,NiObject *)>::`vftable';
    *(_WORD *)(result + 8) = 0;
    *(_WORD *)(result + 0xE) = 3;
    *(_WORD *)(result + 0xA) = 0;
    *(_WORD *)(result + 0xC) = 0;
    *(_DWORD *)(result + 4) = 0;
    dword_B3FB84 = result;
  }
  else
  {
    dword_B3FB84 = 0;
  }
  return result;
}
