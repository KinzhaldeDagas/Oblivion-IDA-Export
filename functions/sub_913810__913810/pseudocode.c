int __thiscall sub_913810(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int result; // eax

  v1 = *(this + 1); /*0x913811*/
  v2 = *(_DWORD *)(v1 + 0x24); /*0x913814*/
  v3 = *(_DWORD *)(v1 + 0x20); /*0x913817*/
  v4 = v1 + 0x1C; /*0x91381a*/
  result = v2 & 0x3FFFFFFF; /*0x91381d*/
  if ( v3 == result ) /*0x913824*/
    result = sub_8A6EE0((const void **)v4, 4); /*0x913829*/
  *(_DWORD *)(*(_DWORD *)v4 + 4 * (*(_DWORD *)(v4 + 4))++) = 0; /*0x913836*/
  return result; /*0x913840*/
}
