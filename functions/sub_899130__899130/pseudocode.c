int __usercall sub_899130@<eax>(_DWORD *a1@<edi>, _DWORD *a2)
{
  int result; // eax
  _DWORD *v3; // esi
  int i; // ebx
  int v5; // eax
  int j; // esi

  result = a1[0x2F];
  v3 = (_DWORD *)a1[0x55];
  if ( v3 )
  {
    for ( i = 0; i < result; ++i )
    {
      v5 = *(_DWORD *)(a1[0x2E] + 4 * i);
      if ( v5 != v3[5] && v5 != v3[6] && v5 != v3[7] && v5 != v3[8] && v5 != v3[9] && v5 != v3[0xA] )
        sub_8DA0C0(a2, *(_WORD **)(a1[0x2E] + 4 * i));
      result = a1[0x2F];
    }
  }
  else
  {
    for ( j = 0; j < result; ++j )
    {
      sub_8DA0C0(a2, *(_WORD **)(a1[0x2E] + 4 * j));
      result = a1[0x2F];
    }
  }
  return result;
}
