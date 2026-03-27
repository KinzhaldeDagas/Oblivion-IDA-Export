int __usercall sub_8DC260@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xC8) - 1; i >= 0; --i )
  {
    result = *(_DWORD *)(a2 + 0xC4);
    v4 = *(_DWORD *)(result + 4 * i);
    if ( v4 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, a3);
  }
  for ( j = *(_DWORD *)(a2 + 0xC8) - 1; j >= 0; --j )
  {
    result = *(_DWORD *)(a2 + 0xC4);
    if ( !*(_DWORD *)(result + 4 * j) )
    {
      v6 = *(_DWORD *)(a2 + 0xC8) - 1;
      *(_DWORD *)(a2 + 0xC8) = v6;
      for ( result = j; result < *(_DWORD *)(a2 + 0xC8); ++result )
        *(_DWORD *)(*(_DWORD *)(a2 + 0xC4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xC4) + 4 * result + 4);
    }
  }
  return result;
}
