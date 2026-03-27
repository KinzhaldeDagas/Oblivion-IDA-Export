int __usercall sub_8DC0A0@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  *(_DWORD *)(a3 + 0x10) = a2;
  for ( i = *(_DWORD *)(a2 + 0x98) - 1; i >= 0; --i )
  {
    result = *(_DWORD *)(a2 + 0x94);
    v4 = *(_DWORD *)(result + 4 * i);
    if ( v4 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a3);
  }
  for ( j = *(_DWORD *)(a2 + 0x98) - 1; j >= 0; --j )
  {
    result = *(_DWORD *)(a2 + 0x94);
    if ( !*(_DWORD *)(result + 4 * j) )
    {
      v6 = *(_DWORD *)(a2 + 0x98) - 1;
      *(_DWORD *)(a2 + 0x98) = v6;
      for ( result = j; result < *(_DWORD *)(a2 + 0x98); ++result )
        *(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 4 * result + 4);
    }
  }
  return result;
}
