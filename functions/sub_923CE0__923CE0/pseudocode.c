int __cdecl sub_923CE0(int *a1, unsigned int a2, int a3)
{
  int result; // eax
  unsigned int v4; // edi
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // ebx

  result = a1[0x11]; /*0x923cef*/
  v4 = a2; /*0x923cf6*/
  if ( result == a1[3] ) /*0x923d00*/
  {
    *(_BYTE *)result = 1; /*0x923d05*/
    *(_OWORD *)(result + 0x30) = 0; /*0x923d08*/
    *(_OWORD *)(result + 0x10) = 0; /*0x923d0c*/
    *(_OWORD *)(result + 0x20) = 0; /*0x923d10*/
    *(_OWORD *)(result + 0x40) = 0; /*0x923d14*/
    *(_OWORD *)(result + 0x50) = 0; /*0x923d18*/
    *(_OWORD *)(result + 0x60) = 0; /*0x923d1c*/
    *(_OWORD *)(result + 0x70) = 0; /*0x923d20*/
    result += 0x80; /*0x923d24*/
    a1[0x11] = result; /*0x923d29*/
  }
  if ( a2 < a2 + 4 * a3 ) /*0x923d2e*/
  {
    do /*0x923d59*/
    {
      v5 = *(_DWORD **)(*(_DWORD *)v4 + 0x50); /*0x923d32*/
      v6 = result - a1[3]; /*0x923d3a*/
      v7 = *a1; /*0x923d3f*/
      if ( v5[2] != v6 ) /*0x923d41*/
        v5[2] = v6; /*0x923d43*/
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*v5 + 0x14))(v5, v7, result); /*0x923d4a*/
      v4 += 4; /*0x923d51*/
      a1[0x11] = result; /*0x923d56*/
    }
    while ( v4 < a2 + 4 * a3 ); /*0x923d59*/
  }
  *(_BYTE *)result = 2; /*0x923d5d*/
  return result; /*0x923d5b*/
}
