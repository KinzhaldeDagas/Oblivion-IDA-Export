int __usercall sub_8DCFA0@<eax>(int result@<eax>, int a2, int a3, int a4)
{
  int i; // edi
  int v5; // ecx
  int j; // edx
  int v7; // ecx

  for ( i = *(_DWORD *)(a2 + 0x140) - 1; i >= 0; --i )
  {
    result = *(_DWORD *)(a2 + 0x13C);
    v5 = *(_DWORD *)(result + 4 * i);
    if ( v5 )
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 4))(v5, a3, a4);
  }
  for ( j = *(_DWORD *)(a2 + 0x140) - 1; j >= 0; --j )
  {
    result = *(_DWORD *)(a2 + 0x13C);
    if ( !*(_DWORD *)(result + 4 * j) )
    {
      v7 = *(_DWORD *)(a2 + 0x140) - 1;
      *(_DWORD *)(a2 + 0x140) = v7;
      for ( result = j; result < *(_DWORD *)(a2 + 0x140); ++result )
        *(_DWORD *)(*(_DWORD *)(a2 + 0x13C) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x13C) + 4 * result + 4);
    }
  }
  return result;
}
