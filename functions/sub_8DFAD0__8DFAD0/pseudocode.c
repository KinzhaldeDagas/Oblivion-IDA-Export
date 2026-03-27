_DWORD *__thiscall sub_8DFAD0(_DWORD *this, _DWORD *a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  int v5; // esi
  int v6; // edi
  int v7; // esi
  int v8; // ecx
  _DWORD *v9; // edx
  _DWORD *result; // eax

  v2 = *(this + 2);
  v3 = *a2 + *(char *)(*a2 + 5);
  v4 = a2[1] + *(char *)(a2[1] + 5);
  v5 = v3 + *(_DWORD *)(v3 + 0x10);
  v6 = v4 + *(_DWORD *)(v4 + 0x10);
  if ( !*(_BYTE *)(v2 + 0x44)
    || *(_BYTE *)(v5 + 0x91)
    || *(_BYTE *)(v6 + 0x91)
    || *(_DWORD *)(v5 + 0x54) == *(_DWORD *)(v6 + 0x54) )
  {
    result = (_DWORD *)sub_8E66D0(v3, a2[1] + *(char *)(a2[1] + 5));
    if ( result )
      return (_DWORD *)sub_8E7920(result);
  }
  else
  {
    v7 = v2 + 0x6C;
    if ( *(_DWORD *)(v2 + 0x70) == (*(_DWORD *)(v2 + 0x74) & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)v7, 8);
    v8 = *(_DWORD *)(v7 + 4);
    v9 = *(_DWORD **)v7;
    v9[2 * v8] = *a2;
    v9[2 * v8 + 1] = a2[1];
    result = (_DWORD *)(*(_DWORD *)(v7 + 4) + 1);
    *(_DWORD *)(v7 + 4) = result;
  }
  return result;
}
