_DWORD *__cdecl sub_731BF0(_DWORD **a1, int a2)
{
  int v2; // ecx
  _DWORD *result; // eax
  int v4; // edx
  _DWORD *v5; // esi
  _DWORD *v6; // edi

  v2 = *(_DWORD *)(a2 + 0xB0);
  result = *a1;
  if ( *a1 && (v4 = *(_DWORD *)(result[1] + 0xB0), v2 >= v4) )
  {
    if ( v2 != v4 )
    {
      v5 = (_DWORD *)*result;
      v6 = *a1;
      if ( !*result )
        goto LABEL_9;
      while ( 1 )
      {
        result = (_DWORD *)v5[1];
        if ( v2 <= result[0x2C] )
          break;
        v6 = v5;
        v5 = (_DWORD *)*v5;
        if ( !v5 )
          goto LABEL_9;
      }
      if ( v2 != result[0x2C] )
      {
LABEL_9:
        result = (_DWORD *)FormHeapAlloc(8u);
        result[1] = a2;
        *result = v5;
        *v6 = result;
      }
    }
  }
  else
  {
    result = (_DWORD *)FormHeapAlloc(8u);
    result[1] = a2;
    *result = *a1;
    *a1 = result;
  }
  return result;
}
