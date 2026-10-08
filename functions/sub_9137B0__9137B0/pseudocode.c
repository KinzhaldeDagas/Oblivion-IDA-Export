_DWORD *__thiscall sub_9137B0(_DWORD *this)
{
  int v2; // esi
  _DWORD *result; // eax
  int v4; // edx
  int v5; // ecx

  v2 = *(this + 1) + 0x1C; /*0x9137bb*/
  --*(this + 2); /*0x9137be*/
  if ( *(_DWORD *)(v2 + 4) == (*(_DWORD *)(v2 + 8) & 0x3FFFFFFF) ) /*0x9137ce*/
    sub_8A6EE0((const void **)v2, 4); /*0x9137d3*/
  *(_DWORD *)(*(_DWORD *)v2 + 4 * (*(_DWORD *)(v2 + 4))++) = 0x17; /*0x9137e0*/
  result = (_DWORD *)*(this + 1); /*0x9137ea*/
  v4 = result[1] + 0x30; /*0x9137f9*/
  v5 = result[3] + 1; /*0x9137fc*/
  result[2] += 4; /*0x9137fe*/
  result[1] = v4; /*0x913801*/
  result[3] = v5; /*0x913804*/
  return result; /*0x9137fd*/
}
