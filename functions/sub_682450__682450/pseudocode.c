double __userpurge sub_682450@<st0>(double result@<st0>, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  char v4; // al

  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 0x20) != 2 )
    {
      if ( !*(_DWORD *)(a2 + 8) )
      {
        v2 = (_DWORD *)FormHeapAlloc(0x14u);
        if ( v2 )
          v3 = sub_68A9F0(v2);
        else
          v3 = 0;
        *(_DWORD *)(a2 + 8) = v3;
      }
      result = sub_68B030(
                 (int *)*(_DWORD *)(a2 + 8),
                 result,
                 (_DWORD *)*(_DWORD *)(a2 + 4),
                 (float *)(a2 + 0x14),
                 (_BYTE *)*(_DWORD *)(a2 + 0xC),
                 (_DWORD *)*(_DWORD *)(a2 + 0x10));
      if ( !v4 )
        *(_BYTE *)(a2 + 0x24) = 0;
      *(_DWORD *)(a2 + 0x20) = 2;
    }
  }
  return result;
}
