unsigned int __cdecl Zlib_inflateEnd(_DWORD *a1)
{
  int v1; // eax
  void (__cdecl *v2)(_DWORD, int); // ecx
  int v3; // eax

  if ( !a1 ) /*0x743977*/
    return 0xFFFFFFFE; /*0x743977*/
  v1 = a1[7]; /*0x743979*/
  if ( !v1 ) /*0x74397e*/
    return 0xFFFFFFFE; /*0x74397e*/
  v2 = (void (__cdecl *)(_DWORD, int))a1[9]; /*0x743980*/
  if ( !v2 ) /*0x743985*/
    return 0xFFFFFFFE; /*0x7439b3*/
  v3 = *(_DWORD *)(v1 + 0x2C); /*0x743987*/
  if ( v3 ) /*0x74398c*/
    v2(a1[0xA], v3); /*0x743993*/
  ((void (__cdecl *)(_DWORD, _DWORD))a1[9])(a1[0xA], a1[7]); /*0x7439a3*/
  a1[7] = 0; /*0x7439a8*/
  return 0; /*0x7439b1*/
}
