_DWORD *__cdecl sub_6BE770(unsigned int size)
{
  unsigned int v1; // ecx
  unsigned int *v2; // eax
  _DWORD *v3; // esi

  v1 = (0x48 * (unsigned __int64)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x48 * size;
  v2 = (unsigned int *)FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 )
    return 0;
  v3 = v2 + 1;
  *v2 = size;
  ArrayConstructor(v2 + 1, 0x48u, size, (int)sub_6BE430, TESTexture::ClearComponentReferences);
  return v3;
}
