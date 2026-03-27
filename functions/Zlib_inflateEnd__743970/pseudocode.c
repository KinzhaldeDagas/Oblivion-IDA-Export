unsigned int __cdecl Zlib_inflateEnd(_DWORD *a1)
{
  int v1; // eax
  void (__cdecl *v2)(_DWORD, int); // ecx
  int v3; // eax

  if ( !a1 )
    return 0xFFFFFFFE;
  v1 = a1[7];
  if ( !v1 )
    return 0xFFFFFFFE;
  v2 = (void (__cdecl *)(_DWORD, int))a1[9];
  if ( !v2 )
    return 0xFFFFFFFE;
  v3 = *(_DWORD *)(v1 + 0x2C);
  if ( v3 )
    v2(a1[0xA], v3);
  ((void (__cdecl *)(_DWORD, _DWORD))a1[9])(a1[0xA], a1[7]);
  a1[7] = 0;
  return 0;
}
