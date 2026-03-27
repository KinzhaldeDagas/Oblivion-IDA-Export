int __usercall sub_8DCA40@<eax>(int result@<eax>, int a2)
{
  int i; // edi
  int v3; // ecx
  int j; // edx
  int v5; // ecx

  for ( i = *(_DWORD *)(a2 + 0xF8) - 1; i >= 0; --i )
  {
    result = *(_DWORD *)(a2 + 0xF4);
    v3 = *(_DWORD *)(result + 4 * i);
    if ( v3 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, a2);
  }
  for ( j = *(_DWORD *)(a2 + 0xF8) - 1; j >= 0; --j )
  {
    result = *(_DWORD *)(a2 + 0xF4);
    if ( !*(_DWORD *)(result + 4 * j) )
    {
      v5 = *(_DWORD *)(a2 + 0xF8) - 1;
      *(_DWORD *)(a2 + 0xF8) = v5;
      for ( result = j; result < *(_DWORD *)(a2 + 0xF8); ++result )
        *(_DWORD *)(*(_DWORD *)(a2 + 0xF4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xF4) + 4 * result + 4);
    }
  }
  return result;
}
