// positive sp value has been detected, the output may be wrong!
_DWORD *__userpurge sub_785850@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, _DWORD *a4, int a5, int a6, int a7)
{
  unsigned int v7; // edi

  v7 = a1 + 0x18 * a2;
  if ( v7 > *(_DWORD *)(a3 + 8) || v7 < *(_DWORD *)(a3 + 4) )
    _invalid_parameter_noinfo();
  a4[1] = v7;
  *a4 = a3;
  return a4;
}
