_BYTE *sub_7735E0()
{
  unsigned int *v0; // ecx
  _DWORD *v1; // esi
  _BYTE ***v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // ecx
  _BYTE *result; // eax

  v0 = (unsigned int *)dword_B42838;
  v1 = (_DWORD *)(dword_B42838 + 8);
  v2 = (_BYTE ***)dword_B42838;
  if ( !*v1 )
  {
    v3 = v0 + 3;
    sub_7734E0(v0, v0[3]);
    *v3 *= 2;
  }
  v4 = *v2;
  result = **v2;
  *v4 = v4[--*v1];
  if ( !*result )
    *result = 1;
  return result;
}
