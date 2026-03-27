_DWORD *__cdecl sub_6BF4D0(unsigned int size)
{
  unsigned int v1; // ecx
  unsigned int *v2; // eax
  _DWORD *v3; // esi

  v1 = (unsigned __int64)size >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * size;
  v2 = (unsigned int *)FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 )
    return 0;
  v3 = v2 + 1;
  *v2 = size;
  ArrayConstructor(v2 + 1, 0x10u, size, (int)sub_7616D0, TESTexture::ClearComponentReferences);
  return v3;
}
