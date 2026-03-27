int __usercall sub_8DCF10@<eax>(int result@<eax>, int a2, int a3, int a4)
{
  int i; // edi
  int v5; // ecx
  int j; // edx
  int v7; // ecx

  for ( i = *(_DWORD *)(a2 + 0x134) - 1; i >= 0; --i )
  {
    result = *(_DWORD *)(a2 + 0x130);
    v5 = *(_DWORD *)(result + 4 * i);
    if ( v5 )
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 4))(v5, a3, a4);
  }
  for ( j = *(_DWORD *)(a2 + 0x134) - 1; j >= 0; --j )
  {
    result = *(_DWORD *)(a2 + 0x130);
    if ( !*(_DWORD *)(result + 4 * j) )
    {
      v7 = *(_DWORD *)(a2 + 0x134) - 1;
      *(_DWORD *)(a2 + 0x134) = v7;
      for ( result = j; result < *(_DWORD *)(a2 + 0x134); ++result )
        *(_DWORD *)(*(_DWORD *)(a2 + 0x130) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x130) + 4 * result + 4);
    }
  }
  return result;
}
