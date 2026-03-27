int __thiscall sub_8A6550(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // edx

  v2 = this + 0x2B;
  v3 = *(this + 0x2C);
  result = 0;
  if ( v3 <= 0 )
    goto LABEL_5;
  v5 = (_DWORD *)*v2;
  while ( *v5 )
  {
    ++result;
    ++v5;
    if ( result >= v3 )
      goto LABEL_5;
  }
  if ( result < 0 )
  {
LABEL_5:
    if ( v2[1] == (v2[2] & 0x3FFFFFFF) )
      sub_8A6EE0((int)v2, 4);
    *(_DWORD *)(*v2 + 4 * v2[1]) = a2;
    result = v2[1] + 1;
    v2[1] = result;
  }
  else
  {
    *(_DWORD *)(*v2 + 4 * result) = a2;
  }
  return result;
}
