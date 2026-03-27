_DWORD *__cdecl sub_6BCDA0(signed int a1, unsigned int size)
{
  unsigned int v2; // ecx
  unsigned int *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // ebp
  unsigned int v6; // ebx
  char *v7; // esi

  v2 = (unsigned __int64)size >> 0x1A != 0 ? 0xFFFFFFFF : size << 6;
  v3 = (unsigned int *)FormHeapAlloc(__CFADD__(v2, 4) ? 0xFFFFFFFF : v2 + 4);
  if ( v3 )
  {
    v4 = v3 + 1;
    *v3 = size;
    ArrayConstructor(v3 + 1, 0x40u, size, (int)sub_7616D0, TESTexture::ClearComponentReferences);
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  if ( size )
  {
    v6 = size;
    v7 = (char *)(v5 + 7);
    do
    {
      sub_6BC1C0(v7 + 0xFFFFFFE4, a1);
      sub_709430(v7 + 0xFFFFFFF4, a1);
      sub_709430(v7, a1);
      v7 += 0x40;
      --v6;
    }
    while ( v6 );
  }
  return v5;
}
