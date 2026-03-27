char *__cdecl sub_6BF730(signed int a1, unsigned int size)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  unsigned int *v4; // eax
  char *v5; // esi
  char *v6; // ebp
  char *v7; // esi

  v2 = size;
  v3 = (unsigned __int64)size >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * size;
  v4 = (unsigned int *)FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  if ( v4 )
  {
    v5 = (char *)(v4 + 1);
    *v4 = size;
    ArrayConstructor(v4 + 1, 0x10u, size, (int)sub_7616D0, TESTexture::ClearComponentReferences);
    v6 = v5;
  }
  else
  {
    v6 = 0;
  }
  if ( size )
  {
    v7 = v6;
    do
    {
      sub_6BC1C0(v7, a1);
      v7 += 0x10;
      --v2;
    }
    while ( v2 );
  }
  return v6;
}
