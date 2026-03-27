_DWORD *__thiscall sub_9137B0(_DWORD *this)
{
  int v2; // esi
  _DWORD *result; // eax
  int v4; // edx
  int v5; // ecx

  v2 = *(this + 1) + 0x1C;
  --*(this + 2);
  if ( *(_DWORD *)(v2 + 4) == (*(_DWORD *)(v2 + 8) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v2, 4);
  *(_DWORD *)(*(_DWORD *)v2 + 4 * (*(_DWORD *)(v2 + 4))++) = 0x17;
  result = (_DWORD *)*(this + 1);
  v4 = result[1] + 0x30;
  v5 = result[3] + 1;
  result[2] += 4;
  result[1] = v4;
  result[3] = v5;
  return result;
}
