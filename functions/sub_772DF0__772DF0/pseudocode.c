_BYTE *sub_772DF0()
{
  unsigned int *v0; // ecx
  _DWORD *v1; // esi
  _BYTE ***v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // ecx
  _BYTE *result; // eax

  v0 = (unsigned int *)dword_B427A8;
  v1 = (_DWORD *)(dword_B427A8 + 8);
  v2 = (_BYTE ***)dword_B427A8;
  if ( !*v1 )
  {
    v3 = v0 + 3;
    sub_7729E0(v0, v0[3]);
    *v3 *= 2;
  }
  v4 = *v2;
  result = **v2;
  *v4 = v4[--*v1];
  if ( !*result )
    *result = 1;
  return result;
}
