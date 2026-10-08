_DWORD *__cdecl sub_731BF0(_DWORD **a1, int a2)
{
  int v2; // ecx
  _DWORD *result; // eax
  int v4; // edx
  _DWORD *v5; // esi
  _DWORD *v6; // edi

  v2 = *(_DWORD *)(a2 + 0xB0); /*0x731bf5*/
  result = *a1; /*0x731c00*/
  if ( *a1 && (v4 = *(_DWORD *)(result[1] + 0xB0), v2 >= v4) ) /*0x731c11*/
  {
    if ( v2 != v4 ) /*0x731c13*/
    {
      v5 = (_DWORD *)*result; /*0x731c15*/
      v6 = *a1; /*0x731c1a*/
      if ( !*result ) /*0x731c15*/
        goto LABEL_9; /*0x731c15*/
      while ( 1 ) /*0x731c20*/
      {
        result = (_DWORD *)v5[1]; /*0x731c20*/
        if ( v2 <= result[0x2C] ) /*0x731c29*/
          break; /*0x731c29*/
        v6 = v5; /*0x731c2b*/
        v5 = (_DWORD *)*v5; /*0x731c2d*/
        if ( !v5 ) /*0x731c31*/
          goto LABEL_9; /*0x731c31*/
      }
      if ( v2 != result[0x2C] ) /*0x731c3d*/
      {
LABEL_9:
        result = (_DWORD *)FormHeapAlloc(8u); /*0x731c3f*/
        result[1] = a2; /*0x731c46*/
        *result = v5; /*0x731c49*/
        *v6 = result; /*0x731c4e*/
      }
    }
  }
  else
  {
    result = (_DWORD *)FormHeapAlloc(8u); /*0x731c56*/
    result[1] = a2; /*0x731c5b*/
    *result = *a1; /*0x731c63*/
    *a1 = result; /*0x731c65*/
  }
  return result; /*0x731c51*/
}
