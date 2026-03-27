int __cdecl sub_8E77F0(int a1, float a2, int a3, _DWORD *a4)
{
  int result; // eax
  int i; // ebp
  unsigned __int8 *v6; // esi
  int v7; // edi
  unsigned __int8 *j; // edi

  result = *(_DWORD *)(a1 + 0x48);
  for ( i = 0; i < result; result = *(_DWORD *)(a1 + 0x48) )
  {
    v6 = *(unsigned __int8 **)(*(_DWORD *)(a1 + 0x44) + 4 * i++);
    if ( i == result )
      v7 = *(_DWORD *)(a1 + 0x54);
    else
      v7 = *(unsigned __int16 *)(a1 + 0x5A);
    for ( j = &v6[v7]; v6 < j; v6 += v6[3] )
      sub_8E6630(v6, a2, a3, a4);
  }
  return result;
}
