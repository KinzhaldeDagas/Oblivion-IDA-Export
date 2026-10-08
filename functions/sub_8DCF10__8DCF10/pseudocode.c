int __usercall sub_8DCF10@<eax>(int result@<eax>, int a2, int a3, int a4)
{
  int i; // edi
  int v5; // ecx
  int j; // edx
  int v7; // ecx

  for ( i = *(_DWORD *)(a2 + 0x134) - 1; i >= 0; --i ) /*0x8dcf1e*/
  {
    result = *(_DWORD *)(a2 + 0x130); /*0x8dcf30*/
    v5 = *(_DWORD *)(result + 4 * i); /*0x8dcf36*/
    if ( v5 ) /*0x8dcf3b*/
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 4))(v5, a3, a4); /*0x8dcf41*/
  }
  for ( j = *(_DWORD *)(a2 + 0x134) - 1; j >= 0; --j ) /*0x8dcf4f*/
  {
    result = *(_DWORD *)(a2 + 0x130); /*0x8dcf51*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dcf57*/
    {
      v7 = *(_DWORD *)(a2 + 0x134) - 1; /*0x8dcf64*/
      *(_DWORD *)(a2 + 0x134) = v7; /*0x8dcf68*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x134); ++result ) /*0x8dcf70*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x130) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x130) + 4 * result + 4); /*0x8dcf7f*/
    }
  }
  return result; /*0x8dcf8f*/
}
