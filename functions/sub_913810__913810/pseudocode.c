int __thiscall sub_913810(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int result; // eax

  v1 = *(this + 1);
  v2 = *(_DWORD *)(v1 + 0x24);
  v3 = *(_DWORD *)(v1 + 0x20);
  v4 = v1 + 0x1C;
  result = v2 & 0x3FFFFFFF;
  if ( v3 == result )
    result = sub_8A6EE0((const void **)v4, 4);
  *(_DWORD *)(*(_DWORD *)v4 + 4 * (*(_DWORD *)(v4 + 4))++) = 0;
  return result;
}
